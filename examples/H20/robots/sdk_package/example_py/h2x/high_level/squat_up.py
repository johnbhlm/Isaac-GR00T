import humanoid_sdk_py.h2x as h2x
import time

h2x_high_level = h2x.H2xHighLevel()
time.sleep(1)

print("=== h2x 蹲起示例 ===")
ret = h2x_high_level.SquatUp()
if ret == 0:
    print("蹲起成功")
else:
    print("蹲起失败，错误码：", ret)
