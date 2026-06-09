import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time
h10w_motion = h10w.H10wMotion()
h10w_status = h10w.H10wStatus()
h10w_system = h10w.H10wSystem()
time.sleep(1)
print("=== realtime Speed linear ===")

ret, move_msg = h10w_status.getMoveMessage()
if ret != 0 or move_msg is None:
    print("获取运动信息失败，任务终止")
    exit(-1)

left_arm_near_zero = all(abs(value - 0.0) < 0.001 for value in move_msg.position[:7])
if not left_arm_near_zero:
    print("为保证安全，请先将左臂回零")
    exit(-1)

# ret = h10w_system.controlPower(humanoid_sdk_py.PowerState.POWER_ON)
# if ret != 0:
#     print("上电失败")
#     exit(-1)

# ret = h10w_system.clearError()
# if ret != 0:
#     print("清除错误失败")
#     exit(-1)

# ret = h10w_system.controlBrake(humanoid_sdk_py.BrakeState.BRAKE_ON)
# if ret != 0:
#     print("打开抱闸失败")
#     exit(-1)


start_pos_list = [
    (h10w.L_ARM_JOINT1, -0.2),
    (h10w.L_ARM_JOINT2, 0.2),
    (h10w.L_ARM_JOINT3, 0.2),
    (h10w.L_ARM_JOINT4, 0.9),
    (h10w.L_ARM_JOINT5, 0.8),
    (h10w.L_ARM_JOINT6, 0.5),
    (h10w.L_ARM_JOINT7, 0.5),
    (h10w.ELEVATOR_MOTOR, 0.3),
]
ret = h10w_motion.requestMultiJointsMove(start_pos_list, 0.1, 0.1)
if ret != 0:
    print("运动至初始位置失败")
    exit(-1)
ret = h10w_motion.waitMove()
if ret != 0:
    print("运动至初始位置超时")
    exit(-1)


ret = h10w_motion.enableRealtimeCmd(True)
if ret != 0:
    print("打开实时指令失败")
    exit(-1)


vel = h10w.RealtimeTcpParams()
vel.left_arm_valid = False
vel.right_arm_valid = False
vel.torso_valid = False
vel.time = 0.001
for i in range(6):
    vel.left_arm[i] = 0.0

step = 0.0001
time_count = 2000
while time_count > 0:
    if time_count > 1000:
        vel.left_arm[0] -= step
    vel.left_arm_valid = True
    ret = h10w_motion.speedLinear(vel)
    if ret != 0:
        print("Speed linear failed.")
        break
    time.sleep(0.001)
    time_count -= 1


ret = h10w_motion.enableRealtimeCmd(False)
if ret != 0:
    print("关闭实时指令失败")
    exit(-1)

left_homing_pos = [
    (h10w.L_ARM_JOINT1, 0.0),
    (h10w.L_ARM_JOINT2, 0.0),
    (h10w.L_ARM_JOINT3, 0.0),
    (h10w.L_ARM_JOINT4, 0.0),
    (h10w.L_ARM_JOINT5, 0.0),
    (h10w.L_ARM_JOINT6, 0.0),
    (h10w.L_ARM_JOINT7, 0.0),
]
ret = h10w_motion.requestMultiJointsMove(left_homing_pos, 0.1, 0.1)
if ret != 0:
    print("Move to zero failed")
    exit(-1)

ret = h10w_motion.waitMove()
if ret != 0:
    print("运动至初始位置超时")
    exit(-1)
