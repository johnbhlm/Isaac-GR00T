"""H20 keyboard deployment: robot state, motion, and policy inference loop."""

import time
import threading
import enum
# import torch
import numpy as np
import rclpy
from rclpy.executors import MultiThreadedExecutor
# from pynput import keyboard
from collections import deque
from examples.H20.robots.camera.camera_manager import CameraManager

import os
import sys
USE_PYNPUT = bool(os.environ.get("DISPLAY"))

if USE_PYNPUT:
    from pynput import keyboard
else:
    keyboard = None

import humanoid_sdk_py
from humanoid_sdk_py import h2x
# from examples.H20.robots.camera.realsense import Camera

from examples.H20.robots.gripper.gripper_control import (
    LEFT_GRIPPER_CLOSE_POS,
    RIGHT_GRIPPER_CLOSE_POS,
    GripperController,
    GripperSmoother,
)
from examples.H20.deploy.ai_agent.grasp_flow_node import GraspFlowNode
from examples.H20.deploy.utils.keyboard_handlers import make_on_press,SSHKeyboardListener
from examples.H20.deploy.utils.task_utils import mark_task_done, mark_task_done_by_hand, should_apply_gripper_lock
from examples.H20.deploy.configs import DeployArgs as Args
from examples.H20.robots.groot_h20_interface import GrootH20ModelClient as ModelClient
from examples.H20.deploy.runtime.observation import ObservationBuilder
from examples.H20.deploy.runtime.action_executor import ActionExecutor
from examples.H20.deploy.runtime.runners import SyncRunner, AsyncRunner

MOTOR_COUNT = 29

class RobotState(enum.Enum):
    IDLE = "idle"
    RUNNING = "running"
    ERROR = "error"

class H20VLA:
    def __init__(self, args: Args):
        self.args = args
        self.high_level = h2x.H2xHighLevel()
        self.low_level = h2x.H2xLowLevel()
        self.cmd = h2x.RealtimeCmd()

        self.arm_joints = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
                           0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        self.arm_joints_pre = self.arm_joints.copy()
        self.left_arm_joints =  [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
        self.right_arm_joints = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]

        self.kp = np.array([400.0, 400.0, 200.0, 200.0, 200.0, 200.0, 200.0])
        self.kd = np.array([16.0, 16.0, 16.0, 16.0, 16.0, 16.0, 16.0])

        # init flag
        self.robot_mode = "homie" # "homie" or "walk"
        self.switch_2_homie = False
        self._deploy_flag = False
        self._deploy_started = False
        self._init_finish = False
        self._init_flag = False
        self._walk_arm_flag = False
        self._walk_arm_finish = False
        self.trainsition_flag = False
        self.prev_left_arm = None # 用于残差积累的上一个动作，初始为None表示没有
        self.prev_right_arm = None # 用于残差积累的上一个动作，初始为None表示没有
        self._task_done_requested = False
        self.hold_left_arm = None
        self.hold_right_arm = None
        # terminate flag
        self.infer_counter = 0
        self.stop = False

        # self.head_camera = Camera(width=424, height=240, fps=30, serial_number="243322072176", calibrate_done=False)
        # self.left_camera = Camera(width=424, height=240, fps=15, serial_number="352122273395", calibrate_done=False)
        # self.right_camera = Camera(width=424, height=240, fps=15, serial_number="352122274580",  calibrate_done=False)

        self.task_list = {
            # white desk 
            "1": "Pick up the green dinosaur from the desk with the left hand",
            "2": "Place the green dinosaur on the desk with the left hand",
            "3": "Pick up the yellow duck from the desk with the left hand",
            "4": "Place the yellow duck on the desk with the left hand",
            "5": "Pick up the orange lion from the desk with the left hand",
            "6": "Place the orange lion on the desk with the left hand",
            "7": "Pick up the yellow duck from the desk with the right hand",
            "8": "Place the yellow duck on the desk with the right hand",
            "9": "Pick up the green dinosaur from the desk with the right hand",
            "0": "Place the green dinosaur on the desk with the right hand",
            "a": "Pick up the orange lion from the desk with the right hand",
            "b": "Place the orange lion on the desk with the right hand",
            "c": "Give me the green dinosaur in the left hand",
            "d": "Give me the green dinosaur in the right hand",
            "m": "Give me the yellow duck in the left hand",
            "n": "Give me the yellow duck in the right hand",
            "z": "Give me the orange lion in the left hand",
            "x": "Give me the orange lion in the right hand",
        }

        self.current_task_id = "1"  # 默认任务
        self.current_task = self.task_list[self.current_task_id]
        self.task_switch_flag = False
        
        self.task_finished = False
        self.stop_program = False

        self.done_flag_list = deque([0.0] * 30, maxlen=30)
        self.task_finished = False

        self.inference_dt = 0.2
        self.cmd_dt = 0.01
        self.action_horizon = 16
        self.cmd.time = 0.2
        self.init_dt = 0.01
        self.interp_steps = 1 # 每个动作插值的控制周期数

        

        # self.init_angles = np.array([ 0.567232,  0.596903, -0.001745, -0.214672,  -0.383972, -0.371735, -0.591789, # 7
                                    #   0.567232, -0.596903,  0.001745, -0.214672,   0.383972,  -0.371735, 0.591789]) # 1, 6, 7

        self.init_angles = np.array([ 1.116907,  0.582977,  0.165563, -0.351765, -0.316978, -0.763985, -0.0093815,
                                      1.116907, -0.582977, -0.165563, -0.351765,  0.316978, -0.763985,  0.0093815])

        self.walk_arm_angles = np.array([0.251601,  0.233072, -0.004515,  1.007003, -0.000659, 0.017820, -0.004575, 
                                         0.254894, -0.256954, -0.012773, 0.955972,  0.001297, 0.000944,  0.000347])
        
        # from inside
        self.transition_angles = np.array([1.567048,  0.501358,  0.310389, -0.18203,  0.375669, -1.288784,  0.200134094, 
                                           1.567048, -0.501358, -0.310389, -0.188203, -0.375669, -1.288784, -0.200134094])
        

        self.outlier_upper = np.array([2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0,
                                       2.0, 0.15, 2.0, 2.0, 2.0, 2.0, 2.0,])
        self.outlier_lower = np.array([-2.0, -0.15, -2.0, -2.0, -2.0, -2.0, -2.0,
                                       -2.0, -2.0,  -2.0, -2.0, -2.0, -2.0, -2.0,])

        rclpy.init()
        self.camera_manager = CameraManager()
        self.gripper_controller = GripperController()
        self.grasp_flow_node = GraspFlowNode(self)
        self.executor = MultiThreadedExecutor()
        self.executor.add_node(self.camera_manager)
        self.executor.add_node(self.gripper_controller)
        self.executor.add_node(self.grasp_flow_node)
        self.executor_thread = threading.Thread(target=self.executor.spin, daemon=True)
        self.executor_thread.start()

        # self.real_time_interpolator = RealtimeCmdInterpolator()

        self.control_lock = threading.Lock()
        self.current_thread = None
        self.current_mode = None  # "init" | "walk_arm" | "infer"

        # ===== 任务完成 / 持物 / 夹爪锁定状态 =====
        self.task_done_flag = False

        # 主状态机：pick/place/reset 互斥 + reset 排队
        self._state = RobotState.IDLE
        self._state_lock = threading.RLock()
        self._done_event = threading.Event()
        self._done_event.set()
        self._reset_pending = False

        self.hand_state = {
            "left": {
                "holding": False,            # 左手当前是否持物
                "gripper_locked": False,     # 左手夹爪是否锁定
                "locked_gripper_pos": 0.01,  # 锁定时保持的位置
            },
            "right": {
                "holding": False,
                "gripper_locked": False,
                "locked_gripper_pos": 0.01,
            }
        }

        # 可选：锁住非当前任务手臂，避免持物手被模型带着动
        self.freeze_inactive_arm = True

        # ===============================
        # 判断是否需要冻结某侧手臂
        # ===============================
        self.freeze_left = False
        self.freeze_right = False


    def start_exclusive_thread(self, target, mode_name):
        """确保同一时间只运行一个线程"""

        with self.control_lock:

            # 如果已有线程在运行，先停止
            if self.current_thread is not None and self.current_thread.is_alive():
                print(f"[INFO] Stopping previous thread: {self.current_mode}")

                # 停止 infer
                self._deploy_flag = False
                self._walk_arm_flag = False
                self._init_flag = False

                time.sleep(0.1)

            print(f"[INFO] Starting new thread: {mode_name}")

            self.current_mode = mode_name
            self.current_thread = threading.Thread(target=target, daemon=True)
            self.current_thread.start()

    def _read_current_arm_joints(self) -> np.ndarray:
        for i in range(15, MOTOR_COUNT):
            self.arm_joints[i - 15] = self.low_state.motor_state[i].q
        return np.array(self.arm_joints)

    def _apply_waist_lock(self) -> None:
        for i in range(12,15):
            self.cmd.motor_cmd[i].kp = 300.0
            self.cmd.motor_cmd[i].kd = 1.0
            self.cmd.motor_cmd[i].mode = 1
            self.cmd.motor_cmd[i].q = 0.0
        # self.cmd.motor_cmd[14].q = -0.05

    def _apply_arm_target_range(
        self,
        joint_target: np.ndarray,
        start_index: int,
        end_index: int,
        source_offset: int,
        kp: float,
        kd: float,
    ) -> None:
        for i in range(start_index, end_index):
            self.cmd.motor_cmd[i].mode = 1
            self.cmd.motor_cmd[i].q = float(joint_target[i - source_offset])
            self.cmd.motor_cmd[i].kp = kp
            self.cmd.motor_cmd[i].kd = kd

    def _apply_arm_slice(self, start_index: int, targets: np.ndarray) -> None:
        for offset, target in enumerate(targets):
            motor_idx = start_index + offset
            self.cmd.motor_cmd[motor_idx].mode = 1
            self.cmd.motor_cmd[motor_idx].q = float(target)
            self.cmd.motor_cmd[motor_idx].kp = self.kp[offset]
            self.cmd.motor_cmd[motor_idx].kd = self.kd[offset]


    def move_arm_pose(self, label: str) -> int | None:
        """
        Unified arm motion entry points.
        Labels: "init", "left", "right", "walk".
        Policy inference is started only after full-body "init" completes (not for "left"/"right"/"walk").
        """
        if label == "init":
            if self.current_mode != "init":
                return None
            time.sleep(0.1)
            print("[INFO]: Initialzation started!")
            self._init_flag = True
            self._walk_arm_flag = False
            self._walk_arm_finish = False

            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("Failed to read low state!")
                return -1

            loop_count = 100
            trainsition_count = 100
            joint_target = self._read_current_arm_joints()

            if not self.trainsition_flag and not self._init_finish:
                diff = (self.transition_angles - joint_target) / trainsition_count
                for _ in range(trainsition_count):
                    joint_target += diff
                    self._apply_waist_lock()
                    self._apply_arm_target_range(
                        joint_target=joint_target,
                        start_index=15,
                        end_index=MOTOR_COUNT,
                        source_offset=15,
                        kp=300.0,
                        kd=10.0,
                    )
                    self.high_level.realtimeMove(self.cmd)
                    time.sleep(self.init_dt)
                self.trainsition_flag = True
                self._init_finish = False

            diff = (self.init_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_waist_lock()
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=15,
                    end_index=MOTOR_COUNT,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            self.trainsition_flag = False
            print("[INFO]: Initialzation finish!")
            self._init_flag = False
            self._init_finish = True

            if self._init_finish and not self._init_flag:
                self.start_exclusive_thread(self.infer, "infer")
                print("[INFO]: Policy deployed!")
            return None

        if label == "left":
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("Failed to read low state!")
                return -1
            loop_count = 100
            joint_target = self._read_current_arm_joints()
            diff = (self.init_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=15,
                    end_index=22,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            return None

        if label == "right":
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("[move2int] Failed to read low state!")
                return -1
            loop_count = 100
            joint_target = self._read_current_arm_joints()
            diff = (self.init_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=22,
                    end_index=29,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            return None

        if label == "walk":
            if self.current_mode != "walk_arm":
                return None
            self._walk_arm_flag = True
            self._init_flag = False
            self._init_finish = False
            print("[INFO]: Move to walk arm pose!")

            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("[move2pos] Failed to read low state!")
                return -1

            loop_count = 100
            trainsition_count = 100
            joint_target = self._read_current_arm_joints()
            self.arm_joints_pre = self.arm_joints.copy()
            if not self.trainsition_flag and not self._walk_arm_finish:
                diff = (self.transition_angles - joint_target) / trainsition_count
                for _ in range(trainsition_count):
                    joint_target += diff
                    self._apply_waist_lock()
                    self._apply_arm_target_range(
                        joint_target=joint_target,
                        start_index=15,
                        end_index=MOTOR_COUNT,
                        source_offset=15,
                        kp=300.0,
                        kd=10.0,
                    )
                    self.high_level.realtimeMove(self.cmd)
                    time.sleep(self.init_dt)
                self.trainsition_flag = True

            diff = (self.walk_arm_angles - joint_target) / loop_count
            for _ in range(loop_count):
                joint_target += diff
                self._apply_waist_lock()
                self._apply_arm_target_range(
                    joint_target=joint_target,
                    start_index=15,
                    end_index=MOTOR_COUNT,
                    source_offset=15,
                    kp=300.0,
                    kd=10.0,
                )
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.init_dt)
            self.trainsition_flag = False
            print("[INFO]: Walk arm pose reached!")
            self._walk_arm_flag = False
            self._walk_arm_finish = True

            while self.robot_mode == "homie" and not self._deploy_started and not self._init_flag:
                self.high_level.realtimeMove(self.cmd)
                time.sleep(self.inference_dt)
            return None

        raise ValueError(f"Unknown move_arm_pose label: {label!r}")

    def _capture_current_arm_as_hold_targets(self) -> bool:
        ret, self.low_state = self.low_level.readLowState()
        if (ret != 0 and ret != -512) or self.low_state is None:
            print(f"[hold] failed to capture arm hold targets, ret={ret}")
            return False

        for i in range(15, 22):
            self.left_arm_joints[i - 15] = self.low_state.motor_state[i].q
        for i in range(22, 29):
            self.right_arm_joints[i - 22] = self.low_state.motor_state[i].q

        self.hold_left_arm = self.left_arm_joints.copy()
        self.hold_right_arm = self.right_arm_joints.copy()
        self.prev_left_arm = self.left_arm_joints.copy()
        self.prev_right_arm = self.right_arm_joints.copy()
        return True

    def _configure_freeze_by_task(self, current_task: str) -> None:
        if "left" in current_task:
            self.freeze_right = True
            self.freeze_left = False
        elif "right" in current_task:
            self.freeze_left = True
            self.freeze_right = False

    def _update_gripper_state(self, current_task: str) -> None:
        self.left_gripper_state = self.gripper_controller.gripper_state.motor_state[0].q
        self.right_gripper_state = self.gripper_controller.gripper_state.motor_state[1].q
        self.left_gripper_state = 0.0 if self.left_gripper_state < 0.06 else 1.0
        self.right_gripper_state = 0.0 if self.right_gripper_state < 0.06 else 1.0
        if self.freeze_right and "Place" in current_task:
            self.right_gripper_state = 0.0
        if self.freeze_left and "Place" in current_task:
            self.left_gripper_state = 0.0



    def is_idle(self) -> bool:
        with self._state_lock:
            return self._state == RobotState.IDLE and not self._reset_pending

    def try_acquire_for_pick_place(self) -> bool:
        with self._state_lock:
            if self._state != RobotState.IDLE or self._reset_pending:
                return False
            self._state = RobotState.RUNNING
            self._task_done_requested = False
            self._done_event.clear()
            return True

    def try_acquire_for_reset(self) -> bool:
        with self._state_lock:
            if self._reset_pending:
                return False
            if self._state == RobotState.IDLE:
                self._state = RobotState.RUNNING
                self._task_done_requested = False
                self._done_event.clear()
                return True
            if self._state == RobotState.RUNNING:
                self._reset_pending = True
                self._task_done_requested = True
                return True
            return False

    def acquire_for_reset_blocking(self) -> bool:
        if not self.try_acquire_for_reset():
            return False
        if self._reset_pending:
            self._done_event.wait()
            with self._state_lock:
                self._state = RobotState.RUNNING
                self._task_done_requested = False
                self._done_event.clear()
                self._reset_pending = False
        return True

    def _release_to_idle(self) -> None:
        with self._state_lock:
            self._state = RobotState.IDLE
            self._task_done_requested = False
        self._done_event.set()

    def _ensure_hand_in_prompt(self, prompt: str, hand: str) -> str:
        if not hand:
            return prompt
        p = prompt.lower()
        has_hand = (
            "left" in p or "right" in p
            or "左手" in prompt or "右手" in prompt
            or "左臂" in prompt or "右臂" in prompt
        )
        if has_hand:
            return prompt
        hand = hand.lower()
        if hand in {"left", "左", "左手", "left_hand"}:
            return f"{prompt} with the left hand"
        if hand in {"right", "右", "右手", "right_hand"}:
            return f"{prompt} with the right hand"
        return prompt







    def _mark_current_task_done(self) -> None:
        self._task_done_requested = True
        self.task_done_flag = True
        if "left" in self.current_task:
            self.move_arm_pose("left")
        elif "right" in self.current_task:
            self.move_arm_pose("right")
        if self.current_task_id in self.task_list:
            mark_task_done(self.current_task_id, self.hand_state)
        else:
            hand = "left" if self.freeze_right else "right"
            action = "pick" if "pick" in self.current_task.lower() else "place"
            mark_task_done_by_hand(hand, action, self.hand_state)


    def infer(self):
        time.sleep(0.06)
        self._deploy_started = True
        model = None
        async_runner = None
        try:
            model = ModelClient(
                # policy_ckpt_path=self.args.pretrained_path,
                host=self.args.host,
                port=self.args.port,
                image_size=list(self.args.resize_size),
            )
            self._deploy_flag = True
            self.left_gripper_smoother = GripperSmoother()
            self.right_gripper_smoother = GripperSmoother(window=2)
            obs_builder = ObservationBuilder(self)
            action_executor = ActionExecutor(self)
            sync_runner = SyncRunner(self, model, obs_builder, action_executor)
            async_runner = AsyncRunner(self, model, obs_builder, action_executor)
            while not self.stop_program and self.current_mode == "infer" and self._deploy_flag and not getattr(self, "_task_done_requested", False):
                if self.task_switch_flag:
                    self.task_switch_flag = False
                    self.task_finished = False
                    if self.current_task_id in self.task_list:
                        current_task = self.task_list[self.current_task_id]
                        self.current_task = current_task
                    else:
                        current_task = getattr(self, "current_task", self.task_list.get(self.current_task_id))
                    self._configure_freeze_by_task(current_task)
                    if hasattr(self, '_capture_current_arm_as_hold_targets'):
                        self._capture_current_arm_as_hold_targets()
                    print(f"[TASK] Switched to: {current_task}")
                else:
                    current_task = self.task_list.get(self.current_task_id, getattr(self, "current_task", ""))
                self._configure_freeze_by_task(current_task)
                mode = str(getattr(self.args, "run_mode", "sync")).lower()
                if mode == "sync":
                    sync_runner.run(current_task)
                elif mode == "async":
                    async_runner.run(current_task)
                else:
                    raise ValueError(f"Unsupported run_mode={mode}. Only sync/async are supported.")
        finally:
            if async_runner is not None:
                async_runner.close_worker()
            if model is not None and hasattr(model, "close"):
                model.close()




    def agent_pick_command_exec(self, prompt: str, hand: str) -> None:
        if not self.try_acquire_for_pick_place():
            raise RuntimeError("VLA is busy, previous task not finished")
        try:
            prompt = self._ensure_hand_in_prompt(prompt, hand)
            self.current_task = prompt
            self.current_task_id = ""
            self.task_switch_flag = True
            self.move_arm_pose("init")
            self.infer()
        finally:
            self._release_to_idle()

    def agent_place_command_exec(self, prompt: str, hand: str) -> None:
        if not self.try_acquire_for_pick_place():
            raise RuntimeError("VLA is busy, previous task not finished")
        try:
            prompt = self._ensure_hand_in_prompt(prompt, hand)
            self.current_task = prompt
            self.current_task_id = ""
            self.task_switch_flag = True
            self.move_arm_pose("init")
            self.infer()
        finally:
            self._release_to_idle()

    def agent_reset_command_exec(self) -> None:
        if not self.acquire_for_reset_blocking():
            raise RuntimeError("reset already pending")
        try:
            ret, current_mode = self.high_level.GetRobotMode()
            if ret != 0:
                raise RuntimeError(f"GetRobotMode failed, ret={ret}")
            if current_mode == 4:
                return
            if current_mode != 10:
                raise RuntimeError(f"robot mode {current_mode} is not HalfWalk(10), reset skipped")
            self.move_arm_pose("walk")
            ret = self.high_level.WalkRunMode()
            if ret != 0:
                raise RuntimeError(f"WalkRunMode failed, ret={ret}")
        finally:
            self._release_to_idle()


    # =========================
    # 主控制循环
    # =========================
    def run(self):
        self.start_keyboard_listener()

        self.gripper_controller.open_gripper()
        self.trainsition_flag = True
        print("[INFO]: AI agent action servers ready (pick_action / place_action / reset_action)")
        while True:
            ret, self.low_state = self.low_level.readLowState()
            if ret != 0 and ret != -512:
                print("[run] Failed to read low state!", ret)
                return -1

            if self.stop_program:
                print("[INFO]: Stop!!!")
                break

            time.sleep(1.0)

    def start_keyboard_listener(self):
        if USE_PYNPUT:
            listener = keyboard.Listener(on_press=make_on_press(self))
            listener.daemon = True
            listener.start()
            print("[INFO]: Keyboard activated with pynput (GUI/X11 mode)!")
        else:
            listener = SSHKeyboardListener(on_press=make_on_press(self))
            listener.start()
            print("[INFO]: Keyboard activated in SSH terminal mode!")
            print("[INFO]: Press 1-8 to switch task, i to start inference, q to quit.")
        return listener
