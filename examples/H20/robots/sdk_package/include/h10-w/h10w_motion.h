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
 * @brief H10w 运动接口
 * \~English
 * @brief H10w motion interface
 */
class HUMANOIDSDK_CLASS H10wMotion {
 public:
  H10wMotion();
  ~H10wMotion();

  /**
   *
   * \~Chinese
   *
   * @brief 单个关节运动请求
   * @param [in] joint_target 关节目标
   * @param [in] velocity 目标关节速度（范围:0.0~1.0)
   * @param [in] acc 目标关节加速度（范围:0.0~1.0）
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Move a single joint
   * @param [in] joint_target The target of the single joint
   * @param [in] velocity The target joint velocity (range: 0.0~1.0)
   * @param [in] acc The target joint acceleration (range: 0.0~1.0)
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int requestSingleJointMove(const JointTarget& joint_target, double velocity, double acc);

  /**
   *
   * \~Chinese
   *
   * @brief 多个关节运动请求
   * @param [in] joint_targets 关节目标
   * @param [in] velocity 目标关节速度（范围:0.0~1.0)
   * @param [in] acc 目标关节加速度（范围:0.0~1.0）
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Move multiple joints
   * @param [in] joint_targets The target of the joints
   * @param [in] velocity The target joint velocity (range: 0.0~1.0)
   * @param [in] acc The target joint acceleration (range: 0.0~1.0)
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int requestMultiJointsMove(const std::vector<JointTarget>& joint_targets,
                             double velocity, double acc);

  /**
   *
   * \~Chinese
   *
   * @brief 直线运动请求
   * @param linear_targets [in] 直线目标
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Linear Move
   * @param [in] linear_targets The target of the tcps
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int requestLinearMove(const std::vector<LinearTarget>& linear_targets);

  /**
   *
   * \~Chinese
   *
   * @brief 等待运动完成
   * @param timeout_ms [in] 超时时间（毫秒）
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Blocking wait until move is complete
   * @param [in] timeout_ms Timeout in ms
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int waitMove(int timeout_ms = 1000 * 100);

  /**
   *   \~Chinese
   *
   *   @brief 停止运动
   *   @return int
   *           - 0: 成功；
   *           - 其他: 错误码；
   *   \~English
   *
   *   @brief Stop moving the robot.
   *   @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int requestStop();

  /**
   *
   * \~Chinese
   *
   * @brief 启用或禁用实时指令
   * @param enable [in] true: 启用实时指令；false: 禁用实时指令。
   * @note 开启实时指令模式，非实时指令的运动命令将会失败
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief  Enable or disable the realtime cmd
   * @param enable [in] true: enable the realtime cmd; false: disable the
   * realtime cmd.
   * @note When the realtime cmd mode is enabled, motion commands from
   * non-realtime commands will fail.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int enableRealtimeCmd(bool enable);

  /**
   *
   * \~Chinese
   *
   * @brief 执行关节空间实时伺服运动
   * @param target [in] 关节目标参数，包含关节角度和有效标志
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Execute real-time joint space servo motion
   * @param target [in] Target joint parameters containing joint angles and
   * validity flags
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int servoJoint(const RealtimeJointsParams& target);

  /**
   *
   * \~Chinese
   *
   * @brief 执行直线空间实时伺服运动（TCP轨迹）
   * @param target [in] 直线目标参数，包含位姿和有效标志
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Execute linear Cartesian space servo motion (TCP trajectory)
   * @param target [in] Target TCP parameters containing pose and validity
   * flags
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int servoLinear(const RealtimeTcpParams& target);

  /**
   *
   * \~Chinese
   *
   * @brief 执行关节空间速度控制运动
   * @param target [in] 关节目标参数，包含关节速度和有效标志
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Execute joint space velocity control motion
   * @param target [in] Target joint parameters containing joint velocities and
   * validity flags
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int speedJoint(const RealtimeJointsParams& target);

  /**
   *
   * \~Chinese
   *
   * @brief 执行直线空间速度控制运动（TCP速度）
   * @param target [in] 直线目标参数，包含TCP速度和有效标志
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Execute Cartesian space velocity control motion (TCP velocity)
   * @param target [in] Target TCP parameters containing TCP velocities and
   * validity flags
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int speedLinear(const RealtimeTcpParams& target);

  /**
   *
   * \~Chinese
   *
   * @brief 设置机器人控制策略
   * @param policy [in] 控制策略，FULL_BODY 或 SINGLE_ARM
   * @details 控制策略只会影响笛卡尔空间运动，关节运动不受影响
   *        - FULL_BODY: 全身控制策略，躯干可能随左右臂笛卡尔运动而运动
   *        - SINGLE_ARM: 单臂控制策略，只能进行左右臂的笛卡尔运动
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set the robot control policy
   * @param policy [in] Control policy to set (FULL_BODY or SINGLE_ARM)
   * @details control policy only affects Cartesian space motion of the body,
   * while joint motion is not affected.
   *        - FULL_BODY: full-body control policy, the body may move in
   * Cartesian space while moving the arms.
   *        - SINGLE_ARM: single-arm control policy, only the left and right
   * arms
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setControlPolicy(const ControlPolicy& policy);

  /**
   *
   * \~Chinese
   *
   * @brief 获取机器人当前控制策略
   * @param policy [out] 控制策略
   * @details 控制策略只会影响笛卡尔空间运动，关节运动不受影响
   *        - FULL_BODY: 全身控制策略，躯干可能随左右臂笛卡尔运动而运动
   *        - SINGLE_ARM: 单臂控制策略，只能进行左右臂的笛卡尔运动
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get the robot current control policy
   * @param policy [out] Reference to store the current control policy
   * @details control policy only affects Cartesian space motion of the body,
   * while joint motion is not affected.
   *        - FULL_BODY: full-body control policy, the body may move in
   * Cartesian space while moving the arms.
   *        - SINGLE_ARM: single-arm control policy, only the left and right
   * arms
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getControlPolicy(ControlPolicy& policy);

  /**
   *
   * \~Chinese
   *
   * @brief 启用或禁用机器人安全模式
   * @details
   * 在安全模式下，可以将超过限位的关节恢复到正常范围，以确保操作安全。
   * @param mode [in] 安全模式状态，true 启用安全模式，false 禁用安全模式
   * @note 安全模式需要禁用实时指令才能生效
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Enable or disable robot safe mode
   * @details In safe mode, you can drive any joint beyond its limits back
   * towards the normal range to ensure operational safety.
   * @param mode [in] current safe mode status, true to enable safe mode, false
   * to disable safe mode
   * @note safe mode requires disabling realtime cmd to take effect
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setSafeMode(bool mode);

  /**
   *
   * \~Chinese
   *
   * @brief 获取机器人安全模式状态
   * @param mode [out] 安全模式状态
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get the current robot safe mode status
   * @param mode [out] Reference to store the current safe mode status
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getSafeMode(bool& mode);
};
}  // namespace h10w
}  // namespace humanoid
