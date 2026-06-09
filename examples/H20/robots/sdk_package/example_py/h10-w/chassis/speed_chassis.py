import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

print("=== 底盘原地旋转运动， 请避开障碍物 ===")
h10w_chassis = h10w.H10wChassis()
time.sleep(3)
ret = h10w_chassis.speedChassis(0, 0.1, 3)
if ret != 0:
    print("Speed chassis failed.")