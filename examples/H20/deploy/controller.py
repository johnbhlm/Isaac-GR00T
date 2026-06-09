# SPDX-FileCopyrightText: Copyright (c) 2026 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
# SPDX-License-Identifier: Apache-2.0

from __future__ import annotations

import time
from typing import Any

from examples.H20.deploy.configs import DEFAULT_TASKS, H20DeployConfig, H20Task
from examples.H20.deploy.runtime.action_executor import H20ActionExecutor, H20ActionStep
from examples.H20.deploy.runtime.observation import H20ObservationBuilder
from examples.H20.deploy.runtime.runners import ClosedLoopRunner, KeyboardCommand
from examples.H20.robots.model2h20_interface import make_h20_robot_interface
from gr00t.policy.server_client import PolicyClient
import numpy as np


class H20DeploymentClient:
    """Thor-side closed-loop H20 client for a remote GR00T PolicyServer."""

    def __init__(self, cfg: H20DeployConfig):
        self.cfg = cfg
        self.task: H20Task = cfg.selected_task()
        self.robot = make_h20_robot_interface(cfg.robot_adapter, cfg.robot_config)
        self.policy = PolicyClient(
            host=cfg.policy_host,
            port=cfg.policy_port,
            timeout_ms=cfg.policy_timeout_ms,
            api_token=cfg.policy_api_token,
            strict=False,
        )
        self.observation_builder = H20ObservationBuilder(
            video_keys=cfg.video_keys,
            state_keys=cfg.state_keys,
            language_key=cfg.language_key,
        )
        self.action_executor = H20ActionExecutor(
            action_keys=cfg.action_keys,
            interpolation_steps=cfg.interpolation_steps,
            max_joint_step=cfg.max_joint_step,
            gripper_threshold=cfg.gripper_threshold,
            dry_run=cfg.dry_run,
        )
        self.runner = ClosedLoopRunner(cfg.control_hz)
        self.policy_enabled = False
        self.stopped = False
        self.last_policy_info: dict[str, Any] = {}
        self._pending_actions: list[H20ActionStep] = []

    def run(self) -> None:
        self.robot.connect()
        try:
            self._check_policy()
            self._print_help()
            self.runner.run(self._tick)
        finally:
            self.robot.close()

    def _tick(self, command: KeyboardCommand | None) -> bool:
        if command is not None:
            self._handle_key(command.key)
        if self.stopped:
            return False
        if self.policy_enabled:
            self._run_policy_step()
        return True

    def _handle_key(self, key: str) -> None:
        if key in {" ", "s"}:
            self.policy_enabled = False
            self.stopped = True
            print("[H20] stop requested")
        elif key == "e":
            self.policy_enabled = False
            self.robot.emergency_stop()
            print("[H20] emergency stop sent")
        elif key == "r":
            self._pending_actions.clear()
            self.policy.reset()
            print("[H20] policy reset")
        elif key == "p":
            self.policy_enabled = False
            self.move_arm_pose("walk")
        elif key == "i":
            self.move_arm_pose("init")
            self.policy_enabled = True
            print("[H20] policy enabled after init")
        elif key == "f":
            self.policy_enabled = False
            self._pending_actions.clear()
            print(f"[H20] task {self.task.task_id} marked done")
        elif key == "w":
            self.policy_enabled = False
            self.robot.set_motion_mode("walk")
            print("[H20] switched to walk mode")
        elif key == "q":
            self.robot.set_motion_mode("walk_step")
            print("[H20] requested one walk step")
        elif key == "h":
            self.robot.set_motion_mode("homie")
            print("[H20] switched to homie/manipulation mode")
        elif key in DEFAULT_TASKS:
            self.task = DEFAULT_TASKS[key]
            self._pending_actions.clear()
            print(f"[H20] selected task {key}: {self.task.instruction}")
        elif key == "?":
            self._print_help()

    def _run_policy_step(self) -> None:
        if not self._pending_actions:
            observation = self.observation_builder.read_robot(self.robot)
            policy_input = self.observation_builder.to_policy_input(
                observation, self.task.instruction
            )
            started_at = time.time()
            action_chunk, info = self.policy.get_action(policy_input)
            self.last_policy_info = info
            self._pending_actions = self.action_executor.decode_chunk(
                action_chunk, horizon=self.cfg.action_horizon
            )
            print(
                f"[H20] received {len(self._pending_actions)} actions "
                f"in {(time.time() - started_at) * 1000:.1f} ms"
            )
        if self._pending_actions:
            self.action_executor.execute_step(self.robot, self._pending_actions.pop(0))

    def move_arm_pose(self, pose: str) -> None:
        if pose == "init":
            left = np.asarray(self.cfg.left_init_joints, dtype=np.float32)
            right = np.asarray(self.cfg.right_init_joints, dtype=np.float32)
        elif pose == "walk":
            left = np.asarray(self.cfg.left_walk_joints, dtype=np.float32)
            right = np.asarray(self.cfg.right_walk_joints, dtype=np.float32)
        else:
            raise ValueError(f"Unknown H20 pose: {pose}")
        self.action_executor.execute_pose(self.robot, left, right)
        print(f"[H20] moved arms to {pose} pose")

    def _check_policy(self) -> None:
        if not self.policy.ping():
            raise RuntimeError(
                f"Cannot reach GR00T server at {self.cfg.policy_host}:{self.cfg.policy_port}"
            )
        print(f"[H20] connected to GR00T server {self.cfg.policy_host}:{self.cfg.policy_port}")

    def _print_help(self) -> None:
        print(
            "\nH20 keyboard commands:\n"
            "  1-8: select task/instruction\n"
            "  p: walk-safe arm pose\n"
            "  i: init arm pose, then enable GR00T closed-loop policy\n"
            "  f: mark current task done and pause policy\n"
            "  w: switch robot to walk mode and pause policy\n"
            "  q: request one walk step\n"
            "  h: switch back to homie/manipulation mode\n"
            "  r: reset policy server state\n"
            "  e: emergency stop\n"
            "  space or s: stop program\n"
            "  ?: print this help\n"
        )
