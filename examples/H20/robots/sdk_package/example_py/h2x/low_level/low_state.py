#!/usr/bin/env python3

import humanoid_sdk_py
from humanoid_sdk_py import h2x
import time


def main():
    print("=== Low State Reading Test ===")

    # Initialize low level object
    low_level = h2x.H2xLowLevel()

    # Read low state for 5 seconds
    DURATION_MS = 5000
    READ_INTERVAL_MS = 100
    read_count = DURATION_MS // READ_INTERVAL_MS

    for i in range(read_count):
        start_time = time.time()

        # Read low state
        ret, low_state = low_level.readLowState()
        if ret != 0:
            print("Failed to read low state!")
            return -1

        # Print some state information
        print(f"=== Low State Reading {i + 1} ===")
        print(f"Tick: {low_state.tick}")
        print(f"Time seconds: {low_state.time_seconds}")
        print(f"Is data valid: {'Yes' if low_state.is_data_valid else 'No'}")
        
        # Print first motor state as example
        print(f"Motor 0 - Position: {low_state.motor_state[0].q:.4f}, "
              f"Velocity: {low_state.motor_state[0].dq:.4f}, "
              f"Torque: {low_state.motor_state[0].tau_est:.4f}")

        # Print IMU state if available
        imu = low_state.imu_state[0]
        print(f"IMU 0 - Accel: [{imu.accelerometer[0]:.4f}, "
              f"{imu.accelerometer[1]:.4f}, {imu.accelerometer[2]:.4f}], "
              f"Gyro: [{imu.gyroscope[0]:.4f}, "
              f"{imu.gyroscope[1]:.4f}, {imu.gyroscope[2]:.4f}]")

        print(f"Error code: {low_state.error_code}")
        print(f"Warning code: {low_state.warning_code}")
        print()

        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = READ_INTERVAL_MS - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    print("Low state reading test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())