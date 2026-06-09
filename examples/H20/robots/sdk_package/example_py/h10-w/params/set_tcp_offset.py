import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 设置 TCP 偏移量示例 ===")
offset = []
offset.append((1, [0.1, 0.2, 0.3, 0.4, 0.5, 0.6]))
offset.append((2, [0.2, 0.3, 0.4, 0.5, 0.6, 0.7]))

ret = h10w_params.setTcpOffset(offset)
if ret != 0:
    print("设置失败")
else:
    print("设置成功")
