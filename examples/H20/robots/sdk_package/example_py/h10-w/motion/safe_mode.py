import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time

h10w_motion = h10w.H10wMotion()
time.sleep(1)

print("=== 上半身设置安全模式示例 ===")

print("正在进行上半身安全模式设置...")
ret_s = h10w_motion.setSafeMode(True)
ret_g, enable = h10w_motion.getSafeMode()
if ret_s == 0 and ret_g == 0 and enable == True:
    print("上半身进入安全模式成功")
else:
    print("上半身进入安全模式失败")

time.sleep(1)

print("正在进行上半身安全模式设置...")
ret_s = h10w_motion.setSafeMode(False)
ret_g, policy = h10w_motion.getSafeMode()
if ret_s == 0 and ret_g == 0 and policy == False:
    print("上半身退出安全模式成功")
else:
    print("上半身退出安全模式失败")
