#pragma once

#include <tuple>
#include <string>
#include <cstdint>
#include <vector>

namespace humanoid::h10w {

inline constexpr const char* ROBOT_MODEL = "h10w";

/**
 * \~Chinese
 * @brief H10w 关节索引与 int 的映射关系
 * @details
 *   - JOINT_INDEX_UNKNOWN = 0
 *   - L_ARM_JOINT1 = 1
 *   - L_ARM_JOINT2 = 2
 *   - L_ARM_JOINT3 = 3
 *   - L_ARM_JOINT4 = 4
 *   - L_ARM_JOINT5 = 5
 *   - L_ARM_JOINT6 = 6
 *   - L_ARM_JOINT7 = 7
 *   - R_ARM_JOINT1 = 8
 *   - R_ARM_JOINT2 = 9
 *   - R_ARM_JOINT3 = 10
 *   - R_ARM_JOINT4 = 11
 *   - R_ARM_JOINT5 = 12
 *   - R_ARM_JOINT6 = 13
 *   - R_ARM_JOINT7 = 14
 *   - HEAD_PITCH = 15
 *   - HEAD_YAW = 16
 *   - ELEVATOR_MOTOR = 17
 *   - L_GRIPPER_MOTOR = 18
 *   - R_GRIPPER_MOTOR = 19
 * \~English
 * @brief Mapping between H10w joint indexes and int values
 * @details
 *   - JOINT_INDEX_UNKNOWN = 0
 *   - L_ARM_JOINT1 = 1
 *   - L_ARM_JOINT2 = 2
 *   - L_ARM_JOINT3 = 3
 *   - L_ARM_JOINT4 = 4
 *   - L_ARM_JOINT5 = 5
 *   - L_ARM_JOINT6 = 6
 *   - L_ARM_JOINT7 = 7
 *   - R_ARM_JOINT1 = 8
 *   - R_ARM_JOINT2 = 9
 *   - R_ARM_JOINT3 = 10
 *   - R_ARM_JOINT4 = 11
 *   - R_ARM_JOINT5 = 12
 *   - R_ARM_JOINT6 = 13
 *   - R_ARM_JOINT7 = 14
 *   - HEAD_PITCH = 15
 *   - HEAD_YAW = 16
 *   - ELEVATOR_MOTOR = 17
 *   - L_GRIPPER_MOTOR = 18
 *   - R_GRIPPER_MOTOR = 19
 */
namespace JointIndexValue {
inline constexpr int JOINT_INDEX_UNKNOWN = 0;
inline constexpr int L_ARM_JOINT1 = 1;
inline constexpr int L_ARM_JOINT2 = 2;
inline constexpr int L_ARM_JOINT3 = 3;
inline constexpr int L_ARM_JOINT4 = 4;
inline constexpr int L_ARM_JOINT5 = 5;
inline constexpr int L_ARM_JOINT6 = 6;
inline constexpr int L_ARM_JOINT7 = 7;
inline constexpr int R_ARM_JOINT1 = 8;
inline constexpr int R_ARM_JOINT2 = 9;
inline constexpr int R_ARM_JOINT3 = 10;
inline constexpr int R_ARM_JOINT4 = 11;
inline constexpr int R_ARM_JOINT5 = 12;
inline constexpr int R_ARM_JOINT6 = 13;
inline constexpr int R_ARM_JOINT7 = 14;
inline constexpr int HEAD_PITCH = 15;
inline constexpr int HEAD_YAW = 16;
inline constexpr int ELEVATOR_MOTOR = 17;
inline constexpr int L_GRIPPER_MOTOR = 18;
inline constexpr int R_GRIPPER_MOTOR = 19;
}  // namespace JointIndexValue

/**
 * \~Chinese
 * @brief 表示笛卡尔坐标系下工具中心点的枚举类型
 * @details
 *      - UNKNOWN_CART: 未知工具中心点
 *      - LEFT_ARM: 左臂工具中心点
 *      - RIGHT_ARM: 右臂工具中心点
 *      - TORSO: 躯干工具中心点
 * \~English
 * @brief Represents the enumeration type of tool center point in Cartesian
 * coordinate system
 * @details
 *      - UNKNOWN_CART: Unknown tool center point
 *      - LEFT_ARM: Left arm tool center point
 *      - RIGHT_ARM: Right arm tool center point
 *      - TORSO: Torso tool center point
 */
enum class CartIndex { UNKNOWN_CART = 0, LEFT_ARM, RIGHT_ARM, TORSO, SIZE };

/**
 * \~Chinese
 * @brief 实时指令关节运动控制参数结构体
 * @details
 *       - left_arm: 左臂7个关节角度（弧度），当left_arm_valid=1时有效
 *       - left_arm_valid: 左臂数据有效标志：1-执行运动，0-保持当前位置
 *       - right_arm: 右臂7个关节角度（弧度），当right_arm_valid=1时有效
 *       - right_arm_valid: 右臂数据有效标志：1-执行运动，0-保持当前位置
 *       - torso: 躯干3个关节角度（弧度），当torso_valid=1时有效
 *       - torso_valid: 躯干数据有效标志：1-执行运动，0-保持当前位置
 *       - time: 运动控制周期,间隔多长时间发送一次指令(单位：秒)
 * \~English
 * @brief Realtime joint motion control parameters structure
 * @details
 *       - left_arm: 7 joint angles of left arm (radians), valid when
 * left_arm_valid=1
 *       - left_arm_valid: Left arm data validity flag: 1-execute motion,
 * 0-maintain current position
 *       - right_arm: 7 joint angles of right arm (radians), valid when
 * right_arm_valid=1
 *       - right_arm_valid: Right arm data validity flag: 1-execute motion,
 * 0-maintain current position
 *       - torso: 3 joint angles of torso (radians), valid when torso_valid=1
 *       - torso_valid: Torso data validity flag: 1-execute motion, 0-maintain
 * current position
 *       - time: Motion control period (seconds)
 */
struct RealtimeJointsParams {
  double left_arm[7];     // Left arm 7 joint angles (rad), active when
                          // left_arm_valid=1
  int8_t left_arm_valid;  // Left arm data validity flag: 1-execute motion,
                          // 0-maintain current position

  double right_arm[7];     // Right arm 7 joint angles (rad), active when
                           // right_arm_valid=1
  int8_t right_arm_valid;  // Right arm data validity flag: 1-execute motion,
                           // 0-maintain current position

  double torso[3];     // Torso 3 joint angles (rad), active when torso_valid=1
  int8_t torso_valid;  // Torso data validity flag: 1-execute motion, 0-maintain
                       // current position

  double time;  // Motion duration/timestamp (seconds)
};

/**
 * \~Chinese
 * @brief 实时指令末端位姿运动控制参数结构体
 * @details
 *      - left_arm: 左臂末端TCP位姿：[x, y, z, roll, pitch, yaw]，单位：米和弧度
 *      - left_arm_valid: 左臂数据有效标志：1-执行运动，0-保持当前位置
 *      - right_arm: 右臂末端TCP位姿：[x, y, z, roll, pitch,
 * yaw]，单位：米和弧度
 *      - right_arm_valid: 右臂数据有效标志：1-执行运动，0-保持当前位置
 *      - torso: 躯干末端TCP位姿：[x, y, z, roll, pitch, yaw]，单位：米和弧度
 *      - torso_valid: 躯干数据有效标志：1-执行运动，0-保持当前位置
 *       - time: 运动控制周期,间隔多长时间发送一次指令(单位：秒)
 * \~English
 * @brief Realtime TCP motion control parameters structure
 * @details
 *      - left_arm: Left arm TCP pose: [x, y, z, roll, pitch, yaw] in meters
 *    and radians
 *      - left_arm_valid: Left arm data validity: 1-execute motion, 0-maintain
 * current pose (meters and radians)
 *      - right_arm: Right arm TCP pose: [x, y, z, roll, pitch, yaw] in meters
 *    and radians
 *      - right_arm_valid: Right arm data validity: 1-execute motion, 0-maintain
 * current pose (meters and radians)
 *      - torso: Torso TCP pose: [x, y, z, roll, pitch, yaw] in meters and
 *    radians
 *      - torso_valid: Torso data validity: 1-execute motion, 0-maintain current
 *    pose (meters and radians)
 *      - time: Motion control period (seconds)
 */
struct RealtimeTcpParams {
  double left_arm[6];     // Left arm TCP pose: [x, y, z, roll, pitch, yaw] in
                          // meters and radians
  int8_t left_arm_valid;  // Left arm data validity: 1-execute motion,
                          // 0-maintain current pose

  double right_arm[6];     // Right arm TCP pose: [x, y, z, roll, pitch, yaw] in
                           // meters and radians
  int8_t right_arm_valid;  // Right arm data validity: 1-execute motion,
                           // 0-maintain current pose

  double torso[6];     // Torso pose: [x, y, z, roll, pitch, yaw] in meters and
                       // radians
  int8_t torso_valid;  // Torso data validity: 1-execute motion, 0-maintain
                       // current pose

  double time;  // Motion duration/timestamp (seconds)
};

/**
 * \~Chinese
 * @brief 末端直线运动控制参数结构体
 * @details
 *      - type: 笛卡尔坐标系末端类型，1-左臂 2-右臂 3-躯干
 *      - pose: 笛卡尔末端位姿：[x, y, z, roll, pitch, yaw]，单位：米和弧度
 *      - velocityPercent: 末端速度百分比，(0-1]
 *      - accelerationPercent: 末端加速度百分比，(0-1]
 * \~English
 * @brief TCP linear motion control parameters structure
 * @details
 *      - type: Cartesian coordinate system end type, 1-left arm 2-right arm
 * 3-torso
 *      - pose: Cartesian end pose: [x, y, z, roll, pitch, yaw] in meters and
 *    radians
 *      - velocityPercent: End velocity percentage, (0-1]
 *      - accelerationPercent: End acceleration percentage, (0-1]
 */
struct LinearTarget {
  CartIndex type;              // 1 left 2 right 3 torso
  double pose[6];              // x,y,z,rx,ry,rz
  double velocityPercent;      //(0-1]
  double accelerationPercent;  //(0-1]
};

/**
 * \~Chinese
 * @brief 末端位姿参数结构体
 * @details
 *      - type: 笛卡尔坐标系末端类型，1-左臂 2-右臂 3-躯干
 *      - pose: 笛卡尔末端位姿：[x, y, z, roll, pitch, yaw]，单位：米和弧度
 * \~English
 * @brief TCP pose parameters structure
 * @details
 *      - type: Cartesian coordinate system end type, 1-left arm 2-right arm
 * 3-torso
 *      - pose: Cartesian end pose: [x, y, z, roll, pitch, yaw] in meters and
 *    radians
 */
struct TcpPoseParams {
  CartIndex type;  // 1 left 2 right 3 torso
  double pose[6];  // x,y,z,rx,ry,rz
};

/**
 * \~Chinese
 * @brief 运动状态参数结构体
 * @details
 *       - state: 运动状态， 0-Idle 1-Running 2-Paused 3-Error
 *       - position: 关节位置，单位：弧度
 *       - velocity: 关节速度，单位：弧度/秒
 *       - tcp_pose: 末端位姿，单位：米和弧度
 *       - task_id: 指令序列号, 标识当前正在执行的指令序号
 * \~English
 * @brief Motion state parameters structure
 * @details
 *       - state: Motion state, 0-Idle 1-Running 2-Paused 3-Error
 *       - position: Joint position, in radians
 *       - velocity: Joint velocity, in radians/second
 *       - tcp_pose: End pose, in meters and radians
 *       - task_id: Instruction sequence number, identifies the current
 * instruction
 */
struct MoveMessageParams {
  uint8_t state;
  std::vector<double> position;
  std::vector<double> velocity;
  std::vector<TcpPoseParams> tcp_pose;
  uint8_t robot_mode;
  uint32_t task_id;
};
/**
 * \~Chinese
 * @brief 错误信息参数结构体
 * @details
 *       - id: 错误ID
 *       - level: 错误级别
 *       - module: 错误模块级别，1-控制器模块 2-驱动模块 3-固件模块
 *       - error_code: 错误码
 *       - msg: 错误信息
 * \~English
 * @brief Error message parameters structure
 * @details
 *       - id: Error ID
 *       - level: Error level
 *       - module: Error module level, 1-Controller 2-Driver 3-Firmware
 *       - error_code: Error code
 *       - msg: Error message
 */
struct ErrorMessageParams {
  uint32_t id;
  uint8_t level;
  uint8_t module;
  int32_t error_code;
  std::string msg;
};

#pragma pack(push, 1)  // 设置为1字节对齐
/**
 * \~Chinese
 * @brief 全身电机控制（机械臂+头部电机）参数结构体
 * @details
 *     - mode: 控制使能，0-禁用控制 1-启用控制
 *     - q: 关节目标位置，单位: rad
 *     - dq: 关节目标速度，单位: rad/s
 *     - tau: 关节前反馈力矩，单位: N・m
 * \~English
 * @brief Full-body motor control (arm + head motor) parameters structure
 * @details
 *     - mode: Control enable, 0-disable control 1-enable control
 *     - q: Joint target position, in rad
 *     - dq: Joint target velocity, in rad/s
 *     - tau: Joint feedforward torque, in N·m
 */
struct MotorCmd {
  uint8_t mode{};
  float q{};
  float dq{};
  float tau{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 底盘运动控制参数结构体
 * @details
 *    - mode: 控制使能，0-禁用控制 1-启用控制
 *    - left_velocity: 左轮速度，单位: m/s
 *    - right_velocity: 右轮速度，单位: m/s
 * \~English
 * @brief Chassis motion control structure
 * @details
 *    - mode: Control enable, 0-disable control 1-enable control
 *    - left_velocity: Left wheel velocity, in m/s
 *    - right_velocity: Right wheel velocity, in m/s
 */
struct BaseCmd {
  uint8_t mode{};
  float left_velocity{};
  float right_velocity{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 升降电机控制参数结构体
 * @details
 *    - mode: 控制使能，0-禁用控制 1-启用控制
 *    - position: 升降电机位置，单位：m
 *    - velocity: 升降电机速度，单位：m/s
 * \~English
 * @brief Elevator control parameters structure
 * @details
 *    - mode: Control enable, 0-disable control 1-enable control
 *    - position: Elevator motor position, in m
 *    - velocity: Elevator motor velocity, in m/s
 */
struct ElevatorCmd {
  uint8_t mode{};
  float position{};
  float velocity{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 夹爪控制参数结构体
 * @details
 *    - mode: 控制使能，0-禁用控制 1-启用控制
 *    - position: 目标位置，单位：m
 *    - force: 目标夹持力，单位：N
 *    - velocity: 夹爪速度，单位：m/s
 * \~English
 * @brief Gripper control parameters structure
 * @details
 *    - mode: Control enable, 0-disable control 1-enable control
 *    - position: target position, in m
 *    - force: Gripper force, in N
 *    - velocity: Gripper velocity, in m/s
 */
struct GripperCmd {
  uint8_t mode{};
  float position{};
  float force{};
  float velocity{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief PCU控制参数结构体
 * @details
 *    - mode: 三色灯是否启用
 *    - led_r: RGB-R 控制信息
 *    - led_g: RGB-G 控制信息
 *    - led_b: RGB-B 控制信息
 *    - led_mode: 三色灯闪烁模式
 *    - led_frequency: 三色灯闪烁频率
 * \~English
 * @brief PCU control parameters structure
 * @details
 *    - mode: Whether the tricolor light is enabled
 *    - led_r: RGB-R control information
 *    - led_g: RGB-G control information
 *    - led_b: RGB-B control information
 *    - led_mode: Tricolor light flashing mode
 *    - led_frequency: Tricolor light flashing frequency
 */
struct PCUCmd {
  uint8_t mode{};
  uint8_t led_r{};
  uint8_t led_g{};
  uint8_t led_b{};
  uint8_t led_mode{};
  uint8_t led_frequency{};
};

/**
 * \~Chinese
 * @brief 全身电机状态参数结构体
 * @details
 *    - mode: 控制模式，0-禁用控制 1-启用控制
 *    - q: 关节目标位置，单位: rad
 *    - dq: 关节目标速度，单位: rad/s
 *    - ddq: 关节加速度，单位： rad/s²
 *    - tau_est: 关节反馈力矩，单位: N・m
 *    - volt: 电压，单位: V
 *    - brake_state: 1-开抱闸，0-关抱闸
 *    - error_code: 错误码
 *    - warning_code: 警告码
 * \~English
 * @brief Full-body motor status parameters structure
 * @details
 *    - mode: Control mode, 0-disable control 1-enable control
 *    - q: Joint position, in rad
 *    - dq: Joint velocity, in rad/s
 *    - ddq: Joint acceleration, in rad/s²
 *    - tau_est: Joint estimated torque, in N·m
 *    - volt: Voltage, in V
 *    - brake_state: 1-brake engaged, 0-brake disengaged
 *    - error_code: Error code
 *    - warning_code: Warning code
 */
struct MotorState {
  uint8_t mode{};
  float q{};
  float dq{};
  float ddq{};
  float tau_est{};
  float volt{};
  uint8_t brake_state{};
  int32_t error_code{};
  int32_t warning_code{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief IMU状态参数结构体
 * @details
 *    - gyroscope: 设备绕三个坐标轴（x,y,z）的角速度值，单位: rad/s
 *    - accelerometer: 设备在三个坐标轴（x,y,z）上的加速度值，单位：m/s²
 *    - error_code: 错误码
 *    - warning_code: 警告码
 * \~English
 * @brief IMU state parameters structure
 * @details
 *   - gyroscope: Gyroscope data, in radians/second
 *   - accelerometer: Accelerometer data, in meters/second^2
 *   - error_code: Error code
 *   - warning_code: Warning code
 */
struct IMUState {
  std::array<float, 3> gyroscope;
  std::array<float, 3> accelerometer;
  int32_t error_code{};
  int32_t warning_code{};
};

/**
 * \~Chinese
 * @brief 底盘运动状态参数结构体
 * @details
 *    - mode: 控制模式
 *    - left_velocity: 左轮速度，单位：m/s
 *    - right_velocity: 右轮速度，单位：m/s
 *    - left_torque: 左轮转矩，单位：N·m
 *    - right_torque: 右轮转矩，单位：N·m
 *    - left_current: 左轮电流，单位：A
 *    - right_current: 右轮电流，单位：A
 *    - left_voltage: 左轮电压，单位：V
 *    - right_voltage: 右轮电压，单位：V
 *    - left_temperature: 左轮温度，单位：°C
 *    - right_temperature: 右轮温度，单位：°C
 *    - left_error_code: 左轮错误码
 *    - right_error_code: 右轮错误码
 *    - left_warning_code: 左轮警告码
 *    - right_warning_code: 右轮警告码
 * \~English
 * @brief Chassis motion state parameters structure
 * @details
 *    - mode: Control mode
 *    - left_velocity: Left wheel velocity, in m/s
 *    - right_velocity: Right wheel velocity, in m/s
 *    - left_torque: Left wheel torque, in N·m
 *    - right_torque: Right wheel torque, in N·m
 *    - left_current: Left wheel current, in A
 *    - right_current: Right wheel current, in A
 *    - left_voltage: Left wheel voltage, in volts
 *    - right_voltage: Right wheel voltage, in volts
 *    - left_temperature: Left wheel temperature (°C)
 *    - right_temperature: Right wheel temperature (°C)
 *    - left_error_code: Left wheel error code
 *    - right_error_code: Right wheel error code
 *    - left_warning_code: Left wheel warning code
 *    - right_warning_code: Right wheel warning code
 */
struct BaseState {
  uint8_t mode{};
  float left_velocity{};
  float right_velocity{};
  float left_torque{};
  float right_torque{};
  float left_current{};
  float right_current{};
  float left_voltage{};
  float right_voltage{};
  float left_temperature{};
  float right_temperature{};
  int32_t left_error_code{};
  int32_t right_error_code{};
  int32_t left_warning_code{};
  int32_t right_warning_code{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 升降电机状态参数结构体
 * @details
 *   - mode: 控制模式
 *   - position: 升降电机位置，单位：m
 *   - velocity: 升降电机速度，单位：m/s
 *   - brake_state: 制动状态，1-开抱闸，0-关抱闸
 *   - error_code: 错误码
 *   - warning_code: 警告码
 * \~English
 * @brief Elevator state parameters structure
 * @details
 *   - mode: Control mode
 *   - position: Elevator motor position, in meters
 *   - velocity: Elevator motor velocity, in meters/second
 *   - brake_state: Brake state, 0-release 1-brake
 *   - error_code: Error code
 *   - warning_code: Warning code
 */
struct ElevatorState {
  uint8_t mode{};
  float position{};
  float velocity{};
  uint8_t brake_state{};
  int32_t error_code{};
  int32_t warning_code{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 夹爪状态参数结构体
 * @details
 *   - mode: 控制模式, 0-禁用控制 1-启用控制
 *   - position: 当前夹爪位置，单位: m
 *   - force: 夹爪夹持力，单位: N
 *   - error_code: 错误码
 *   - warning_code: 警告码
 * \~English
 * @brief Gripper state parameters structure
 * @details
 *   - mode: Control mode, 0-disable control 1-enable control
 *   - position: Current gripper position, in m
 *   - force: Gripper force, in N
 *   - error_code: Error code
 *   - warning_code: Warning code
 */
struct GripperState {
  uint8_t mode{};
  float position{};
  float force{};
  int32_t error_code{};
  int32_t warning_code{};
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief PCU状态参数结构体
 * @details
 *   - power_off_flag: 开关状态，0-正常 1-断电
 *   - emergency_stop_flag: 紧急停止标志，0-开启，1-关闭
 *   - reset_flag: 复位标志，0-开启，1-关闭
 *   - brake_release_flag: 制动释放标志，1-开抱闸，0-关抱闸
 * \~English
 * @brief PCU state parameters structure
 * @details
 *   - power_off_flag: Power off flag, 0-normal 1-power off
 *   - emergency_stop_flag: Emergency stop flag, 0-on, 1-off
 *   - reset_flag: Reset flag, 0-on, 1-off
 *   - brake_release_flag: Brake release flag, 1-release, 0-brake
 */
struct PCUState {
  uint8_t power_off_flag{};
  uint8_t emergency_stop_flag{};
  uint8_t reset_flag{};
  uint8_t brake_release_flag{};
};

/**
 * \~Chinese
 * @brief 电池信息参数结构体
 * @details
 *   - capacity_percentage: 电池容量百分比
 *   - charging_state: 电池状态, 0-无效、1-充电、2-放电、3-静止
 * \~English
 * @brief Battery information parameters structure
 * @details
 *   - capacity_percentage: Battery capacity percentage, 0-100%
 *   - charging_state: Battery state: 0-invalid, 1-charging, 2-discharging,
 * 3-idle
 */
struct BatteryState {
  float capacity_percentage{};
  uint8_t charging_state{};
};

/**
 * \~Chinese
 * @brief 底层控制参数结构体
 * @details
 *   - motor_cmd: 电机控制参数数组
 *   - base_cmd: 底盘控制参数
 *   - elevator_cmd: 升降电机控制参数
 *   - gripper_cmd: 夹爪控制参数数组
 *   - pcu_cmd: PCU控制参数
 * \~English
 * @brief Low level control parameters structure
 * @details
 *   - motor_cmd: Motor control parameters array
 *   - base_cmd: Base control parameters
 *   - elevator_cmd: Elevator control parameters
 *   - gripper_cmd: Gripper control parameters array
 *   - pcu_cmd: PCU control parameters
 */
struct LowCmd {
  std::array<MotorCmd, 16> motor_cmd;
  BaseCmd base_cmd;
  ElevatorCmd elevator_cmd;
  std::array<GripperCmd, 2> gripper_cmd;
  PCUCmd pcu_cmd;
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 底层状态参数结构体
 * @details
 *   - version: 版本号
 *   - tick: 计时器
 *   - motor_state: 电机状态参数数组
 *   - imu_state: IMU状态参数
 *   - base_state: 底盘状态参数
 *   - elevator_state: 升降电机状态参数
 *   - gripper_state: 夹爪状态参数数组
 *   - pcu_state: PCU状态参数
 *   - battery_state: 电池状态参数
 *   - time_seconds: 累计时间，单位：s
 *   - upper_brake_state: 上半身抱闸状态
 *   - is_data_valid: 数据有效标志，0-无效 1-有效
 *   - error_code: 错误码
 *   - warning_code: 警告码
 * \~English
 * @brief Low level state parameters structure
 * @details
 *   - version: Version number
 *   - tick: Timer
 *   - motor_state: Motor state parameters array
 *   - imu_state: IMU state parameters
 *   - base_state: Base state parameters
 *   - elevator_state: Elevator state parameters
 *   - gripper_state: Gripper state parameters array
 *   - pcu_state: PCU state parameters
 *   - battery_state: Battery state parameters
 *   - time_seconds: Accumulated time, in seconds
 *   - upper_brake_state: Upper body brake state
 *   - is_data_valid: Data valid flag, 0-invalid 1-valid
 *   - error_code: Error code
 *   - warning_code: Warning code
 */
struct LowState {
  std::array<uint32_t, 2> version;
  uint32_t tick;
  std::array<MotorState, 16> motor_state;
  IMUState imu_state;
  BaseState base_state;
  ElevatorState elevator_state;
  std::array<GripperState, 2> gripper_state;
  PCUState pcu_state;
  BatteryState battery_state;
  int32_t time_seconds;
  uint8_t upper_brake_state;
  uint8_t is_data_valid;
  int32_t error_code;
  int32_t warning_code;
  std::array<uint32_t, 4> reserved;
};
#pragma pack(pop)  // 恢复之前的对齐设置

}  // namespace humanoid::h10w
