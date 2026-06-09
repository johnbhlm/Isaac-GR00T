// set_cartesian_translation_max_vel.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置笛卡尔平移最大速度参数示例 ===" << std::endl;
  H10wParams params;

  // 设置笛卡尔平移最大速度参数
  CartTransMaxVel cartTransMaxVel = {
      {static_cast<uint32_t>(CartIndex::TORSO),
       0.5},  // 笛卡尔轴 TORSO: 最大平移速度=0.5 m/s
      {static_cast<uint32_t>(CartIndex::LEFT_ARM),
       0.3},  // 笛卡尔轴 LEFT: 最大平移速度=0.3 m/s
      {static_cast<uint32_t>(CartIndex::RIGHT_ARM), 0.4}
      // 笛卡尔轴 RIGHT: 最大平移速度=0.4 m/s
  };

  if (params.setCartTransMaxVel(cartTransMaxVel) == 0) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}