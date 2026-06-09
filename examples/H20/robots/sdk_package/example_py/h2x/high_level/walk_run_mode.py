import humanoid_sdk_py.h2x as h2x
import time

h2x_high_level = h2x.H2xHighLevel()
time.sleep(1)

print("=== h2x 进入走跑模式示例 ===")
ret = h2x_high_level.WalkRunMode()
if ret == 0:
    print("进入走跑模式请求成功")
else:
    print("进入走跑模式请求失败，错误码：",ret)

ret = h2x_high_level.waitRunning(5000)
if ret == 0:
    print("模式切换成功")
else:
    print("模式切换失败，错误码：",ret)


