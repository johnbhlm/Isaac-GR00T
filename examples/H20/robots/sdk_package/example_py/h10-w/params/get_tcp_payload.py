import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 获取 TCP 载荷参数示例 ===")

ret, tcp_payload_params = h10w_params.getTcpPayload()
if ret == 0:
    print("获取成功")
    for index, tcp_payload in tcp_payload_params:
        print("    TCP {}: {}".format(index, tcp_payload))
else:
    print("获取失败")
