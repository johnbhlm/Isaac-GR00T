from __future__ import annotations

import time
import numpy as np

from examples.H20.deploy.utils.async_runtime import AsyncChunkInferenceWorker
from examples.H20.deploy.utils.rtc_utils import apply_action_drop
from examples.H20.robots.groot_h20_interface import GrootH20ModelClient as ModelClient


def select_action_window(actions, action_horizon: int, drop_steps: int = 0):
    if actions is None or len(actions) == 0:
        return None
    actions = np.asarray(actions)[0:action_horizon]
    if drop_steps > 0:
        return apply_action_drop(actions, drop_steps)
    return actions


def infer_action_window(model, example, action_horizon: int, drop_steps: int = 0):
    resp = model.step(example)
    raw_actions = None if resp is None else resp.get("raw_actions")
    return select_action_window(raw_actions, action_horizon=action_horizon, drop_steps=drop_steps)


class SyncRunner:
    def __init__(self, controller, model, observation_builder, action_executor):
        self.c = controller
        self.model = model
        self.obs = observation_builder
        self.executor = action_executor

    def run(self, current_task: str):
        example = self.obs.build(current_task)
        if example is None:
            time.sleep(0.02)
            return
        resp = self.model.step(example)
        raw_actions = None if resp is None else resp.get("raw_actions")
        actions = select_action_window(raw_actions, action_horizon=self.c.action_horizon, drop_steps=int(getattr(self.c.args, "drop_steps", 0)) if getattr(self.c.args, "enable_action_drop", False) else 0)
        if actions is None:
            return
        for action in actions:
            stop = self.executor.execute_step(action, current_task, self.c.left_gripper_smoother, self.c.right_gripper_smoother, allow_inactive_arm_freeze=False, allow_done_flag=False)
            if stop:
                break


class AsyncRunner:
    def __init__(self, controller, main_model, observation_builder, action_executor):
        self.c = controller
        self.main_model = main_model
        self.obs = observation_builder
        self.executor = action_executor
        self.worker_model = None
        self.worker = None

    def _ensure_worker(self):
        if self.worker is not None:
            return
        c = self.c
        async_wait_timeout = float(getattr(c.args, "async_wait_timeout", 0.04))
        self.worker_model = ModelClient(
            # policy_ckpt_path=c.args.pretrained_path,
            host=c.args.host,
            port=c.args.port,
            image_size=list(c.args.resize_size),
        )
        self.worker = AsyncChunkInferenceWorker(self.worker_model, wait_timeout=async_wait_timeout, queue_size=int(getattr(c.args, "async_queue_size", 2)))

    def close_worker(self):
        if self.worker is not None:
            self.worker.stop()
            self.worker = None
        if self.worker_model is not None and hasattr(self.worker_model, "close"):
            self.worker_model.close()
            self.worker_model = None

    def run(self, current_task: str):
        c = self.c
        mode_drop_steps = int(getattr(c.args, "drop_steps", 0)) if bool(getattr(c.args, "enable_action_drop", False)) else 0
        enable_async_fallback = bool(getattr(c.args, "enable_async_fallback", False))
        async_wait_timeout = float(getattr(c.args, "async_wait_timeout", 0.04))
        self._ensure_worker()
        worker = self.worker
        example = self.obs.build(current_task)
        if example is None:
            time.sleep(0.02)
            return
        actions = infer_action_window(self.main_model, example, c.action_horizon, drop_steps=mode_drop_steps)
        if actions is None:
            time.sleep(0.02)
            return
        task_epoch = worker.start_new_task(); request_id = 0; pending_request_id = None
        prefetch_lead_steps = int(getattr(c.args, "prefetch_lead_steps", 8))
        while not c.stop_program and c.current_mode == "infer" and c._deploy_flag and not c._task_done_requested:
            if c.task_switch_flag:
                self.close_worker(); return
            chunk_len = len(actions); prefetch_index = max(0, chunk_len - prefetch_lead_steps); switched = False
            prefetch_sent = False
            for i, action in enumerate(actions):
                if c.task_switch_flag:
                    self.close_worker(); return
                stop = self.executor.execute_step(action, current_task, c.left_gripper_smoother, c.right_gripper_smoother, allow_inactive_arm_freeze=bool(getattr(c.args, "enable_inactive_arm_freeze", False)), allow_done_flag=bool(getattr(c.args, "enable_done_flag", False)))
                if stop:
                    self.close_worker(); return
                if (not prefetch_sent) and pending_request_id is None and i >= prefetch_index:
                    next_example = self.obs.build(current_task)
                    if next_example is not None:
                        request_id += 1
                        if worker.request(next_example, request_id, task_epoch):
                            pending_request_id = request_id
                            prefetch_sent = True
                if pending_request_id is not None:
                    hit = worker.get_latest_matching_request(pending_request_id, task_epoch)
                    if hit is not None:
                        _, got = hit
                        next_actions = select_action_window(got, c.action_horizon, drop_steps=mode_drop_steps)
                        if next_actions is not None:
                            actions = next_actions; pending_request_id = None; prefetch_sent = False; switched = True; break
            if switched:
                continue
            if pending_request_id is not None:
                try:
                    _, got = worker.get_blocking_for_request(pending_request_id, task_epoch, async_wait_timeout)
                    next_actions = select_action_window(got, c.action_horizon, drop_steps=mode_drop_steps)
                    if next_actions is not None:
                        actions = next_actions; pending_request_id = None; prefetch_sent = False; continue
                    if not enable_async_fallback:
                        time.sleep(0.005)
                        continue
                    pending_request_id = None
                except Exception:
                    if not enable_async_fallback:
                        time.sleep(0.005)
                        continue
                    pending_request_id = None
            latest_example = self.obs.build(current_task)
            if latest_example is None:
                time.sleep(0.02)
                continue
            actions = infer_action_window(self.main_model, latest_example, c.action_horizon, drop_steps=mode_drop_steps)
            if actions is None:
                time.sleep(0.02)
                continue
