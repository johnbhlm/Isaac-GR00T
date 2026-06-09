import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 设置笛卡尔旋转最大速度参数示例 ===")
max_vel = []
max_vel.append((h10w.CartIndex.TORSO, 0.8))
max_vel.append((h10w.CartIndex.LEFT_ARM, 0.6))
max_vel.append((h10w.CartIndex.RIGHT_ARM, 0.7))

ret = h10w_params.setCartRotaMaxVel(max_vel)
if ret != 0:
    print("设置失败")
else:
    print("设置成功")
