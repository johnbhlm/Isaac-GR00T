import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 上半身抱闸控制示例 ===")
ret = h10w_system.controlBrake(humanoid_sdk_py.BrakeState.BRAKE_ON)
if ret == 0:
    print("上半身开启抱闸控制成功")
else:
    print("上半身开启抱闸控制失败")

time.sleep(1)

ret = h10w_system.controlBrake(humanoid_sdk_py.BrakeState.BRAKE_ON)
if ret == 0:
    print("上半身关闭抱闸控制成功")
else:
    print("上半身关闭抱闸控制失败")
