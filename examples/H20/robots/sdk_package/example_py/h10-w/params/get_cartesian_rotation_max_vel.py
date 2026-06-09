import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 获取笛卡尔旋转最大速度参数示例 ===")

ret, vel_list = h10w_params.getCartRotaMaxVel()
if ret == 0:
    print("获取成功")
    for index, vel in vel_list:
        print("    笛卡尔轴 {}: 最大旋转速度= {:.3f} rad/s".format(index, vel))
else:
    print("获取失败")
