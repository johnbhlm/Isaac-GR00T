#pragma once

#include "HumanoidSdkDef.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

namespace humanoid {
namespace h10w {

class HUMANOIDSDK_CLASS H10wLowLevel {
 public:
  H10wLowLevel();
  ~H10wLowLevel();

  /**
   *
   * \~Chinese
   *
   * @brief 发布底层控制命令
   * @param lowCmd [in] 底层控制命令
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Publish low-level control command
   * @param lowCmd [in] Low-level control command
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int writeLowCmd(const LowCmd& lowCmd);

  /**
   *
   * \~Chinese
   *
   * @brief 订阅底层状态
   * @param lowState [out] 底层状态
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Subscribe low-level state
   * @param lowState [out] Low-level state
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int readLowState(LowState& lowState);
};

}  // namespace h10w
}  // namespace humanoid