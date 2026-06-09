import humanoid_sdk_py.h2x as h2x
import time

h2x_high_level = h2x.H2xHighLevel()
time.sleep(1)

print("=== h2x 执行舞蹈【1】示例 ===")
ret = h2x_high_level.DanceMode()
if ret == 0:
    print("进入舞蹈模式成功")
else:
    print("进入舞蹈模式失败，错误码：", ret)


ret = h2x_high_level.Dance("DanceQingpingguo")
if ret == 0:
    print("开始执行舞蹈 DanceQingpingguo 成功")
else:
    print("开始执行舞蹈 DanceQingpingguo 失败, 错误码：", ret)
