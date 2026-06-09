#pragma once

#include <cstdint>
#include <memory>
#include "HumanoidSdkDef.h"
#include "common/common_def.h"
#include "common/h2x_def.h"

namespace humanoid {
namespace h2x {
/**
 * \~Chinese
 * @brief H2x 系统接口
 * \~English
 * @brief H2x system interface
 */
class HUMANOIDSDK_CLASS H2xSystem {
 public:
  H2xSystem();
  ~H2xSystem();

  SDK_DISABLE_COPY_MOVE(H2xSystem);

  /**
   *
   * \~Chinese
   *
   * @brief 标定指定关节的机械零位位置
   * @param jointIndex [in] 要标定的关节索引（int）
   * @note
   * 关节索引与 int 的映射关系见 `common/h2x_def.h` 中
   * `humanoid::h2x::JointIndexValue`。
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   *
   * @brief Calibrate the mechanical zero position of a specified joint.
   * @param jointIndex [in] Joint index (int) to be calibrated.
   * @note Mapping between joint indexes and int values is defined in
   * `humanoid::h2x::JointIndexValue` in `common/h2x_def.h`.
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int calibrateMechanicalZeroPosition(int jointIndex);

  /**
   *
   * \~Chinese
   *
   * @brief 设置当前关节的位置作为机械零位位置
   * @param jointIndex [in]
   * 要设置机械零位位置的关节索引（int）
   * @note
   * 关节索引与 int 的映射关系见 `common/h2x_def.h` 中
   * `humanoid::h2x::JointIndexValue`。
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   *
   * @brief Save the current position of a specified joint as its mechanical
   * zero position.
   * @param jointIndex [in] Joint index (int) whose mechanical zero position is
   * to be saved.
   * @note Mapping between joint indexes and int values is defined in
   * `humanoid::h2x::JointIndexValue` in `common/h2x_def.h`.
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int saveJointParameters(int jointIndex);

  /**
   * \~Chinese
   * @brief 获取机器人版本信息
   * @param version [out] 版本信息结构体
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   * @brief Get the version of the robot and its plugins.
   * @param version [out] The version information structure.
   * @return int
   *         - 0: Success;
   *         - - other: Error Code;
   */
  int getRobotVersion(RobotVersion& version);

  /**
   * \~Chinese
   * @brief 清除机器人错误状态
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   * @brief Clear the error state of the robot.
   * @return int
   *         - 0: Success;
   *         - - other: Error Code;
   */
  int clearError();

  /**
   * \~Chinese
   * @brief 使能机器人控制器
   * @param enable [in] true: 使能；false: 禁用
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * @note
   * 使能机器人控制器后，控制器可以发送动作命令给驱动器。禁用后，控制器将不再向驱动器发送任何动作命令，以防止安全事故。
   * \~English
   * @brief Enable or disable the robot controller.
   * @param enable [in] true: enable; false: disable.
   * @return int
   *         - 0: Success;
   *         - - other: Error Code;
   * @note When the robot controller is enabled, it can send motion commands to
   * drives. When disabled, the controller will not send any motion commands to
   * drives for safety.
   */
  int enableController(bool enable);

  /**
   * \~Chinese
   * @brief 检查机器人控制器是否使能
   * @param enable [out] 控制器状态，true: 使能；false: 禁用
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   * @brief Check whether the robot controller is enabled.
   * @param enable [out] The controller status, true: enable; false: disable.
   * @return int
   *         - 0: Success;
   *         - - other: Error Code;
   */
  int isControllerEnabled(bool& enable);

  /**
   * \~Chinese
   * @brief 获取麦克风状态
   * @param status [out] 麦克风状态结构体
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   * @brief Get the microphone status.
   * @param status [out] The microphone status structure.
   * @return int
   *         - 0: Success;
   *         - - other: Error Code;
   */
  int getMicrophone(MicrophoneStatus& status);

  /**
   * \~Chinese
   * @brief 设置麦克风状态
   * @param status [in] 麦克风状态结构体
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   * @brief Set the microphone status.
   * @param status [in] The microphone status structure.
   * @return int
   *         - 0: Success;
   *         - - other: Error Code;
   */
  int setMicrophone(const MicrophoneStatus& status);

  /**
   * \~Chinese
   * @brief 获取扬声器状态
   * @param status [out] 扬声器状态结构体
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   * @brief Get the speaker status.
   * @param status [out] The speaker status structure.
   * @return int
   *         - 0: Success;
   *         - - other: Error Code;
   */
  int getSpeaker(SpeakerStatus& status);

  /**
   * \~Chinese
   * @brief 设置扬声器状态
   * @param status [in] 扬声器状态结构体
   * @return int
   *         - 0: 成功；
   *         - - 其他: 错误码；
   * \~English
   * @brief Set the speaker status.
   * @param status [in] The speaker status structure.
   * @return int
   *         - 0: Success;
   *         - - other: Error Code;
   */
  int setSpeaker(const SpeakerStatus& status);
};
}  // namespace h2x
}  // namespace humanoid
