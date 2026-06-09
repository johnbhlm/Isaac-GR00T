#!/usr/bin/env python3

import humanoid_sdk_py
from humanoid_sdk_py import h2x
import time
import math


def main():
    print("=== Low Level Command Test ===")

    # Initialize objects
    low_level = h2x.H2xLowLevel()

    # Set low level command for joint 0
    MAX_POS = math.pi * 10.0 / 180.0
    DURATION = 10  # ms
    TOTAL_TIME = 2000  # ms
    control_count = TOTAL_TIME // DURATION
    low_cmd = h2x.LowCmd()

    for i in range(control_count):
        start_time = time.time()

        pos = math.sin(math.pi * i * DURATION / 1000.0) * MAX_POS
        vel = math.cos(math.pi * i * DURATION / 1000.0) * MAX_POS * math.pi
        
        # Set command for joint 0 (first joint)
        low_cmd.motor_cmd[0].mode = 1
        low_cmd.motor_cmd[0].kp = 15.0
        low_cmd.motor_cmd[0].kd = 0.5
        low_cmd.motor_cmd[0].q = pos
        low_cmd.motor_cmd[0].dq = vel

        if low_level.writeLowCmd(low_cmd) != 0:
            print("pub low cmd failed!")
            return 0
        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = DURATION - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    print("Low level command test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())
