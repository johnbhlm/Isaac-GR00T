import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 设置 TCP 载荷示例 ===")
payload = []
payload.append((1, [0.001, 0, 0, 0, 0.000001, 0.000001, 0.000001, 0, 0, 0]))
payload.append((2, [0.001, 0, 0, 0, 0.000001, 0.000001, 0.000001, 0, 0, 0]))

ret = h10w_params.setTcpPayload(payload)
if ret != 0:
    print("设置失败")
else:
    print("设置成功")
