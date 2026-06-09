import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 清除所有报错信息参数示例 ===")
ret = h10w_system.clearError()
if ret == 0:
    print("清除报错信息成功")
else:
    print("清除报错信息失败")
