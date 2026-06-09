#pragma once

#include <tuple>
#include <cstdint>
#include <vector>

namespace humanoid {

/**
 * \~Chinese
 * @brief 表示上电状态的枚举类型
 *        - POWER_ON: 上电状态
 *        - POWER_OFF: 下电状态
 * \~English
 * @brief Represents the power-on state as an enum type.
 *        - POWER_ON: power-on state
 *        - POWER_OFF: power-off state
 */
enum class PowerState : uint8_t {
  POWER_ON = 0,
  POWER_OFF = 1,
};

/**
 * \~Chinese
 * @brief 表示刹车状态的枚举类型
 *        - BRAKE_OFF: 关闭抱闸状态
 *        - BRAKE_ON: 开启抱闸状态
 * \~English
 * @brief Represents the brake state as an enum type.
 *        - BRAKE_OFF: brake off state
 *        - BRAKE_ON: brake on state
 */
enum class BrakeState : uint8_t {
  BRAKE_OFF = 0,
  BRAKE_ON = 1,
};

/**
 * \~Chinese
 * @brief
 * 表示控制策略的枚举类型
 * @details 控制策略只会影响笛卡尔空间运动，关节运动不受影响
 *        - FULL_BODY: 全身控制策略，躯干可能随左右臂笛卡尔运动而运动
 *        - SINGLE_ARM: 单臂控制策略，只能进行左右臂的笛卡尔运动
 * \~English
 * @brief Represents the control policy as an enum type.
 * @details control policy only affects Cartesian space motion of the body,
 * while joint motion is not affected.
 *        - FULL_BODY: full-body control policy, the body may move in Cartesian
 * space while moving the arms.
 *        - SINGLE_ARM: single-arm control policy, only the left and right arms
 */
enum class ControlPolicy : uint8_t { FULL_BODY = 0, SINGLE_ARM = 1 };

/**
 * \~Chinese
 * @brief 表示关节运动目标的类型别名
 *        - tuple_element 0: 关节索引（范围:参考枚举JointIndex)
 *        - tuple_element 1: 目标关节位置
 * \~English
 * @brief Represents the joint motion as an typedef
 *        - tuple_element 0: joint_index
 *        - tuple_element 1: target_position
 */
using JointTarget = std::tuple<uint32_t, double>;

/**
 * \~Chinese
 * @brief 表示关节限位参数的类型别名
 *        - tuple_element 0: 关节索引（范围:参考枚举JointIndex)
 *        - tuple_element 1: 最大关节位置
 *        - tuple_element 2: 最小关节位置
 * \~English
 * @brief Represents the joint limit parameters as an typedef
 *        - tuple_element 0: joint_index（range:1~19)
 *        - tuple_element 1: max joint limit value
 *        - tuple_element 2: min joint limit value
 */
using JointLimit = std::vector<std::tuple<uint32_t, double, double>>;

/**
 * \~Chinese
 * @brief 表示关节最大加速度的类型别名
 *        - tuple_element 0: 关节索引（范围:参考枚举JointIndex)
 *        - tuple_element 1: 最大关节加速度
 * \~English
 * @brief Represents the joint maximum acceleration as an typedef
 *        - tuple_element 0: joint_index（range:1~19)
 *        - tuple_element 1: maximum joint acceleration
 */
using JointMaxAcc = std::vector<std::tuple<uint32_t, double>>;

/**
 * \~Chinese
 * @brief 表示关节最大速度的类型别名
 *        - tuple_element 0: 关节索引（范围:参考枚举JointIndex)
 *        - tuple_element 1: 最大关节速度
 * \~English
 * @brief Represents the joint maximum velocity as an typedef
 *        - tuple_element 0: joint_index（range:1~19)
 *        - tuple_element 1: maximum joint velocity
 */
using JointMaxVel = std::vector<std::tuple<uint32_t, double>>;

/**
 * \~Chinese
 * @brief 表示笛卡尔平移最大加速度的类型别名
 *        - tuple_element 0: 笛卡尔坐标系索引
 *        - tuple_element 1: 最大笛卡尔平移加速度
 * \~English
 * @brief Represents the cartesian translation maximum acceleration as an
 * typedef
 *        - tuple_element 0: cartesian coordinate index
 *        - tuple_element 1: maximum cartesian translation acceleration
 */
using CartTransMaxAcc = std::vector<std::tuple<uint32_t, double>>;

/**
 * \~Chinese
 * @brief 表示笛卡尔平移最大速度的类型别名
 *        - tuple_element 0: 笛卡尔坐标系索引
 *        - tuple_element 1: 最大笛卡尔平移速度
 * \~English
 * @brief Represents the cartesian translation maximum velocity as an typedef
 *        - tuple_element 0: cartesian coordinate index
 *        - tuple_element 1: maximum cartesian translation velocity
 */
using CartTransMaxVel = std::vector<std::tuple<uint32_t, double>>;

/**
 * \~Chinese
 * @brief 表示笛卡尔旋转最大加速度的类型别名
 *        - tuple_element 0: 笛卡尔坐标系索引
 *        - tuple_element 1: 最大笛卡尔旋转加速度
 * \~English
 * @brief Represents the cartesian rotation maximum acceleration as an typedef
 *        - tuple_element 0: cartesian coordinate index
 *        - tuple_element 1: maximum cartesian rotation acceleration
 */
using CartRotaMaxAcc = std::vector<std::tuple<uint32_t, double>>;

/**
 * \~Chinese
 * @brief 表示笛卡尔旋转最大速度的类型别名
 *        - tuple_element 0: 笛卡尔坐标系索引
 *        - tuple_element 1: 最大笛卡尔旋转速度
 * \~English
 * @brief Represents the cartesian rotation maximum velocity as an typedef
 *        - tuple_element 0: cartesian coordinate index
 *        - tuple_element 1: maximum cartesian rotation velocity
 */
using CartRotaMaxVel = std::vector<std::tuple<uint32_t, double>>;

/**
 * \~Chinese
 * @brief 表示TCP工具坐标系偏移参数的类型别名
 *        - tuple_element 0: 笛卡尔索引
 *        - tuple_element 1: 偏移参数
 * \~English
 * @brief Represents the TCP tool coordinate system offset parameters as an
 * typedef
 *        - tuple_element 0: cartesian index
 *        - tuple_element 1: offset parameters
 */
using TcpOffsetParams = std::vector<std::tuple<int32_t, std::vector<double>>>;

/**
 * \~Chinese
 * @brief 表示TCP负载参数的类型别名
 *        - tuple_element 0: 笛卡尔索引
 *        - tuple_element 1: 负载参数
 * \~English
 * @brief Represents the TCP payload parameters as an typedef
 *        - tuple_element 0: cartesian index
 *        - tuple_element 1: payload parameters
 */
using TcpPayloadParams = std::vector<std::tuple<int32_t, std::vector<double>>>;

/**
 * \~Chinese
 * @brief 表示关节控制参数的类型别名
 *        - tuple_element 0: 关节索引
 *        - tuple_element 1: kp参数
 *        - tuple_element 2: kd参数
 *        - tuple_element 3: kpv参数
 * \~English
 * @brief Represents the joint control parameters as an typedef
 *        - tuple_element 0: joint index
 *        - tuple_element 1: kp parameter
 *        - tuple_element 2: kd parameter
 *        - tuple_element 3: kpv parameter
 */
using JointControlParams =
    std::vector<std::tuple<uint32_t, double, double, double>>;

/**
 * \~Chinese
 * @brief 表示笛卡尔控制参数的类型别名
 *        - tuple_element 0: 笛卡尔坐标系索引
 *        - tuple_element 1: kp参数数组(6个元素)
 *        - tuple_element 2: kd参数数组(6个元素)
 *        - tuple_element 3: kpv参数数组(6个元素)
 * \~English
 * @brief Represents the cartesian control parameters as an typedef
 *        - tuple_element 0: cartesian coordinate index
 *        - tuple_element 1: kp parameter array (6 elements)
 *        - tuple_element 2: kd parameter array (6 elements)
 *        - tuple_element 3: kpv parameter array (6 elements)
 */
using CartesianControlParams =
    std::vector<std::tuple<uint32_t, std::array<double, 6>,
                           std::array<double, 6>, std::array<double, 6>>>;

/**
 * \~Chinese
 * @brief 控制器状态结构体
 * @note
 *       - controller_enabled_state: 控制器启用状态; 0: 控制器未启用; 1:
 * 控制器已启用;
 *       - power_state: 机器人的电源信息; 0: 上电状态; 1: 下电状态;
 *       - brake_state: 各关节、部件的抱闸信息; true: 抱闸开启状态, false:
 * 抱闸关闭状态。各Bit分别代表不同关节或部件,其中 0-17为有效位, 18-31为预留位;
 *       - reserved: 预留字段
 * \~English
 * @brief Controller status structure
 * @note
 *       - controller_enabled_state: Controller enabled status; 0: Controller
 * disabled; 1: Controller enabled;
 *       - power_state: Robot power information; 0: Powered on; 1: Powered off;
 *       - brake_state: Brake information for each joint/component; true: Brake
 * engaged (holding), false: Brake released. Each bit represents a different
 * joint or component, Bits 0-17 are valid, bits 18-31 are reserved.
 *       - reserved: Reserved field
 */
struct ControllerMessageParams {
  uint8_t controller_enabled_state;
  uint8_t power_state;
  uint32_t brake_state;
  std::array<uint32_t, 4> reserved;
};
}  // namespace humanoid
