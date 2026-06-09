import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 运动学正解示例 ===")

# 获取 TCP 1, 2, 3 的坐标
type = [1, 2, 3]
# 设置关节角
joint_angles = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]

ret, tcp_pose = h10w_params.forwardKinematics(type, joint_angles)
if ret == 0:
    print("计算成功")
    for i in range(len(tcp_pose)):
        print("    TCP {}:".format(tcp_pose[i].type), end=":")
        for j in range(6):
            print(" {}".format(tcp_pose[i].pose[j]), end=" ")
        print()
else:
    print("计算失败")
