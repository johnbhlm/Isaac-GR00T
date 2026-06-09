// get_mech_cart_rot_max_acc.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取笛卡尔的机械旋转最大加速度参数示例 ===" << std::endl;
  H10wParams params;
  CartRotaMaxAcc cartRotMaxAcc;

  if (params.getMechCartRotMaxAcc(cartRotMaxAcc) == 0) {
    std::cout << "获取成功" << std::endl;

    for (const auto& acc : cartRotMaxAcc) {
      const auto& [cartIndex, maxAcc] = acc;
      std::cout << "    笛卡尔轴 " << cartIndex << ": "
                << "最大旋转加速度=" << std::fixed << std::setprecision(3)
                << maxAcc << " rad/s²" << std::endl;
    }
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}