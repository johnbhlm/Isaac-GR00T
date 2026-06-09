import humanoid_sdk_py
import humanoid_sdk_py.h2x as h2x

print("=== 配置电机ID示例 ===")
system = h2x.H2xSystem()

ret = system.configMotorId(h2x.L_HIP_PITCH)
print(f"配置电机ID {h2x.L_HIP_PITCH}"
        f"{' 成功' if ret == 0 else ' 失败'}")
