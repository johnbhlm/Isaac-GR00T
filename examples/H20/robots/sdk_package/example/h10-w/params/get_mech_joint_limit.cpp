// get_mech_joint_limit.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取关节的机械限位参数示例 ===" << std::endl;
  H10wParams params;
  JointLimit jointLimits;

  if (params.getMechJointLimit(jointLimits) == 0) {
    std::cout << "获取成功" << std::endl;

    for (const auto& limit : jointLimits) {
      const auto& [jointIndex, maxPos, minPos] = limit;
      std::cout << "    关节 " << jointIndex << ": "
                << "最大位置=" << std::fixed << std::setprecision(3) << maxPos
                << " rad, "
                << "最小位置=" << minPos << " rad" << std::endl;
    }
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}