from __future__ import annotations

import time
import numpy as np


class ObservationBuilder:
    def __init__(self, controller):
        self.c = controller

    def build(self, current_task: str):
        c = self.c
        # img_top = c.head_camera.get_data()[0]
        # img_left = c.left_camera.get_data()[0]
        # img_right = c.right_camera.get_data()[0]
        # if img_top is None or img_left is None or img_right is None:
        #     time.sleep(0.01)
        #     return None
        
        # 获取相机观测,通过相机ros topic读取
        img_top = c.camera_manager.GetImage("head_camera")
        img_left = c.camera_manager.GetImage("left_wrist_camera")
        img_right = c.camera_manager.GetImage("right_wrist_camera")
        if img_top is None or img_left is None or img_right is None:
            return None
        if c.gripper_controller.gripper_state is None:
            return None     

        c.left_gripper_state = c.gripper_controller.gripper_state.motor_state[0].q
        c.right_gripper_state = c.gripper_controller.gripper_state.motor_state[1].q
        c.left_gripper_state = 0.0 if c.left_gripper_state < 0.06 else 1.0
        c.right_gripper_state = 0.0 if c.right_gripper_state < 0.06 else 1.0

        task = current_task.lower()
        if c.freeze_right and "place" in task:
            c.right_gripper_state = 0.0
        if c.freeze_left and "place" in task:
            c.left_gripper_state = 0.0

        ret, c.low_state = c.low_level.readLowState()
        if ret != 0 and ret != -512:
            return None
        if c.low_state is None:
            time.sleep(0.01)
            return None

        for i in range(15, 22):
            c.left_arm_joints[i - 15] = c.low_state.motor_state[i].q
        for i in range(22, 29):
            c.right_arm_joints[i - 22] = c.low_state.motor_state[i].q

        state = np.array(
            c.left_arm_joints
            + [c.left_gripper_state]
            + c.right_arm_joints
            + [c.right_gripper_state],
            dtype=np.float32,
        )
        return {"image": [img_top, img_left, img_right], "lang": current_task, "state": state}
