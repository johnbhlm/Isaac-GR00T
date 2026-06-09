// get_joint_max_vel.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取关节最大速度参数示例 ===" << std::endl;
  H10wParams params;
  JointMaxVel jointMaxVel;

  if (params.getJointMaxVel(jointMaxVel) == 0) {
    std::cout << "获取成功" << std::endl;

    for (const auto& vel : jointMaxVel) {
      const auto& [jointIndex, maxVel] = vel;
      std::cout << "    关节 " << jointIndex << ": "
                << "最大速度=" << std::fixed << std::setprecision(3) << maxVel
                << " rad/s" << std::endl;
    }
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}