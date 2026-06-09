#!/usr/bin/env python3

import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time
import math


def main():
    print("=== Low Level Command Test ===")

    # Initialize objects
    status = h10w.H10wStatus()
    system = h10w.H10wSystem()
    low_level = h10w.H10wLowLevel()

    ret, move_msg = status.getMoveMessage()
    if ret != 0 or move_msg is None:
        print("获取运动信息失败，任务终止")
        exit(-1)

    left_arm_near_zero = all(
        abs(value - 0.0) < 0.001 for value in move_msg.position[:7]
    )
    if not left_arm_near_zero:
        print("为保证安全，请先将左臂回零")
        exit(-1)

    ret = system.controlPower(humanoid_sdk_py.PowerState.POWER_ON)
    if ret != 0:
        print("上电失败")
        exit(-1)

    ret = system.clearError()
    if ret != 0:
        print("清除错误失败")
        exit(-1)

    ret = system.controlBrake(humanoid_sdk_py.BrakeState.BRAKE_ON)
    if ret != 0:
        print("打开抱闸失败")
        exit(-1)

    # Set low level command for left arm joint 1
    MAX_POS = math.pi * 10.0 / 180.0
    DURATION = 10  # ms
    TOTAL_TIME = 2000  # ms
    control_count = TOTAL_TIME // DURATION
    low_cmd = h10w.LowCmd()

    for i in range(control_count):
        start_time = time.time()

        pos = math.sin(math.pi * i * DURATION / 1000.0) * MAX_POS
        vel = math.cos(math.pi * i * DURATION / 1000.0) * MAX_POS * math.pi
        joint_index = h10w.L_ARM_JOINT1 - 1
        low_cmd.motor_cmd[joint_index].mode = 1
        low_cmd.motor_cmd[joint_index].q = pos
        low_cmd.motor_cmd[joint_index].dq = vel

        if low_level.writeLowCmd(low_cmd) != 0:
            print("pub low cmd failed!")
            return 0
        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = DURATION - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    # Restart controller after publishing low commands
    system.enableController(True)
    print("Low level command test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())
