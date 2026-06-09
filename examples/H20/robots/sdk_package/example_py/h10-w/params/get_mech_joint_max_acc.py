import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 获取关节的机械最大加速度参数示例 ===")

ret, acc_list = h10w_params.getMechJointMaxAcc()
if ret == 0:
    print("获取成功")
    for index, acc in acc_list:
        print("    关节 {}: 最大加速度= {:.3f} rad/s²".format(index, acc))
else:
    print("获取失败")
