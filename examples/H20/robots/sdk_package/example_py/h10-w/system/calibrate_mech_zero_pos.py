import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 关节机械零位标定示例 ===")

ret = h10w_system.calibrateMechanicalZeroPosition(h10w.L_ARM_JOINT1)
print("标定关节 ", h10w.L_ARM_JOINT1, ("成功" if ret == 0 else " 失败"))

ret = h10w_system.saveJointParameters(h10w.L_ARM_JOINT1)
print("保存关节 ", h10w.L_ARM_JOINT1, ("成功" if ret == 0 else " 失败"))
