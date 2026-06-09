#pragma once

#include <cstdint>
#include <memory>
#include "HumanoidSdkDef.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

namespace humanoid {
namespace h10w {
/**
 * \~Chinese
 * @brief H10w 系统接口
 * \~English
 * @brief H10w system interface
 */
class HUMANOIDSDK_CLASS H10wSystem {
 public:
  H10wSystem();
  ~H10wSystem();

  SDK_DISABLE_COPY_MOVE(H10wSystem);

  /**
   *
   * \~Chinese
   *
   * @brief 标定指定关节的机械零位位置
   * @param jointIndex [in] 要标定的关节索引（int），升降机构和夹爪暂不支持
   * @note
   * 关节索引与 int 的映射关系见 `common/h10w_def.h` 中
   * `humanoid::h10w::JointIndexValue`。
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Calibrate the mechanical zero position of a specified joint.
   * @param jointIndex [in] Joint index (int) to be calibrated. Elevater and
   * gripper are not currently supported.
   * @note Mapping between joint indexes and int values is defined in
   * `humanoid::h10w::JointIndexValue` in `common/h10w_def.h`.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int calibrateMechanicalZeroPosition(int jointIndex);

  /**
   *
   * \~Chinese
   *
   * @brief 标定指定关节的90°位置
   * @param jointIndex [in] 要标定的关节索引（int），升降机构和夹爪暂不支持
   * @note
   * 关节索引与 int 的映射关系见 `common/h10w_def.h` 中
   * `humanoid::h10w::JointIndexValue`。
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Calibrate the 90° position of a specified joint.
   * @param jointIndex [in] Joint index (int) to be calibrated. Elevater and
   * gripper are not currently supported.
   * @note Mapping between joint indexes and int values is defined in
   * `humanoid::h10w::JointIndexValue` in `common/h10w_def.h`.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int calibrate90DegPosition(int jointIndex);

  /**
   *
   * \~Chinese
   *
   * @brief 保存指定关节的零位数据
   * @param jointIndex [in]
   * 要设置机械零位位置的关节索引（int），升降机构和夹爪暂不支持
   * @note
   * 关节索引与 int 的映射关系见 `common/h10w_def.h` 中
   * `humanoid::h10w::JointIndexValue`。
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Save the mechanical zero position of specified joint
   * zero position.
   * @param jointIndex [in] Joint index (int) whose mechanical zero position is
   * to be saved. Elevater and gripper are not currently supported.
   * @note Mapping between joint indexes and int values is defined in
   * `humanoid::h10w::JointIndexValue` in `common/h10w_def.h`.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int saveJointParameters(int jointIndex);

  /**
   * \~Chinese
   * @brief 控制机器人电源状态
   * @warning 调用 `controlPower`
   * 接口时，请预留足够的时间间隔，避免上电或下电尚未完全生效就进行后续操作。
   * @param state [in] 电源状态
   *              - PowerState::POWER_ON: 上电
   *              - PowerState::POWER_OFF: 下电
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Control the power state of the robot.
   * @warning When calling the `PowerControl` interface, leave sufficient time
   * between operations to avoid proceeding while power on/off has not fully
   * taken effect.
   * @param state [in] PowerState::POWER_ON: power on; PowerState::POWER_OFF:
   * power off.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int controlPower(PowerState state);

  /**
   * \~Chinese
   * @brief 获取机器人电源状态
   * @param state [out] 电源状态
   *              - PowerState::POWER_ON: 上电
   *              - PowerState::POWER_OFF: 下电
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get the power state of the robot.
   * @param state [out] PowerState::POWER_ON: power on; PowerState::POWER_OFF:
   * power off.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int statusPower(PowerState& state);

  /**
   * \~Chinese
   * @brief 控制机器人抱闸状态
   * @param state [in] 抱闸状态
   *              - BrakeState::BRAKE_OFF: 关闭抱闸
   *              - BrakeState::BRAKE_ON: 打开抱闸
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Control the brake state of the robot.
   * @param state [in] BrakeState::BRAKE_OFF: close brake;
   * BrakeState::BRAKE_ON: open brake.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int controlBrake(BrakeState state);

  /**
   * \~Chinese
   * @brief 获取机器人版本信息
   * @param robotVersion [out] 版本信息结构体
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get the version of the robot and its plugins.
   * @param robotVersion [out] The version information structure.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getRobotVersion(RobotVersion& robotVersion);

  /**
   * \~Chinese
   * @brief 清除机器人错误状态
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Clear the error state of the robot.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int clearError();

  /**
   * \~Chinese
   * @brief 启用或禁用控制器
   * @param enable [in] true: 启用；false: 禁用
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * @note
   * 开启机器人控制器后，控制器可以发送动作命令给驱动器。禁用后，控制器将不再向驱动器发送任何动作命令，以防止安全事故。
   * \~English
   * @brief Enable or disable the robot controller.
   * @param enable [in] true: enable; false: disable.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   * @note When the robot controller is enabled, it can send motion commands to
   * drives. When disabled, the controller will not send any motion commands to
   * drives for safety.
   */
  int enableController(bool enable);

  /**
   * \~Chinese
   * @brief 检查机器人控制器是否开启
   * @param enable [out] 控制器状态，true: 启用；false: 禁用
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Check whether the robot controller is enabled.
   * @param enable [out] The controller status, true: enable; false: disable.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int isControllerEnabled(bool& enable);

  /**
   * \~Chinese
   * @brief 获取麦克风状态
   * @param status [out] 麦克风状态结构体
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get the microphone status.
   * @param status [out] The microphone status structure.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getMicrophone(MicrophoneStatus& status);

  /**
   * \~Chinese
   * @brief 设置麦克风状态
   * @param status [in] 麦克风状态结构体
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Set the microphone status.
   * @param status [in] The microphone status structure.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setMicrophone(const MicrophoneStatus& status);

  /**
   * \~Chinese
   * @brief 获取扬声器状态
   * @param status [out] 扬声器状态结构体
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get the speaker status.
   * @param status [out] The speaker status structure.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getSpeaker(SpeakerStatus& status);

  /**
   * \~Chinese
   * @brief 设置扬声器状态
   * @param status [in] 扬声器状态结构体
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Set the speaker status.
   * @param status [in] The speaker status structure.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setSpeaker(const SpeakerStatus& status);

  /**
   * \~Chinese
   * @brief 获取推送周期
   * @param period [out] 推送周期（毫秒）
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get push period
   * @param period [out] Push period (milliseconds)
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getPushPeriod(uint32_t& period);

  /**
   * \~Chinese
   * @brief 设置推送周期
   * @param period [in] 推送周期（毫秒）
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Set push period
   * @param period [in] Push period (milliseconds)
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setPushPeriod(uint32_t period);
};
}  // namespace h10w
}  // namespace humanoid
