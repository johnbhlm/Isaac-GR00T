// calibrate_90deg_pos.cpp

#include <iostream>
#include "h10-w/h10w_system.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 关节90度位置标定示例 ===" << std::endl;
  H10wSystem system;

  int ret = system.calibrate90DegPosition(JointIndexValue::L_ARM_JOINT1);
  std::cout << "标定关节 " << static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1)
            << (ret == 0 ? " 成功" : " 失败") << std::endl;

  ret = system.saveJointParameters(JointIndexValue::L_ARM_JOINT1);
  std::cout << "保存关节 " << static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1)
            << (ret == 0 ? " 成功" : " 失败") << std::endl;

  return 0;
}