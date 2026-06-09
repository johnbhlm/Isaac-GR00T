# LED status feedback message

# 1. 是否可控
# 0: not controllable, 1: controllable
uint8 led_enable

# 2. 当前 LED 模式
# 0: off, 1: constant, 2: blink, 3: breathing
uint8 led_mode

# 3. 当前闪烁/呼吸周期 (ms)
# Example: 10000 ms = 0.1 Hz, 100 ms = 10 Hz
uint16 led_period_ms

# 4-6. 当前 RGB 通道亮度 (0~255)
uint8 led_r
uint8 led_g
uint8 led_b
