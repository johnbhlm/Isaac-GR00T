import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time

h10w_motion = h10w.H10wMotion()

print("正在进行上半身控制策略设置...")
ret_s = h10w_motion.setControlPolicy(humanoid_sdk_py.ControlPolicy.FULL_BODY)
ret_g, policy = h10w_motion.getControlPolicy()
if ret_s == 0 and ret_g == 0 and policy == humanoid_sdk_py.ControlPolicy.FULL_BODY:
    print("上半身设置为全身控制成功")
else:
    print("上半身设置为全身控制失败")

time.sleep(1)

print("正在进行上半身控制策略设置...")
ret_s = h10w_motion.setControlPolicy(humanoid_sdk_py.ControlPolicy.SINGLE_ARM)
ret_g, policy = h10w_motion.getControlPolicy()
if ret_s == 0 and ret_g == 0 and policy == humanoid_sdk_py.ControlPolicy.SINGLE_ARM:
    print("上半身设置为单臂控制成功")
else:
    print("上半身设置为单臂控制失败")
