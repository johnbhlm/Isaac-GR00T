#!/usr/bin/env python3

import humanoid_sdk_py
from humanoid_sdk_py import h2x
import time


def main():
    print("=== LRCU State Reading Test ===")

    # Initialize low level object
    low_level = h2x.H2xLowLevel()

    # Read LRCU state for 10 seconds
    DURATION_MS = 10000
    READ_INTERVAL_MS = 500
    read_count = DURATION_MS // READ_INTERVAL_MS

    for i in range(read_count):
        start_time = time.time()

        # Read LRCU state
        ret, lrcu_state = low_level.readLRCUState()
        if ret != 0:
            print("Failed to read LRCU state!")
            return -1

        # Print LRCU state information
        print(f"=== LRCU State Reading {i + 1} ===")
        print(f"LED Enable: {'ON' if lrcu_state.led_enable else 'OFF'}")
        print(f"LED Mode: {'Solid' if lrcu_state.led_mode == 0 else 'Blinking'}")
        print(f"LED Period (ms): {lrcu_state.led_period_ms}")
        print(f"LED Color - R: {lrcu_state.led_r}, G: {lrcu_state.led_g}, B: {lrcu_state.led_b}")
        print()

        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = READ_INTERVAL_MS - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    print("LRCU state reading test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())