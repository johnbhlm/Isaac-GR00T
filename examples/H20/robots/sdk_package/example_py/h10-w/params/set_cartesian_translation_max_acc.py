import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 设置笛卡尔平移最大加速度参数示例 ===")
max_acc = []
max_acc.append((h10w.CartIndex.TORSO, 0.65))
max_acc.append((h10w.CartIndex.LEFT_ARM, 0.8))
max_acc.append((h10w.CartIndex.RIGHT_ARM, 0.65))

ret = h10w_params.setCartTransMaxAcc(max_acc)
if ret != 0:
    print("设置失败")
else:
    print("设置成功")
