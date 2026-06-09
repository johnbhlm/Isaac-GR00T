import humanoid_sdk_py
import humanoid_sdk_py.h2x as h2x
import time

h2x_system = h2x.H2xSystem()
time.sleep(1)

print("=== 关节机械零位标定示例 ===")
joint_index = h2x.L_HIP_PITCH

ret = h2x_system.calibrateMechanicalZeroPosition(joint_index)
print("标定关节 ", joint_index, ("成功" if ret == 0 else " 失败"))

ret = h2x_system.saveJointParameters(joint_index)
print("保存关节 ", joint_index, ("成功" if ret == 0 else " 失败"))
