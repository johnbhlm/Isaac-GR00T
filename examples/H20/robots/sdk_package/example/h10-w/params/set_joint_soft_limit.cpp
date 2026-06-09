// set_joint_soft_limit.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置关节软限位参数示例 ===" << std::endl;
  H10wParams params;

  // 设置关节软限位参数
  JointLimit jointLimits = {
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1), 3.05,
       -3.05},  // 左臂关节1: 最大位置=3.05 rad, 最小位置=-3.05 rad
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT2), 1.05,
       -1.05},  // 左臂关节2: 最大位置=1.05 rad, 最小位置=-1.05 rad
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT3), 3.05,
       -3.05},  // 左臂关节3: 最大位置=3.05 rad, 最小位置=-3.05 rad
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT4), 1.09,
       0.08},  // 左臂关节4: 最大位置=1.09 rad, 最小位置=0.08 rad
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT5), 3.05, -3.05}
      // 左臂关节5: 最大位置=3.05 rad, 最小位置=-3.05 rad
  };

  if (params.setJointSoftLimit(jointLimits) == 0) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}