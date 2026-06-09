#!/usr/bin/env python3

import humanoid_sdk_py
from humanoid_sdk_py import h2x
import time


def main():
    print("=== LRCU Command Test ===")

    # Initialize low level object
    low_level = h2x.H2xLowLevel()

    # Test LED control for 10 seconds
    DURATION_MS = 10000
    CMD_INTERVAL_MS = 500
    cmd_count = DURATION_MS // CMD_INTERVAL_MS

    for i in range(cmd_count):
        start_time = time.time()

        # Create LRCU command
        lrcu_cmd = h2x.LRCUCmd()
        
        # Set LED parameters
        lrcu_cmd.led_enable = 1  # Enable LED
        lrcu_cmd.led_period_ms = 1000  # 1 second period

        # Cycle through different colors
        color_phase = i % 6
        if color_phase == 0:  # Red
            lrcu_cmd.led_r = 255
            lrcu_cmd.led_g = 0
            lrcu_cmd.led_b = 0
            lrcu_cmd.led_mode = 0  # Solid color
            print("Setting LED to RED")
        elif color_phase == 1:  # Green
            lrcu_cmd.led_r = 0
            lrcu_cmd.led_g = 255
            lrcu_cmd.led_b = 0
            lrcu_cmd.led_mode = 0
            print("Setting LED to GREEN")
        elif color_phase == 2:  # Blue
            lrcu_cmd.led_r = 0
            lrcu_cmd.led_g = 0
            lrcu_cmd.led_b = 255
            lrcu_cmd.led_mode = 0
            print("Setting LED to BLUE")
        elif color_phase == 3:  # Yellow
            lrcu_cmd.led_r = 255
            lrcu_cmd.led_g = 255
            lrcu_cmd.led_b = 0
            lrcu_cmd.led_mode = 1  # Blinking
            print("Setting LED to YELLOW (Blinking)")
        elif color_phase == 4:  # Cyan
            lrcu_cmd.led_r = 0
            lrcu_cmd.led_g = 255
            lrcu_cmd.led_b = 255
            lrcu_cmd.led_mode = 1
            print("Setting LED to CYAN (Blinking)")
        elif color_phase == 5:  # Magenta
            lrcu_cmd.led_r = 255
            lrcu_cmd.led_g = 0
            lrcu_cmd.led_b = 255
            lrcu_cmd.led_mode = 1
            print("Setting LED to MAGENTA (Blinking)")

        # Send LRCU command
        ret = low_level.writeLRCUCmd(lrcu_cmd)
        if ret != 0:
            print("Failed to write LRCU command!")
            return -1

        elapsed_time = (time.time() - start_time) * 1000
        sleep_time = CMD_INTERVAL_MS - elapsed_time
        if sleep_time > 0:
            time.sleep(sleep_time / 1000.0)

    # Turn off LED at the end
    lrcu_cmd.led_enable = 0
    low_level.writeLRCUCmd(lrcu_cmd)
    print("LED turned off")

    print("LRCU command test completed successfully")
    return 0


if __name__ == "__main__":
    exit(main())