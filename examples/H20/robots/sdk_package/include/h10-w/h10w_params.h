#pragma once
// std include
#include <cstdint>
#include <memory>
// humanoid sdk include
#include "HumanoidSdkDef.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

namespace humanoid {
namespace h10w {

/**
 * \~Chinese
 * @brief H10w 参数接口
 * \~English
 * @brief H10w params interface
 */
class HUMANOIDSDK_CLASS H10wParams {
 public:
  H10wParams();
  ~H10wParams();
  H10wParams(const H10wParams&) = delete;
  H10wParams& operator=(const H10wParams&) = delete;

  /**
   *
   * \~Chinese
   *
   * @brief 获取关节软限位
   * @param jointLimitList [out]关节软限位
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get joint soft limits
   * @param jointLimitList [out] Joint soft limits
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getJointSoftLimit(JointLimit& jointLimitList);

  /**
   *
   * \~Chinese
   *
   * @brief 获取关节最大速度
   * @param jointMaxVelList [out] 关节最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get joint maximum velocities
   * @param jointMaxVelList [out] Joint maximum velocities
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getJointMaxVel(JointMaxVel& jointMaxVelList);

  /**
   *
   * \~Chinese
   *
   * @brief 获取关节最大加速度
   * @param jointMaxAccList [out] 关节最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get joint maximum accelerations
   * @param jointMaxAccList [out] Joint maximum accelerations
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getJointMaxAcc(JointMaxAcc& jointMaxAccList);

  /**
   *
   * \~Chinese
   *
   * @brief 获取笛卡尔平移最大速度
   * @param cartTransMaxVelList [out] 笛卡尔平移最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get Cartesian translation maximum velocities
   * @param cartTransMaxVelList [out] Cartesian translation maximum velocities
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getCartTransMaxVel(CartTransMaxVel& cartTransMaxVelList);

  /**
   *
   * \~Chinese
   *
   * @brief 获取笛卡尔平移最大加速度
   * @param cartTransMaxAccList [out] 笛卡尔平移最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get Cartesian translation maximum accelerations
   * @param cartTransMaxAccList [out] Cartesian translation maximum
   * accelerations
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getCartTransMaxAcc(CartTransMaxAcc& cartTransMaxAccList);

  /**
   *
   * \~Chinese
   *
   * @brief 获取笛卡尔旋转最大速度
   * @param cartRotaMaxVelList [out] 笛卡尔旋转最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get Cartesian rotation maximum velocities
   * @param cartRotaMaxVelList [out] Cartesian rotation maximum velocities
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getCartRotaMaxVel(CartRotaMaxVel& cartRotaMaxVelList);

  /**
   *
   * \~Chinese
   *
   * @brief 获取笛卡尔旋转最大加速度
   * @param cartRotaMaxAccList [out] 笛卡尔旋转最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get Cartesian rotation maximum accelerations
   * @param cartRotaMaxAccList [out] Cartesian rotation maximum accelerations
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getCartRotaMaxAcc(CartRotaMaxAcc& cartRotaMaxAccList);

  /**
   *
   * \~Chinese
   *
   * @brief 获取TCP偏移参数
   * @param tcpOffsetParamsList [out] TCP偏移参数
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get tcp offset
   * @param tcpOffsetParamsList [out] Tcp offset
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getTcpOffset(TcpOffsetParams& tcpOffsetParamsList);

  /**
   *
   * \~Chinese
   *
   * @brief 获取TCP负载参数
   * @param tcpPayloadParamsList [out] TCP负载参数
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get tcp payload
   * @param tcpPayloadParamsList [out] Tcp payload
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getTcpPayload(TcpPayloadParams& tcpPayloadParamsList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置关节软限位
   * @param jointLimitList [in] 关节软限位
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set joint soft limits
   * @param jointLimitList [in]  Joint soft limits
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setJointSoftLimit(const JointLimit& jointLimitList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置关节最大速度
   * @param jointMaxVelList [in] 关节最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set joint maximum velocities
   * @param jointMaxVelList [in] Joint maximum velocities
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setJointMaxVel(const JointMaxVel& jointMaxVelList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置关节最大加速度
   * @param jointMaxAccList [in] 关节最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set joint maximum accelerations
   * @param jointMaxAccList [in] Joint maximum accelerations
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setJointMaxAcc(const JointMaxAcc& jointMaxAccList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置笛卡尔平移最大速度
   * @param cartTransMaxVelList [in] 笛卡尔平移最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set Cartesian translation maximum velocities
   * @param cartTransMaxVelList [in] Cartesian translation maximum velocities
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setCartTransMaxVel(const CartTransMaxVel& cartTransMaxVelList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置笛卡尔平移最大加速度
   * @param cartTransMaxAccList [in] 笛卡尔平移最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set Cartesian translation maximum accelerations
   * @param cartTransMaxAccList [in] Cartesian translation maximum
   * accelerations
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setCartTransMaxAcc(const CartTransMaxAcc& cartTransMaxAccList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置笛卡尔旋转最大速度
   * @param cartRotaMaxVelList [in] 笛卡尔旋转最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set Cartesian rotation maximum velocities
   * @param cartRotaMaxVelList [in] Cartesian rotation maximum velocities
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setCartRotaMaxVel(const CartRotaMaxVel& cartRotaMaxVelList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置笛卡尔旋转最大加速度
   * @param cartRotaMaxAccList [in] 笛卡尔旋转最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set Cartesian rotation maximum accelerations
   * @param cartRotaMaxAccList [in] Cartesian rotation maximum accelerations
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setCartRotaMaxAcc(const CartRotaMaxAcc& cartRotaMaxAccList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置TCP偏移参数
   * @param tcpOffsetParamsList [in] TCP偏移参数
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set tcp offset
   * @param tcpOffsetParamsList Tcp offset
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setTcpOffset(const TcpOffsetParams& tcpOffsetParamsList);

  /**
   *
   * \~Chinese
   *
   * @brief 设置TCP负载参数
   * @param tcpPayloadParamsList [in] TCP负载参数
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Set tcp payload
   * @param tcpPayloadParamsList Tcp payload
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setTcpPayload(const TcpPayloadParams& tcpPayloadParamsList);

  // get mechanical param function

  /**
   *
   * \~Chinese
   *
   * @brief 获取关节机械限位，机械参数不可以被用户修改
   * @param jointLimitList [out] 关节机械限位
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   *
   * @brief Get mechanical joint soft limits, mechanical parameters cannot be
   * modified by the user
   * @param jointLimitList [out] Mechanical joint limits
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int getMechJointLimit(JointLimit& jointLimitList);

  /**
   * \~Chinese
   * @brief 获取机械关节最大速度，机械参数不可以被用户修改
   * @param jointMaxVelList [out] 机械关节最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get mechanical joint maximum velocities, mechanical parameters
   * cannot be modified by the user
   * @param jointMaxVelList [out] Mechanical joint maximum velocities
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int getMechJointMaxVel(JointMaxVel& jointMaxVelList);

  /**
   * \~Chinese
   * @brief 获取机械关节最大加速度，机械参数不可以被用户修改
   * @param jointMaxAccList [out] 机械关节最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get mechanical joint maximum accelerations, mechanical parameters
   * cannot be modified by the user
   * @param jointMaxAccList [out] Mechanical joint maximum accelerations
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int getMechJointMaxAcc(JointMaxAcc& jointMaxAccList);

  /**
   * \~Chinese
   * @brief 获取机械笛卡尔平移最大速度，机械参数不可以被用户修改
   * @param cartMaxVelList [out] 机械笛卡尔平移最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get mechanical Cartesian translation maximum velocities, mechanical
   * parameters cannot be modified by the user
   * @param cartMaxVelList [out] Mechanical Cartesian translation maximum
   * velocities
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int getMechCartTransMaxVel(CartTransMaxVel& cartMaxVelList);

  /**
   * \~Chinese
   * @brief 获取机械笛卡尔平移最大加速度，机械参数不可以被用户修改
   * @param cartMaxAccList [out] 机械笛卡尔平移最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get mechanical Cartesian translation maximum accelerations,
   * mechanical parameters cannot be modified by the user
   * @param cartMaxAccList [out] Mechanical Cartesian translation maximum
   * accelerations
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int getMechCartTransMaxAcc(CartTransMaxAcc& cartMaxAccList);

  /**
   * \~Chinese
   * @brief 获取机械笛卡尔旋转最大速度，机械参数不可以被用户修改
   * @param cartMaxVelList [out] 机械笛卡尔旋转最大速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get mechanical Cartesian rotation maximum velocities, mechanical
   * parameters cannot be modified by the user
   * @param cartMaxVelList [out] Mechanical Cartesian rotation maximum
   * velocities
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int getMechCartRotaMaxVel(CartRotaMaxVel& cartMaxVelList);

  /**
   * \~Chinese
   * @brief 获取机械笛卡尔旋转最大加速度，机械参数不可以被用户修改
   * @param cartMaxAccList [out] 机械笛卡尔旋转最大加速度
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get mechanical Cartesian rotation maximum accelerations, mechanical
   * parameters cannot be modified by the user
   * @param cartMaxAccList [out] Mechanical Cartesian rotation maximum
   * accelerations
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int getMechCartRotMaxAcc(CartRotaMaxAcc& cartMaxAccList);

  /**
   * \~Chinese
   * @brief 设置关节控制参数
   * @param jointControlParamsList [in] 关节控制参数列表
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Set joint control parameters
   * @param jointControlParamsList [in] Joint control parameters list
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setJointControlParams(const JointControlParams& jointControlParamsList);

  /**
   * \~Chinese
   * @brief 设置笛卡尔控制参数
   * @param cartesianControlParamsList [in] 笛卡尔控制参数列表
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Set cartesian control parameters
   * @param cartesianControlParamsList [in] Cartesian control parameters list
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int setCartesianControlParams(
      const CartesianControlParams& cartesianControlParamsList);

  /**
   * \~Chinese
   * @brief 获取关节控制参数
   * @param jointControlParamsList [out] 关节控制参数列表
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get joint control parameters
   * @param jointControlParamsList [out] Joint control parameters list
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getJointControlParams(JointControlParams& jointControlParamsList);

  /**
   * \~Chinese
   * @brief 获取笛卡尔控制参数
   * @param cartesianControlParamsList [out] 笛卡尔控制参数列表
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Get cartesian control parameters
   * @param cartesianControlParamsList [out] Cartesian control parameters list
   * @return int
   *         - 0: Success;
   *         - Other: Error code;
   */
  int getCartesianControlParams(
      CartesianControlParams& cartesianControlParamsList);

  /**
   * \~Chinese
   * @brief 运动学正解计算
   * @param [in] type 笛卡尔坐标系末端类型：1-left 2-right 3-torso
   * @param [in] joint_angles 全身关节角度
   * @param [out] pose TCP位姿
   * @return int
   *         - 0: 成功；
   *         - 其它: 错误码；
   * \~English
   * @brief Forward kinematics calculation
   * @param [in] type Tcp end type: 1-left 2-right 3-torso
   * @param [in] joint_angles Joint angles of whole body
   * @param [out] pose Tcp pose
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int forwardKinematics(const std::vector<int>& type,
                        const std::vector<double>& joint_angles,
                        std::vector<TcpPoseParams>& pose);

  /**
   * \~Chinese
   * @brief 运动学逆解计算
   * @param [in] pose TCP位姿
   * @param [in] reference_angles 参考关节角度，用于计算距离最近的逆解
   * @param [out] joint_angles 全身关节角度
   * @param [in] if_use_whole_body 是否根据全身关节角度计算末端位姿
   * @return int
   *         - 0: 成功；
   *         - 其他: 错误码；
   * \~English
   * @brief Inverse kinematics calculation
   * @param [in] pose Tcp pose
   * @param [in] reference_angles Reference joint positions‌，used for
   * calculating the inverse solution with the shortest distance
   * @param [out] joint_angles Joint angles of whole body
   * @param [in] if_use_whole_body Specifies whether the TCP pose is computed
   * using the full-body joints.
   * @return int
   *         - 0: Success;
   *         - other: Error code;
   */
  int inverseKinematics(const std::vector<TcpPoseParams>& pose,
                        const std::vector<double>& reference_angles,
                        std::vector<double>& joint_angles,
                        bool if_use_whole_body);
};
}  // namespace h10w
}  // namespace humanoid
