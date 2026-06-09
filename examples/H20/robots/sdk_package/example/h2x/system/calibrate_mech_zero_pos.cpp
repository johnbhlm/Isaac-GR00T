// calibrate_mech_zero_pos.cpp

#include <iostream>
#include "h2x/h2x_system.h"
#include "common/h2x_def.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== 关节机械零位标定示例 ===" << std::endl;
  H2xSystem system;
  const int joint_index = JointIndexValue::L_HIP_PITCH;

  int ret = system.calibrateMechanicalZeroPosition(joint_index);
  std::cout << "标定关节 " << joint_index << (ret == 0 ? " 成功" : " 失败")
            << std::endl;

  ret = system.saveJointParameters(joint_index);
  std::cout << "保存关节 " << joint_index << (ret == 0 ? " 成功" : " 失败")
            << std::endl;

  return 0;
}
