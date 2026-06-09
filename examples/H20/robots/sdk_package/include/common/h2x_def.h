#pragma once

#include <tuple>
#include <string>
#include <cstdint>
#include <vector>

namespace humanoid::h2x {

inline constexpr const char* ROBOT_MODEL = "h2x";

/**
 * \~Chinese
 * @brief H2x 关节索引与 int 的映射关系
 * @details
 *   - JOINT_INDEX_UNKNOWN = 0
 *   - L_HIP_PITCH = 1
 *   - L_HIP_ROLL = 2
 *   - L_HIP_YAW = 3
 *   - L_KNEE = 4
 *   - L_ANKLE_PITCH = 5
 *   - L_ANKLE_ROLL = 6
 *   - R_HIP_PITCH = 7
 *   - R_HIP_ROLL = 8
 *   - R_HIP_YAW = 9
 *   - R_KNEE = 10
 *   - R_ANKLE_PITCH = 11
 *   - R_ANKLE_ROLL = 12
 *   - WAIST_YAW = 13
 *   - WAIST_ROLL = 14
 *   - WAIST_PITCH = 15
 *   - L_SHOULDER_PITCH = 16
 *   - L_SHOULDER_ROLL = 17
 *   - L_SHOULDER_YAW = 18
 *   - L_ELBOW = 19
 *   - L_WRIST_ROLL = 20
 *   - L_WRIST_PITCH = 21
 *   - L_WRIST_YAW = 22
 *   - R_SHOULDER_PITCH = 23
 *   - R_SHOULDER_ROLL = 24
 *   - R_SHOULDER_YAW = 25
 *   - R_ELBOW = 26
 *   - R_WRIST_ROLL = 27
 *   - R_WRIST_PITCH = 28
 *   - R_WRIST_YAW = 29
 *   - HEAD_PITCH = 36
 *   - HEAD_YAW = 37
 *   - ALL_JOINTS = 9999（CAN ID 配置请求中代表选中 1-29 关节）
 * \~English
 * @brief Mapping between H2x joint indexes and int values
 * @details
 *   - JOINT_INDEX_UNKNOWN = 0
 *   - L_HIP_PITCH = 1
 *   - L_HIP_ROLL = 2
 *   - L_HIP_YAW = 3
 *   - L_KNEE = 4
 *   - L_ANKLE_PITCH = 5
 *   - L_ANKLE_ROLL = 6
 *   - R_HIP_PITCH = 7
 *   - R_HIP_ROLL = 8
 *   - R_HIP_YAW = 9
 *   - R_KNEE = 10
 *   - R_ANKLE_PITCH = 11
 *   - R_ANKLE_ROLL = 12
 *   - WAIST_YAW = 13
 *   - WAIST_ROLL = 14
 *   - WAIST_PITCH = 15
 *   - L_SHOULDER_PITCH = 16
 *   - L_SHOULDER_ROLL = 17
 *   - L_SHOULDER_YAW = 18
 *   - L_ELBOW = 19
 *   - L_WRIST_ROLL = 20
 *   - L_WRIST_PITCH = 21
 *   - L_WRIST_YAW = 22
 *   - R_SHOULDER_PITCH = 23
 *   - R_SHOULDER_ROLL = 24
 *   - R_SHOULDER_YAW = 25
 *   - R_ELBOW = 26
 *   - R_WRIST_ROLL = 27
 *   - R_WRIST_PITCH = 28
 *   - R_WRIST_YAW = 29
 *   - HEAD_PITCH = 36
 *   - HEAD_YAW = 37
 *   - ALL_JOINTS = 9999 (means selecting joints 1-29 in CAN ID
 *     configuration request)
 */
namespace JointIndexValue {
inline constexpr int JOINT_INDEX_UNKNOWN = 0;
inline constexpr int L_HIP_PITCH = 1;        // 左腿1关节
inline constexpr int L_HIP_ROLL = 2;         // 左腿2关节
inline constexpr int L_HIP_YAW = 3;          // 左腿3关节
inline constexpr int L_KNEE = 4;             // 左腿4关节
inline constexpr int L_ANKLE_PITCH = 5;      // 左足1关节
inline constexpr int L_ANKLE_ROLL = 6;       // 左足2关节
inline constexpr int R_HIP_PITCH = 7;        // 右腿1关节
inline constexpr int R_HIP_ROLL = 8;         // 右腿2关节
inline constexpr int R_HIP_YAW = 9;          // 右腿3关节
inline constexpr int R_KNEE = 10;            // 右腿4关节
inline constexpr int R_ANKLE_PITCH = 11;     // 右足1关节
inline constexpr int R_ANKLE_ROLL = 12;      // 右足2关节
inline constexpr int WAIST_YAW = 13;         // 腰部1关节
inline constexpr int WAIST_ROLL = 14;        // 腰部2关节
inline constexpr int WAIST_PITCH = 15;       // 腰部3关节
inline constexpr int L_SHOULDER_PITCH = 16;  // 左臂1关节
inline constexpr int L_SHOULDER_ROLL = 17;   // 左臂2关节
inline constexpr int L_SHOULDER_YAW = 18;    // 左臂3关节
inline constexpr int L_ELBOW = 19;           // 左臂4关节
inline constexpr int L_WRIST_ROLL = 20;      // 左臂5关节
inline constexpr int L_WRIST_PITCH = 21;     // 左臂6关节
inline constexpr int L_WRIST_YAW = 22;       // 左臂7关节
inline constexpr int R_SHOULDER_PITCH = 23;  // 右臂1关节
inline constexpr int R_SHOULDER_ROLL = 24;   // 右臂2关节
inline constexpr int R_SHOULDER_YAW = 25;    // 右臂3关节
inline constexpr int R_ELBOW = 26;           // 右臂4关节
inline constexpr int R_WRIST_ROLL = 27;      // 右臂5关节
inline constexpr int R_WRIST_PITCH = 28;     // 右臂6关节
inline constexpr int R_WRIST_YAW = 29;       // 右臂7关节
inline constexpr int HEAD_PITCH = 36;        // 头部1关节
inline constexpr int HEAD_YAW = 37;          // 头部2关节
inline constexpr int ALL_JOINTS = 9999;  // CAN ID配置请求中，代表选中1-29关节
}  // namespace JointIndexValue

/**
 * \~Chinese
 * @brief 表示IMU索引的枚举类型
 * \~English
 * @brief Represents the enumeration type of IMU index
 */
enum class ImuIndex {
  IMU_INDEX_UNKNOWN = 0,
  TORSO_IMU = 1,  // 躯干IMU
  WAIST_IMU = 2,  // 腰部IMU
};

enum class RobotMode {
  ZeroTorqueMode = 0,     // 零力矩模式
  DampMode = 1,           // 阻尼模式
  LockStandMode = 2,      // 锁定站立模式（非抗干扰）
  WalkRunMode = 3,        // 走跑模式（抗干扰）
  ClimbStairsMode = 4,    // 爬楼梯（盲走）模式
  WalkOnTerrainMode = 5,  // 多地形模式
  DanceMode = 6,          // 跳舞模式
  SquatMode = 7,          // 蹲姿模式
  SitMode = 8,            // 坐姿模式
};

#pragma pack(push, 1)  // 设置为1字节对齐
/**
 * \~Chinese
 * @brief 全身电机控制（机械臂+头部电机）参数结构体
 * \~English
 * @brief Full-body motor control (arm + head motor) parameters structure
 */
struct MotorCmd {
  uint8_t mode;
  uint8_t operation_mode;
  float q;
  float dq;
  float tau;
  float kp;
  float kd;
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 底层控制参数结构体
 * \~English
 * @brief Low level control parameters structure
 */
struct LowCmd {
  uint8_t mode_pr;
  std::array<MotorCmd, 37> motor_cmd;
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 实时控制命令参数结构体
 * \~English
 * @brief Realtime control command parameters structure
 */
struct RealtimeCmd {
  uint8_t mode_pr;
  double time;
  std::array<MotorCmd, 37> motor_cmd;
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief IMU状态参数结构体
 * \~English
 * @brief IMU state parameters structure
 */
struct IMUState {
  std::array<float, 4> quaternion;
  std::array<float, 3> gyroscope;
  std::array<float, 3> accelerometer;
  std::array<float, 3> rpy;
  float temperature;
  int32_t error_code;
  int32_t warning_code;
};

/**
 * \~Chinese
 * @brief 全身电机状态参数结构体
 * \~English
 * @brief Full-body motor status parameters structure
 */
struct MotorState {
  uint8_t mode;
  uint8_t operation_mode;
  float q;
  float dq;
  float ddq;
  float cur;
  float tau_est;
  std::array<float, 2> temperature;
  float kp;
  float kd;
  int32_t error_code;
  int32_t warning_code;
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 电池信息参数结构体
 * \~English
 * @brief Battery state parameters structure
 */
struct BatteryState {
  uint8_t battery_percentage;
  uint8_t battery_state;
  uint8_t battery_low_warning;
  int32_t error_code;
  int32_t warning_code;
};

/**
 * \~Chinese
 * @brief PCU状态参数结构体
 * \~English
 * @brief PCU state parameters structure
 */
struct PCUState {
  uint8_t emergency_stop_state;
  uint8_t control_supply_state;
  uint8_t power_supply_state;
  int32_t pcu_error_code;
  int32_t pcu_warning_code;
  float battery_voltage;
  float motor_bus_voltage;
  float motor_bus_current;
  float dcdc_bus_voltage;
  float voltage_24v;
  float voltage_12v;
  float current_24v;
  float current_12v;
};

/**
 * \~Chinese
 * @brief CDU状态参数结构体
 * \~English
 * @brief CDU state parameters structure
 */
struct CDUState {
  int32_t error_code;
  int32_t warning_code;
};

/**
 * \~Chinese
 * @brief 底层状态参数结构体
 * \~English
 * @brief Low level state parameters structure
 */
struct LowState {
  std::array<uint32_t, 2> version;
  uint8_t mode_pr;
  uint32_t tick;
  std::array<IMUState, 2> imu_state;
  std::array<MotorState, 37> motor_state;
  bool has_battery_info;
  BatteryState battery_info;
  uint16_t ground_count;
  std::array<uint8_t, 4> ground_signal;
  int32_t time_seconds;
  uint8_t is_pcu_valid;
  PCUState pcu_state;
  uint8_t is_cdu_valid;
  CDUState cdu_state;
  uint8_t is_data_valid;
  int32_t error_code;
  int32_t warning_code;
  std::array<uint32_t, 4> reserved;
};

/**
 * \~Chinese
 * @brief 灯环控制参数结构体
 * \~English
 * @brief Lamp ring control parameters structure
 */
struct LRCUCmd {
  // 1. 三色灯使能控制
  // 0: disable, 1: enable
  uint8_t led_enable;

  // 2. LED 模式控制
  // 0: off, 1: constant, 2: blink, 3: breathing
  uint8_t led_mode;

  // 3. 闪烁/呼吸周期控制 (ms)
  // Range: 100~1000 ms
  uint16_t led_period_ms;

  // 4-6. RGB 通道亮度控制 (0~255)
  uint8_t led_r;
  uint8_t led_g;
  uint8_t led_b;
};

/**
 * \~Chinese
 * @brief 灯环状态参数结构体
 * \~English
 * @brief Lamp ring state parameters structure
 */
struct LRCUState {
  // 1. 是否可控
  // 0: not controllable, 1: controllable
  uint8_t led_enable;

  // 2. 当前 LED 模式
  // 0: off, 1: constant, 2: blink, 3: breathing
  uint8_t led_mode;

  // 3. 当前闪烁/呼吸周期 (ms)
  // Example: 10000 ms = 0.1 Hz, 100 ms = 10 Hz
  uint16_t led_period_ms;

  // 4-6. 当前 RGB 通道亮度 (0~255)
  uint8_t led_r;
  uint8_t led_g;
  uint8_t led_b;
};
#pragma pack(pop)  // 恢复之前的对齐设置
}  // namespace humanoid::h2x
