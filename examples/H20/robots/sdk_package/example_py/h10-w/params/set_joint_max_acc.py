import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 设置关节最大加速度参数示例 ===")
max_acc = []
max_acc.append((h10w.L_ARM_JOINT1, 2.0))
max_acc.append((h10w.L_ARM_JOINT2, 1.5))
max_acc.append((h10w.L_ARM_JOINT3, 2.5))
max_acc.append((h10w.L_ARM_JOINT4, 1.8))
max_acc.append((h10w.L_ARM_JOINT5, 2.2))

ret = h10w_params.setJointMaxAcc(max_acc)
if ret != 0:
    print("设置失败")
else:
    print("设置成功")
