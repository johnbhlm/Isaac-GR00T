import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time
h10w_motion = h10w.H10wMotion()
h10w_status = h10w.H10wStatus()
h10w_system = h10w.H10wSystem()
time.sleep(1)

print("=== 线性移动示例 ===")

ret, move_msg = h10w_status.getMoveMessage()
if ret != 0 or move_msg is None:
    print("获取运动信息失败，任务终止")
    exit(-1)

left_arm_near_zero = all(abs(value - 0.0) < 0.001 for value in move_msg.position[:7])
if not left_arm_near_zero:
    print("为保证安全，请先将左臂回零")
    exit(-1)

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

# move to start position
left_start_pose = [
    (h10w.L_ARM_JOINT1, -0.2),
    (h10w.L_ARM_JOINT2, 0.2),
    (h10w.L_ARM_JOINT3, 0.2),
    (h10w.L_ARM_JOINT4, 0.9),
    (h10w.L_ARM_JOINT5, 0.8),
    (h10w.L_ARM_JOINT6, 0.5),
    (h10w.L_ARM_JOINT7, 0.5),
    (h10w.ELEVATOR_MOTOR, 0.3),
]
ret = h10w_motion.requestMultiJointsMove(left_start_pose, 0.1, 0.1)
if ret != 0:
    print("运动指令发送失败")
    exit(-1)
ret = h10w_motion.waitMove()
if ret != 0:
    print("运动失败")
    exit(-1)

# move to target pose
target = h10w.LinearTarget()
target.type = h10w.CartIndex.LEFT_ARM
target.pose = [1.025196, 0.387371, 1.157848, 0.683798, 2.018945, 0.074912]
target.velocityPercent = 0.1  # 10% of max velocity
target.accelerationPercent = 0.1  # 10% of max acceleration
linear_targets = [target]
ret = h10w_motion.requestLinearMove(linear_targets)
if ret != 0:
    print("运动指令发送失败")
else:
    print("运动指令发送成功")

ret = h10w_motion.waitMove()
if ret != 0:
    print("运动失败")
    exit(-1)

left_arm_homing = [
    (h10w.L_ARM_JOINT1, 0.0),
    (h10w.L_ARM_JOINT2, 0.0),
    (h10w.L_ARM_JOINT3, 0.0),
    (h10w.L_ARM_JOINT4, 0.0),
    (h10w.L_ARM_JOINT5, 0.0),
    (h10w.L_ARM_JOINT6, 0.0),
    (h10w.L_ARM_JOINT7, 0.0),
]
ret = h10w_motion.requestMultiJointsMove(left_arm_homing, 0.1, 0.1)
if ret != 0:
    print("运动指令发送失败")
    exit(-1)

ret = h10w_motion.waitMove()
if ret != 0:
    print("运动失败")
    exit(-1)
