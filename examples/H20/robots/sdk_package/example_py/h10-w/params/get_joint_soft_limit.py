import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import os
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 获取关节最大速度参数示例 ===")
ret, limit = h10w_params.getJointSoftLimit()
if ret == 0:
    print("获取成功")
    for index, max, min in limit:
        print(
            "    关节 {}: 最大位置= {:.3f} rad, 最小位置= {:.3f} rad".format(
                index, max, min
            )
        )
else:
    print("获取失败")
