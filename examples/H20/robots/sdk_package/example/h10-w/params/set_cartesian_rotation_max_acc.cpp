// set_cartesian_rotation_max_acc.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置笛卡尔旋转最大加速度参数示例 ===" << std::endl;
  H10wParams params;

  // 设置笛卡尔旋转最大加速度参数
  CartRotaMaxAcc cartRotaMaxAcc = {
      {static_cast<uint32_t>(CartIndex::TORSO),
       1.5},  // 笛卡尔轴 TORSO: 最大旋转加速度=1.5 rad/s²
      {static_cast<uint32_t>(CartIndex::LEFT_ARM),
       1.2},  // 笛卡尔轴 LEFT_ARM: 最大旋转加速度=1.2 rad/s²
      {static_cast<uint32_t>(CartIndex::RIGHT_ARM), 1.8}
      // 笛卡尔轴 RIGHT_ARM: 最大旋转加速度=1.8 rad/s²
  };

  if (params.setCartRotaMaxAcc(cartRotaMaxAcc) == 0) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}