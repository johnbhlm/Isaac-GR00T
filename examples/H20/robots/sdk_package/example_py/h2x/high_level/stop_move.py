import humanoid_sdk_py.h2x as h2x

h2x_high_level = h2x.H2xHighLevel()

print("=== h2x 停止运动示例 ===")
ret = h2x_high_level.StopMove()
if ret == 0:
    print("停止运动成功")
else:
    print("停止运动失败，错误码：", ret)
