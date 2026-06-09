#pragma once

#include <cstdint>
#include "HumanoidSdkDef.h"
#include "common/common_def.h"
#include "common/h2x_def.h"

namespace humanoid {
namespace h2x {
/**
 * \~Chinese
 * @brief H2x 机器人高级别控制接口类
 *
 * 该类提供了对 H2x
 * 机器人的高级别控制接口，包括模式切换、姿态控制和运动控制等功能。
 *
 * \~English
 * @brief H2x robot high-level control interface class
 *
 * This class provides a high-level control interface for the H2x robot,
 * including functions such as mode switching, posture control, and motion
 * control.
 */
class HUMANOIDSDK_CLASS H2xHighLevel {
 public:
  H2xHighLevel();
  ~H2xHighLevel();

  /**
   * \~Chinese
   * @brief 进入零力矩模式
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Enter zero-torque mode
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t ZeroTorqueMode();

  /**
   * \~Chinese
   * @brief 进入阻尼模式
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Enter damp mode
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t DampMode();

  /**
   * \~Chinese
   * @brief 进入锁定站立模式（非抗干扰）
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Enter lock stand mode
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t LockStandMode();

  /**
   * \~Chinese
   * @brief 进入走跑模式（抗干扰）
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Enter walk run mode
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t WalkRunMode();

  /**
   * \~Chinese
   * @brief 进入爬楼梯（盲走）模式
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Enter the stair climbing (blind walk) mode
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t ClimbStairsMode();

  /**
   * \~Chinese
   * @brief 进入舞蹈模式
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Enter dance mode
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t DanceMode();

  /**
   *
   * \~Chinese
   *
   * @brief 执行指定的舞蹈动作
   * @param dance_name [in] 舞蹈动作的名称
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Execute the specified dance action
   * @param dance_name [in] The name of the dance action
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int32_t Dance(std::string dance_name);

  /**
   * \~Chinese
   * @brief 机器人移动控制接口
   * @param vx 前后运动速度（矢状轴），向前为正。
   * @param vy 左右移动速度（冠状轴），向左为正。
   * @param vyaw 旋转角速度（横截面），逆时针为正。
   * @param height 机器人行走时，质心的高度。
   * @param continuous_move 是否持续运动，true为持续运动，否则仅移动1s。
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Robot motion control interface
   * @param vx Forward speed (vertical axis), forward is positive.
   * @param vy Side speed (lateral axis), left is positive.
   * @param vyaw Rotation speed (horizontal plane), clockwise is positive.
   * @param height Center of mass height during walking of robot.
   * @param continuous_move Whether to continue moving, true for continuous
   * movement, otherwise only move for 1s.
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t Move(double vx, double vy, double vyaw, double height,
               bool continuous_move);

  /**
   * \~Chinese
   * @brief 机器人停止运动接口
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief robot stop motion interface
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t StopMove();

  /**
   *
   * \~Chinese
   *
   * @brief 等待执行完成接口
   * @param timeout_ms [in] 超时时间（毫秒）
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Blocking wait until execution is complete
   * @param [in] timeout_ms Timeout in ms
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int waitRunning(const int timeout_ms = 1000 * 100);

  /**
   *
   * \~Chinese
   *
   * @brief 进入多地形行走模式
   * 在此模式下，可以在多种地形行走（带传感器），并保持平衡状态，例如爬楼、泡沫、木头条等。
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief enter multi-terrain walking mode
   * In this mode, the robot can walk on various terrains (with sensors) and
   * maintain balance, such as stair climbing, mud, and wooden steps.
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int32_t WalkOnTerrainMode();

  /**
   * \~Chinese
   * @brief 机器人从站立姿态平稳下蹲到蹲姿态接口
   * 执行条件：机器人处于站立状态，地面平坦且无障碍物；
   * 执行过程：
   * 1.初始为走跑模式；
   * 2.先切换至下蹲模型，执行下蹲动作；
   * 3.运动过程中保持抗干扰状态；
   * 执行完成：最终脚部保持刚度，其余关节切换为阻尼模式；
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief robot squat down interface
   * The robot smoothly squats down from a standing posture to a squatting
   * posture
   * Execution conditions: The robot is in a standing state, the ground
   * is flat and there are no obstacles;
   * Execution process:
   * 1. Initially in walk-run mode;
   * 2. First switch to the squat model and perform the squat action;
   * 3. Maintain anti-interference state during movement;
   * Execution completed: Finally, the feet maintain stiffness, and the other
   * joints
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t SquatDown();

  /**
   * \~Chinese
   * @brief 机器人从蹲姿平稳站起到站立姿态接口
   * 执行条件：机器人处于稳定蹲姿，周围无障碍物；
   * 执行过程：
   * 1.先切换为位置模式，移动至蹲姿初始位置；
   * 2.后切换为蹲起模型；
   * 3.移动过程中保持抗干扰状态；
   * 执行完成：机器人处于稳定站姿，并自动切换为走跑模式；
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief robot squat up interface
   * The robot smoothly stands up from a squatting posture to a standing posture
   * Execution conditions: The robot is in a stable squatting posture, there are
   * no obstacles around;
   * Execution process:
   * 1. First switch to position mode and move to the initial squatting
   * position;
   * 2. Then switch to the stand-up model;
   * 3. During movement, maintain anti-interference state;
   * Execution completed: The robot is in a stable standing posture, and it
   * automatically switches to walk-run mode;
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t SquatUp();

  /**
   * \~Chinese
   * @brief 机器人从站立姿态移动到坐姿态接口
   * 执行条件：机器人处于站立状态
   * 执行过程：位置控制执行坐下动作；
   * 执行完成：机器人上半身关节为阻尼模式，腰部关节、下半身锁定位置模式，保持稳定坐姿；
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief robot sit down interface
   * The robot moves from a standing posture to a sitting posture
   * Execution conditions: The robot is in a standing state
   * Execution process: Position control performs the sit-down action;
   * Execution completed: The upper body joint is in damping mode, the shoulder
   * joint and lower body are in locked position mode, maintaining a stable
   * sitting posture;
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t SitDown();

  /**
   * \~Chinese
   * @brief 机器人从躺姿移动到站立姿态接口
   * 执行条件：地面平坦且有足够空间，人为手动将姿势展开；
   * 执行过程：
   * 1.初始状态为阻尼模式，先通过位置控制将姿态调整至标准躺姿。
   * 2.从躺姿缓慢至蹲姿，位置控制非抗干扰；
   * 3.从蹲姿平稳站立，保持抗干扰状态；
   * 执行完成：机器人站立完成后保持平衡模式；
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief robot rise up interface
   * The robot moves from a lying posture to a standing posture
   * Execution conditions: The ground is flat and there is enough space, and the
   * posture is manually unfolded;
   * Execution process:
   * 1. The initial state is damping mode, and the posture is adjusted to a
   * standard lying posture through position control.
   * 2. Slowly rise from lying to standing posture, position control is not
   * anti-interference.
   * 3. Squat down smoothly and maintain anti-interference state.
   * Execution completed: The robot stands up smoothly and maintains balance
   * mode;
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t Rise();

  /**
   * \~Chinese
   * @brief 获取当前模式
   * @param[out] robotMode 当前模式
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get current mode
   * @param[out] robotMode robot mode
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t GetRobotMode(int32_t& robotMode);

  /**
   * \~Chinese
   * @brief 发送实时控制命令
   *
   * 向机器人发送实时控制命令，使用实时DDS消息进行通信。
   * 当前该接口主要用于 ClimbStairsMode 下的上半身实时控制。
   * `realtimeCmd.time` 表示本条目标的插补时长，单位为秒；例如 `0.1`
   * 表示控制器会在 100 ms 内平滑插补到目标。
   *
   * @param realtimeCmd [in] 实时控制命令结构体
   * @return int32_t
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Send realtime control command
   *
   * Send realtime control command to the robot using realtime DDS messages.
   * This interface is currently intended for upper-body realtime control in
   * `ClimbStairsMode`. `realtimeCmd.time` is the interpolation duration in
   * seconds. For example, `0.1` means the controller will blend to the target
   * within 100 ms.
   *
   * @param realtimeCmd [in] Realtime control command structure
   * @return int32_t
   *         - 0: Success;
   *         - other: Error Code;
   */
  int32_t realtimeMove(const RealtimeCmd& realtimeCmd);
};

}  // namespace h2x
}  // namespace humanoid
