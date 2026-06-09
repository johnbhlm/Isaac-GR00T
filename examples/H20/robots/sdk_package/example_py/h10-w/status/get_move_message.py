import humanoid_sdk_py
from humanoid_sdk_py import h10w


h10w_status = h10w.H10wStatus()
print("=== 获取机器人当前运动状态信息 ===")

ret, move_msg = h10w_status.getMoveMessage()
if ret != 0 or move_msg is None:
    print("获取运动信息失败，任务终止")
    exit(-1)

print("状态：", move_msg.state)
print("位置：", move_msg.position)
print("速度：", move_msg.velocity)
print("机器人当前位姿：")
for tcp_pose in move_msg.tcp_pose:
    print(tcp_pose.type, tcp_pose.pose)
print("当前执行任务：", move_msg.token)
