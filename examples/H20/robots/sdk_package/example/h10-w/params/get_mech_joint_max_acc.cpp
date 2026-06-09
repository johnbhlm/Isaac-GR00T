// get_mech_joint_max_acc.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取关节的机械最大加速度参数示例 ===" << std::endl;
  H10wParams params;
  JointMaxAcc jointMaxAcc;

  if (params.getMechJointMaxAcc(jointMaxAcc) == 0) {
    std::cout << "获取成功" << std::endl;

    for (const auto& acc : jointMaxAcc) {
      const auto& [jointIndex, maxAcc] = acc;
      std::cout << "    关节 " << jointIndex << ": "
                << "最大加速度=" << std::fixed << std::setprecision(3) << maxAcc
                << " rad/s²" << std::endl;
    }
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}