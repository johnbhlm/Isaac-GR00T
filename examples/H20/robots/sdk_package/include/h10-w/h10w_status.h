#pragma once

#include <cstdint>
#include <memory>
#include <tuple>
#include <vector>
#include "HumanoidSdkDef.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

namespace humanoid {
namespace h10w {
/**
 * \~Chinese
 * @brief H10w 状态接口
 * \~English
 * @brief H10w status interface
 */
class HUMANOIDSDK_CLASS H10wStatus {
 public:
  H10wStatus();
  ~H10wStatus();

  /**
   *
   * \~Chinese
   *
   * @brief 获取当前控制器状态信息
   * @param controller_message [out]
   * 状态，包含控制器启用状态、机器人电源状态、各关节或部件抱闸状态等信息
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get current controller status.
   * @param controller_message [out] Controller status, including controller
   * enabled state, robot power state, joint or part brake state, etc.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getControllerMessage(ControllerMessageParams& controller_message);

  /**
   *
   * \~Chinese
   *
   * @brief 获取当前运动状态信息
   * @param move_message [out] 状态，包含关节角度、关节速度、TCP位姿等信息
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get current motion state.
   * @param move_message [out] Motion state, including joint angles, joint
   * velocities, and TCP pose, etc.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getMoveMessage(MoveMessageParams& move_message);

  /**
   *
   * \~Chinese
   *
   * @brief 获取当前错误状态
   * @param error_message [out] 详细错误信息
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get current error state.
   * @param error_message [out] Detailed error information.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getErrorMessage(ErrorMessageParams& error_message);
};
}  // namespace h10w
}  // namespace humanoid
