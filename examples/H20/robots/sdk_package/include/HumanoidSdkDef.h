#pragma once

#include <string>
#include <unordered_map>
#include <optional>

#if defined _WIN32
#ifdef HUMANOIDSDK_EXPORTS
#define HUMANOID_SDK extern "C" __declspec(dllexport)
#define HUMANOIDSDK_CLASS __declspec(dllexport)
#else
#define HUMANOID_SDK extern "C" __declspec(dllimport)
#define HUMANOIDSDK_CLASS __declspec(dllimport)
#endif
#else
#if __GNUC__ >= 4
#define HUMANOID_SDK extern "C" __attribute__((visibility("default")))
#define HUMANOIDSDK_CLASS __attribute__((visibility("default")))
#else
#define HUMANOID_SDK extern "C"
#define HUMANOIDSDK_CLASS
#endif
#endif

#define SDK_DISABLE_COPY_MOVE(Class)        \
  Class(const Class &) = delete;            \
  Class &operator=(const Class &) = delete; \
  Class(Class &&) = delete;                 \
  Class &operator=(Class &&) = delete;

namespace humanoid {

/**
 * \~Chinese
 * @brief 驱动版本信息结构体
 * @details
 *      - driver_version: 驱动版本号
 *      - grpc_version: GRPC版本号
 *      - fastdds_version: FastDDS版本号
 *      - firmware_version: 固件版本号
 *      - sdk_version: SDK版本号
 *      - ethercat_version: EtherCAT版本号
 *      - left_gripper_version: 左侧夹爪版本号
 *      - right_gripper_version: 右侧夹爪版本号
 *      - cdu_version: CDU版本号
 *      - pcu_version: PCU版本号
 *      - lrcu_version: LRCU版本号
 * \~English
 * @brief Driver version information structure
 * @details
 *      - driver_version: Driver version number
 *      - grpc_version: GRPC version number
 *      - fastdds_version: FastDDS version number
 *      - firmware_version: Firmware version number
 *      - sdk_version: SDK version number
 *      - ethercat_version: EtherCAT version number
 *      - left_gripper_version: Left gripper version number
 *      - right_gripper_version: Right gripper version number
 *      - cdu_version: CDU version number
 *      - pcu_version: PCU version number
 *      - lrcu_version: LRCU version number
 */
struct DriverVersion {
  std::string driver_version;
  std::string grpc_version;
  std::string fastdds_version;
  std::optional<std::string> firmware_version;
  std::optional<std::string> sdk_version;
  std::optional<std::string> ethercat_version;
  std::optional<std::string> left_gripper_version;
  std::optional<std::string> right_gripper_version;
  std::optional<std::string> cdu_version;
  std::optional<std::string> pcu_version;
  std::optional<std::string> lrcu_version;
};

/**
 * \~Chinese
 * @brief 控制器版本信息结构体
 * @details
 *      - main_version: 控制器主版本号
 *      - plugin_versions: 插件版本号
 * \~English
 * @brief Controller version information structure
 * @details
 *      - main_version: Main version of the controller
 *      - plugin_versions: Plugin version numbers
 */
struct ControllerVersion {
  std::string main_version;
  std::unordered_map<std::string, std::string> plugin_versions;
};

/**
 * \~Chinese
 * @brief 监控器版本信息结构体
 * @details
 *      - main_version: 监控器主版本号
 *      - robot_version: 机器人版本号
 *      - function_versions: 功能模块版本号
 * \~English
 * @brief Monitor version information structure
 * @details
 *      - main_version: Main version of the monitor
 *      - robot_version: Robot version number
 *      - function_versions: Function module version numbers
 */
struct MonitorVersion {
  std::string main_version;
  std::string robot_version;
  std::unordered_map<std::string, std::string> function_versions;
};

/**
 * \~Chinese
 * @brief 机器人版本信息结构体
 * @details
 *      - driver_version: 驱动版本信息结构体
 *      - controller_version: 控制器版本信息结构体
 *      - monitor_version: 监控器版本信息结构体
 * \~English
 * @brief Robot version information structure
 * @details
 *      - driver_version: Driver version information structure
 *      - controller_version: Controller version information structure
 *      - monitor_version: Monitor version information structure
 */
struct RobotVersion {
  DriverVersion driver_version;
  ControllerVersion controller_version;
  MonitorVersion monitor_version;
};

/**
 * \~Chinese
 * @brief 麦克风状态结构体
 * @details
 *      - enable: 是否启用麦克风
 *      - volume: 麦克风音量等级
 * \~English
 * @brief microphone status structure
 * @details
 *      - enable: whether microphone is enabled
 *      - volume: volume level of the microphone
 */
struct MicrophoneStatus {
  bool enable;
  long volume;
};

/**
 * \~Chinese
 * @brief 扬声器状态结构体
 * @details
 *      - enable: 是否启用扬声器
 *      - volume: 扬声器音量等级
 * \~English
 * @brief speaker status structure
 * @details
 *      - enable: whether speaker is enabled
 *      - volume: volume level of the speaker
 */
struct SpeakerStatus {
  bool enable;
  long volume;
};

}  // namespace humanoid