#pragma once

#include <cstdint>
#include <memory>
#include <tuple>
#include <vector>
#include "HumanoidSdkDef.h"
#include "common/common_def.h"
#include "common/h2x_def.h"

namespace humanoid {
namespace h2x {
/**
 * \~Chinese
 * @brief H2x 机器人低级别控制接口类
 *
 * 该类提供了对 H2x 机器人底层硬件的直接控制接口，包括关节空间控制、
 * 读取机器人状态等功能。适用于需要精细控制机器人底层行为的应用场景。
 *
 * \~English
 * @brief H2x robot low-level control interface class
 *
 * This class provides direct control interfaces to H2x robot's underlying
 * hardware, including joint space control, robot state reading, etc. Suitable
 * for applications that require fine-grained control of robot's low-level
 * behaviors.
 */
class HUMANOIDSDK_CLASS H2xLowLevel {
 public:
  H2xLowLevel();
  ~H2xLowLevel();

  /**
   * \~Chinese
   * @brief 写入低级别控制命令
   *
   * 向机器人发送低级别控制命令，包括关节角度、有效性标志和时间戳。
   * 该接口提供对机器人底层硬件的直接控制。
   *
   * @param lowCmd [in] 低级别控制命令结构体
   * @return int 执行结果
   *         - 0: 成功；
   *         - 其他: 错误码；
   *
   * \~English
   * @brief Write low-level control command
   *
   * Send low-level control command to the robot, including joint angles,
   * validity flags and timestamp. This interface provides direct control
   * to the robot's underlying hardware.
   *
   * @param lowCmd [in] Low-level control command structure
   * @return int Execution result
   *         - 0: Success;
   *         - other: Error Code;
   */
  int writeLowCmd(const LowCmd& lowCmd);

  /**
   * \~Chinese
   * @brief 读取低级别状态信息
   *
   * 从机器人读取当前的低级别状态信息，包括末端执行器位姿、有效性标志等。
   *
   * @param lowState [out] 低级别状态结构体，用于接收状态数据
   * @return int 执行结果
   *         - 0: 成功；
   *         - 其他: 错误码；
   *
   * \~English
   * @brief Read low-level state information
   *
   * Read current low-level state information from the robot, including
   * end-effector poses, validity flags, etc.
   *
   * @param lowState [out] Low-level state structure to receive state data
   * @return int Execution result
   *         - 0: Success;
   *         - other: Error Code;
   */
  int readLowState(LowState& lowState);

  /**
   * \~Chinese
   * @brief 写入LR-CU控制命令
   *
   * 向LR-CU（左右控制单元）发送控制命令。
   *
   * @param lRCUCmd [in] LR-CU控制命令
   * @return int 执行结果
   *         - 0: 成功；
   *         - 其他: 错误码；
   *
   * \~English
   * @brief Write LR-CU control command
   *
   * Send control command to LR-CU (Left-Right Control Unit).
   *
   * @param lRCUCmd [in] LR-CU control command
   * @return int Execution result
   *         - 0: Success;
   *         - other: Error Code;
   */
  int writeLRCUCmd(const LRCUCmd& lRCUCmd);

  /**
   * \~Chinese
   * @brief 读取LR-CU状态信息
   *
   * 从LR-CU（左右控制单元）读取当前状态信息。
   *
   * @param lRCUState [out] LR-CU状态结构体，用于接收状态数据
   * @return int 执行结果
   *         - 0: 成功；
   *         - 其他: 错误码；
   *
   * \~English
   * @brief Read LR-CU state information
   *
   * Read current state information from LR-CU (Left-Right Control Unit).
   *
   * @param lRCUState [out] LR-CU state structure to receive state data
   * @return int Execution result
   *         - 0: Success;
   *         - other: Error Code;
   */
  int readLRCUState(LRCUState& lRCUState);
};
}  // namespace h2x
}  // namespace humanoid