import humanoid_sdk_py.h2x as h2x
import time

h2x_high_level = h2x.H2xHighLevel()
time.sleep(1)

print("=== h2x 蹲下示例 ===")
ret = h2x_high_level.SquatDown()
if ret == 0:
    print("蹲下成功")
else:
    print("蹲下失败，错误码：", ret)
