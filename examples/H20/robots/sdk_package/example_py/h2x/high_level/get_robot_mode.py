import humanoid_sdk_py.h2x as h2x
import time

h2x_high_level = h2x.H2xHighLevel()
time.sleep(1)

print("=== h2x 获取当前模式示例 ===")
ret, robot_mode = h2x_high_level.GetRobotMode()
if ret == 0:
    print("获取当前模式请求成功，当前模式：", robot_mode)
else:
    print("获取当前模式请求失败，错误码：",ret)



