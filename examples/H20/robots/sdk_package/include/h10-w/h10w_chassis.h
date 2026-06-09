#pragma once

#include <cstdint>
#include <memory>
#include <tuple>
#include <vector>
#include "HumanoidSdkDef.h"
#include "common/common_def.h"

namespace humanoid {
namespace h10w {
/**
 * \~Chinese
 * @brief H10w 底盘接口
 * \~English
 * @brief H10w chassis interface
 */
class HUMANOIDSDK_CLASS H10wChassis {
 public:
  H10wChassis();
  ~H10wChassis();

  /**
   *
   * \~Chinese
   *
   * @brief 底盘速度控制
   * @param linear_velocity [in] 底盘线速度，单位：m/s
   * @param angular_velocity [in] 底盘角速度，单位：rad/s
   * @param lifetime [in] 命令有效时间，单位：s
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Execute chassis velocity control
   * @param linear_velocity [in] Chassis linear velocity in m/s
   * @param angular_velocity [in] Chassis angular velocity in rad/s
   * @param lifetime [in] Command lifetime
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int speedChassis(float linear_velocity, float angular_velocity,
                   float lifetime);

  /**
   *
   * \~Chinese
   *
   * @brief 获取底盘最大速度
   * @param linear_velocity [out] 底盘最大线速度，单位：m/s
   * @param angular_velocity [out] 底盘最大角速度，单位：rad/s
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get chassis max velocity
   * @param linear_velocity [out] Chassis max linear velocity in m/s
   * @param angular_velocity [out] Chassis max angular velocity in rad/s
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int getChassisMaxVel(float& linear_velocity, float& angular_velocity);

  /**
   *
   * \~Chinese
   *
   * @brief 设置底盘最大速度
   * @param linear_velocity [in] 底盘最大线速度，单位：m/s
   * @param angular_velocity [in] 底盘最大角速度，单位：rad/s
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set chassis max velocity
   * @param linear_velocity [in] Chassis max linear velocity in m/s
   * @param angular_velocity [in] Chassis max angular velocity in rad/s
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int setChassisMaxVel(float linear_velocity, float angular_velocity);

  /**
   *
   * \~Chinese
   *
   * @brief 底盘抱闸控制
   * @param control_word [in] 控制字。bit0 = 0：disable servo, bit0 = 1:enable
   * servo。
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Chassis brake control
   * @param control_word [in] Control word. bit0 = 0: disable servo, bit0 =
   * 1:enable servo.
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int baseControl(int32_t control_word);

  /**
   *
   * \~Chinese
   *
   * @brief 获取底盘速度
   * @param linear_velocity [out] 底盘线速度，单位：m/s
   * @param angular_velocity [out] 底盘角速度，单位：rad/s
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get chassis velocity
   * @param linear_velocity [out] Chassis linear velocity in m/s
   * @param angular_velocity [out] Chassis angular velocity in rad/s
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int getChassisSpeed(float& linear_velocity, float& angular_velocity);

  /**
   *
   * \~Chinese
   *
   * @brief
   * 获取里程计信息，机器人相对于参考点的位置变化的信息，包括累计运行时间和累计里程
   * @param cur_time [out] 累计运行时间，单位：s
   * @param cur_mileage [out] 累计里程，单位：m
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get odometry message, which contains the information of the robot's
   * position relative to the reference point, including the accumulated running
   * time and accumulated mileage
   * @param cur_time [out] Accumulated time in s
   * @param cur_mileage [out] Accumulated_mileage in m
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int getOdometryMessage(int& cur_time, int& cur_mileage);

  /**
   *
   * \~Chinese
   *
   * @brief 获取定位信息
   * @param pos_x [out] X 坐标，单位：m
   * @param pos_y [out] Y 坐标，单位：m
   * @param pos_valid [out] 定位是否有效
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get Localization
   * @param pos_x [out] X coordinate m
   * @param pos_y [out] Y coordinate m
   * @param pos_valid [out] whether position is valid
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int getLocalization(float& pos_x, float& pos_y, bool& pos_valid);

  /**
   *
   * \~Chinese
   *
   * @brief 设置定位信息
   * @param pos_x [in] X 坐标，单位：m
   * @param pos_y [in] Y 坐标，单位：m
   * @param pos_valid [in] 定位是否有效
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set Localization
   * @param pos_x [in] X coordinate m
   * @param pos_y [in] Y coordinate m
   * @param pos_valid [in] position is valid or not
   * @return int
   *         - 0: Success;
   *         - other: Error Code;
   */
  int setLocalization(float pos_x, float pos_y, bool pos_valid);
};
}  // namespace h10w
}  // namespace humanoid
