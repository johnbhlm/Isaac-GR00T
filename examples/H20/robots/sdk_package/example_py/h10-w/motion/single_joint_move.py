import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time

h10w_motion = h10w.H10wMotion()
h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 单轴运动示例 ===")

ret = h10w_system.controlPower(humanoid_sdk_py.PowerState.POWER_ON)
if ret != 0:
    print("上电失败")
    exit(-1)

ret = h10w_system.clearError()
if ret != 0:
    print("清除错误失败")
    exit(-1)

ret = h10w_system.controlBrake(humanoid_sdk_py.BrakeState.BRAKE_ON)
if ret != 0:
    print("打开抱闸失败")
    exit(-1)

joint_target = (7, 0.0)

ret = h10w_motion.requestSingleJointMove(joint_target, 0.1, 0.1)
if ret != 0:
    print("运动指令发送失败")
    exit(-1)
else:
    print("运动指令发送成功")

ret = h10w_motion.waitMove()
if ret != 0:
    print("等待运动到位失败")
    exit(-1)
else:
    print("等待运动到位成功")
