import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 获取 TCP 偏移量示例 ===")

ret, tcp_offset_params = h10w_params.getTcpOffset()
if ret == 0:
    print("获取成功")
    for index, tcp_offset in tcp_offset_params:
        print("    TCP {}: {}".format(index, tcp_offset))
else:
    print("获取失败")
