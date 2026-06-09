// set_cartesian_translation_max_acc.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置笛卡尔平移最大加速度参数示例 ===" << std::endl;
  H10wParams params;

  // 设置笛卡尔平移最大加速度参数
  CartTransMaxAcc cartTransMaxAcc = {
      {static_cast<uint32_t>(CartIndex::TORSO),
       0.65},  // 笛卡尔轴 TORSO: 最大平移加速度=0.65 m/s²
      {static_cast<uint32_t>(CartIndex::LEFT_ARM),
       0.8},  // 笛卡尔轴 LEFT: 最大平移加速度=0.8 m/s²
      {static_cast<uint32_t>(CartIndex::RIGHT_ARM), 0.65}
      // 笛卡尔轴 RIGHT: 最大平移加速度=0.65 m/s²
  };

  if (params.setCartTransMaxAcc(cartTransMaxAcc) == 0) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}