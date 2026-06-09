import humanoid_sdk_py
import humanoid_sdk_py.h2x as h2x
import time

h2x_system = h2x.H2xSystem()
time.sleep(1)

print("=== 清除所有报错信息参数示例 ===")
ret = h2x_system.clearError()
if ret == 0:
    print("清除报错信息成功")
else:
    print("清除报错信息失败")
