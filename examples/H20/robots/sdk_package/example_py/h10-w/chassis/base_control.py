import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

print("=== 底盘抱闸控制 ===")
h10w_chassis = h10w.H10wChassis()
time.sleep(1)
control_word = 1
ret = h10w_chassis.baseControl(control_word)
if ret != 0:
    print("底盘抱闸控制打开失败。")
    exit(-1)
print("底盘抱闸控制打开成功。")

time.sleep(1)
control_word = 0
ret = h10w_chassis.baseControl(control_word)
if ret != 0:
    print("底盘抱闸控制关闭失败。")
    exit(-1)
print("底盘抱闸控制关闭成功。")
