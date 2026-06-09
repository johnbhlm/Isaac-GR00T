import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

print("=== 运动学逆解示例 ===")

pose1 = h10w.TcpPoseParams()
pose1.type = h10w.CartIndex.LEFT_ARM
pose1.pose = [0.6, 0.5, 0.4, 0.3, 0.2, 0.1]

pose2 = h10w.TcpPoseParams()
pose2.type = h10w.CartIndex.RIGHT_ARM
pose2.pose = [0.1, 0.2, 0.3, 0.4, 0.5, 0.6]

pose = [pose1, pose2]

reference_angles = [
    2.29544,
    1.2858,
    -0.582269,
    0,
    -0.676624,
    0.772921,
    2.51774,
    -2.4926,
    1.5708,
    0.000874287,
    0,
    1.47373,
    0.832474,
    -3.123,
    0.000406279,
    0.000406509,
    0.319515,
]
ret, joint_angles = h10w_params.inverseKinematics(pose, reference_angles, True)
if ret == 0:
    print("计算成功")
    print("    关节角:")
    for j in joint_angles:
        print("{}".format(j), end=" ")
    print()
else:
    print("计算失败")
