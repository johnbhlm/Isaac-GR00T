// set_joint_max_acc.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置关节最大加速度参数示例 ===" << std::endl;
  H10wParams params;

  // 设置关节最大加速度参数
  JointMaxAcc jointMaxAcc = {
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1),
       2.0},  // 左臂关节1: 最大加速度=2.0 rad/s²
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT2),
       1.5},  // 左臂关节2: 最大加速度=1.5 rad/s²
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT3),
       2.5},  // 左臂关节3: 最大加速度=2.5 rad/s²
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT4),
       1.8},  // 左臂关节4: 最大加速度=1.8 rad/s²
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT5), 2.2}
      // 左臂关节5: 最大加速度=2.2 rad/s²
  };

  if (params.setJointMaxAcc(jointMaxAcc) == 0) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}