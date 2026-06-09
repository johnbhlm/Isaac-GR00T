import humanoid_sdk_py
from humanoid_sdk_py import h10w


def parse_brake_state(brake_state):
    """解析抱闸状态"""
    print("抱闸状态 (32位):", bin(brake_state))
    print("抱闸状态详细解析:")

    # 关节抱闸状态解析
    print("  关节抱闸状态:")
    joint_names = [
        "L_JOINT_1",
        "L_JOINT_2",
        "L_JOINT_3",
        "L_JOINT_4",
        "L_JOINT_5",
        "L_JOINT_6",
        "L_JOINT_7",  # 0-6: 左臂关节
        "R_JOINT_1",
        "R_JOINT_2",
        "R_JOINT_3",
        "R_JOINT_4",
        "R_JOINT_5",
        "R_JOINT_6",
        "R_JOINT_7",  # 7-13: 右臂关节
        "HEAD_PITCH",
        "HEAD_YAW",  # 14-15: 头部关节
        "ELEVATOR_MOTOR",
        "MOBILE_BASE",  # 16-17: 升降电机和移动底盘
    ]

    for i in range(18):  # Bits 0-17 为有效位
        brake_engaged = (brake_state >> i) & 0x1
        joint_name = joint_names[i] if i < len(joint_names) else f"UNKNOWN_JOINT_{i}"
        status = "抱闸开启" if brake_engaged else "抱闸关闭"
        print(f"    {joint_name:<16}: {status}")

    # 预留位 (Bits 18-31)
    print("  预留位状态 (Bits 18-31):")
    for i in range(18, 32):
        bit_value = (brake_state >> i) & 0x1
        print(f"    Bit {i:2d}: {bit_value}")


def get_controller_status():
    """获取控制器状态信息"""
    print("=== 获取机器人当前控制器状态信息示例 ===")

    h10w_status = h10w.H10wStatus()
    ret, controller_msg = h10w_status.getControllerMessage()

    if ret != 0 or controller_msg is None:
        print(f"获取控制器信息失败，错误码: {ret}")
        return False

    print("\n=== 控制器状态信息 ===")

    # 控制器启用状态
    print("控制器启用状态: ", end="")
    if controller_msg.controller_enabled_state == 0:
        print("未启用")
    elif controller_msg.controller_enabled_state == 1:
        print("已启用")
    else:
        print(f"未知状态 ({controller_msg.controller_enabled_state})")

    # 电源状态
    print("机器人电源状态: ", end="")
    if controller_msg.power_state == 0:
        print("上电状态")
    elif controller_msg.power_state == 1:
        print("下电状态")
    else:
        print(f"未知状态 ({controller_msg.power_state})")

    # 抱闸状态
    parse_brake_state(controller_msg.brake_state)

    return True


get_controller_status()
