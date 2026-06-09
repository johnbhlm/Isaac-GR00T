"""
以左臂为例从末端开始依次将各关节旋转0.3rad，再旋转回初始位置。
初始位置应为0位，运行时需保持双臂不干涉且周围空旷。
"""

import humanoid_sdk_py
from humanoid_sdk_py import h10w
import time
h10w_motion = h10w.H10wMotion()
h10w_status = h10w.H10wStatus()
h10w_system = h10w.H10wSystem()
time.sleep(1)
print("=== realtime servo joint ===")

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
    print("移动至初始位置失败")
    exit(-1)
ret = h10w_motion.waitMove()
if ret != 0:
    print("移动至初始位置超时")
    exit(-1)

# servo linear
ret = h10w_motion.enableRealtimeCmd(True)
if ret != 0:
    print("打开实时指令失败")
    exit(-1)

pos = h10w.RealtimeTcpParams()
pos.left_arm_valid = False
pos.right_arm_valid = False
pos.torso_valid = False
pos.time = 0.001


ret, move_msg = h10w_status.getMoveMessage()
if ret != 0 or move_msg is None:
    print("获取运动信息失败，任务终止")
    exit(-1)

for i in range(len(move_msg.tcp_pose)):
    if move_msg.tcp_pose[i].type == h10w.CartIndex.LEFT_ARM:
        pos.left_arm = move_msg.tcp_pose[i].pose
        print("current pos:", pos.left_arm)

# 3s移动0.3m
step = 0.0001
servo_failed = False
time_count = 1000
while time_count > 0:
    pos.left_arm[0] -= step
    pos.left_arm_valid = True
    if h10w_motion.servoLinear(pos) != 0:
        print("Servo linear failed.")
        servo_failed = True
        break
    time.sleep(0.001)
    time_count -= 1

if not servo_failed:
    time_count = 0
    while time_count < 1000:
        pos.left_arm[0] += step
        pos.left_arm_valid = True
        if h10w_motion.servoLinear(pos) != 0:
            print("Servo linear failed.")
            servo_failed = True
            break
        time.sleep(0.001)
        time_count += 1

if servo_failed:
    print("Servo linear failed.")

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
    print("Move to zero timeout")
    exit(-1)
