import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 设置关节软限位参数示例 ===")
limit = []
limit.append((h10w.L_ARM_JOINT1, 3.05, -3.05))
limit.append((h10w.L_ARM_JOINT2, 1.05, -1.05))
limit.append((h10w.L_ARM_JOINT3, 3.05, -3.05))
limit.append((h10w.L_ARM_JOINT4, 1.09, 0.09))
limit.append((h10w.L_ARM_JOINT5, 3.05, -3.05))

ret = h10w_params.setJointSoftLimit(limit)
if ret != 0:
    print("设置失败")
else:
    print("设置成功")
