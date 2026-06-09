from __future__ import annotations

import time
import numpy as np

from examples.H20.deploy.utils.task_utils import mark_task_done, should_apply_gripper_lock
from examples.H20.robots.gripper.gripper_control import LEFT_GRIPPER_CLOSE_POS, RIGHT_GRIPPER_CLOSE_POS


class ActionExecutor:
    def __init__(self, controller):
        self.c = controller

    def execute_step(self, action, current_task: str, left_smoother, right_smoother, *, allow_inactive_arm_freeze: bool = False, allow_done_flag: bool = False) -> bool:
        c = self.c
        left_arm = np.array(action[0:7])
        left_gripper = action[7]
        right_arm = np.array(action[8:15])
        right_gripper = action[15]

        if allow_done_flag and getattr(c.args, "enable_done_flag", False) and len(action) > 16 and action[16] >= 0.5:
            c._mark_current_task_done()
            return True

        stable_left_gripper = left_smoother.update(left_gripper)
        stable_right_gripper = right_smoother.update(right_gripper)
        final_left_gripper = LEFT_GRIPPER_CLOSE_POS if stable_left_gripper >= 0.5 else 0.01
        final_right_gripper = RIGHT_GRIPPER_CLOSE_POS if stable_right_gripper >= 0.5 else 0.01

        if should_apply_gripper_lock("left", c.current_task_id, c.hand_state):
            final_left_gripper = c.hand_state["left"]["locked_gripper_pos"]
        if should_apply_gripper_lock("right", c.current_task_id, c.hand_state):
            final_right_gripper = c.hand_state["right"]["locked_gripper_pos"]

        if allow_inactive_arm_freeze and getattr(c.args, "enable_inactive_arm_freeze", False):
            if c.freeze_left:
                if c.hold_left_arm is None:
                    c.hold_left_arm = c.left_arm_joints.copy()
                left_arm = np.array(c.hold_left_arm, dtype=float)

            if c.freeze_right:
                if c.hold_right_arm is None:
                    c.hold_right_arm = c.right_arm_joints.copy()
                right_arm = np.array(c.hold_right_arm, dtype=float)

        c._apply_arm_slice(15, left_arm)
        c._apply_arm_slice(22, right_arm)
        ret = c.high_level.realtimeMove(c.cmd)
        if ret != 0:
            print(f"[ActionExecutor] realtimeMove failed, ret={ret}")
            return True
        c.gripper_controller.set_left_right_gripper(final_left_gripper, final_right_gripper)

        ret, c.low_state = c.low_level.readLowState()
        control_sleep = float(getattr(c.args, "control_sleep", 0.0))
        if control_sleep > 0:
            time.sleep(control_sleep)
        if ret != 0 and ret != -512:
            return True
        if c.low_state is None:
            time.sleep(0.01)
            return False

        for i in range(15, 22):
            c.left_arm_joints[i - 15] = c.low_state.motor_state[i].q
        for i in range(22, 29):
            c.right_arm_joints[i - 22] = c.low_state.motor_state[i].q
        c.prev_left_arm = c.left_arm_joints.copy()
        c.prev_right_arm = c.right_arm_joints.copy()

        if allow_done_flag and getattr(c.args, "enable_done_flag", False):
            if c.current_task_id in c.task_list:
                mark_task_done(c.current_task_id, c.hand_state)
        return False
