import humanoid_sdk_py.h2x as h2x

h2x_high_level = h2x.H2xHighLevel()

print("=== h2x 移动控制示例 ===")
ret = h2x_high_level.Move(0.5, 0.0, 0.0, 0.6, False)
if ret == 0:
    print("移动控制成功")
else:
    print("移动控制失败，错误码：", ret)
