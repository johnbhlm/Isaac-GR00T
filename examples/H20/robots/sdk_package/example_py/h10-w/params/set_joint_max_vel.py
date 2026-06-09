import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 设置关节最大速度参数示例 ===")
max_vel = []
max_vel.append((h10w.L_ARM_JOINT1, 1.0))
max_vel.append((h10w.L_ARM_JOINT2, 0.8))
max_vel.append((h10w.L_ARM_JOINT3, 1.2))
max_vel.append((h10w.L_ARM_JOINT4, 0.9))
max_vel.append((h10w.L_ARM_JOINT5, 1.1))

ret = h10w_params.setJointMaxVel(max_vel)
if ret != 0:
    print("设置失败")
else:
    print("设置成功")
