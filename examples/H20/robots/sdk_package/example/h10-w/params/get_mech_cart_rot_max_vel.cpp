// get_mech_cart_rot_max_vel.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取笛卡尔的机械旋转最大速度参数示例 ===" << std::endl;
  H10wParams params;
  CartRotaMaxVel cartRotMaxVel;

  if (params.getMechCartRotaMaxVel(cartRotMaxVel) == 0) {
    std::cout << "获取成功" << std::endl;

    for (const auto& vel : cartRotMaxVel) {
      const auto& [cartIndex, maxVel] = vel;
      std::cout << "    笛卡尔轴 " << cartIndex << ": "
                << "最大旋转速度=" << std::fixed << std::setprecision(3)
                << maxVel << " rad/s" << std::endl;
    }
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}