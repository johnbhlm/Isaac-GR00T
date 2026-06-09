// set_joint_max_vel.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置关节最大速度参数示例 ===" << std::endl;
  H10wParams params;

  // 设置关节最大速度参数
  JointMaxVel jointMaxVel = {
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1),
       1.0},  // 左臂关节1: 最大速度=1.0 rad/s
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT2),
       0.8},  // 左臂关节2: 最大速度=0.8 rad/s
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT3),
       1.2},  // 左臂关节3: 最大速度=1.2 rad/s
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT4),
       0.9},  // 左臂关节4: 最大速度=0.9 rad/s
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT5), 1.1}
      // 左臂关节5: 最大速度=1.1 rad/s
  };

  if (params.setJointMaxVel(jointMaxVel) == 0) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}