# LED control command message

# 1. 三色灯使能控制
# 0: disable, 1: enable
uint8 led_enable

# 2. LED 模式控制
# 0: off, 1: constant, 2: blink, 3: breathing
uint8 led_mode

# 3. 闪烁/呼吸周期控制 (ms)
# Range: 100~1000 ms
uint16 led_period_ms

# 4-6. RGB 通道亮度控制 (0~255)
uint8 led_r
uint8 led_g
uint8 led_b
