import humanoid_sdk_py.h2x as h2x
import time

h2x_high_level = h2x.H2xHighLevel()
time.sleep(1)

print("=== h2x 躺起示例 ===")
ret = h2x_high_level.Rise()
if ret == 0:
    print("躺起成功")
else:
    print("躺起失败，错误码：", ret)
