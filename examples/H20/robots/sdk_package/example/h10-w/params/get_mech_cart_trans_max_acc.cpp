// get_mech_cart_trans_max_acc.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取笛卡尔的机械平移最大加速度参数示例 ===" << std::endl;
  H10wParams params;
  CartTransMaxAcc cartTransMaxAcc;

  if (params.getMechCartTransMaxAcc(cartTransMaxAcc) == 0) {
    std::cout << "获取成功" << std::endl;

    for (const auto& acc : cartTransMaxAcc) {
      const auto& [cartIndex, maxAcc] = acc;
      std::cout << "    笛卡尔轴 " << cartIndex << ": "
                << "最大平移加速度=" << std::fixed << std::setprecision(3)
                << maxAcc << " m/s²" << std::endl;
    }
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}