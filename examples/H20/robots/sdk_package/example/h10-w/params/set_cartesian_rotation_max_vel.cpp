// set_cartesian_rotation_max_vel.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"
#include "common/h10w_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置笛卡尔旋转最大速度参数示例 ===" << std::endl;
  H10wParams params;

  // 设置笛卡尔旋转最大速度参数
  CartRotaMaxVel cartRotaMaxVel = {
      {static_cast<uint32_t>(CartIndex::TORSO),
       0.8},  // 笛卡尔轴 TORSO: 最大旋转速度=0.8 rad/s
      {static_cast<uint32_t>(CartIndex::LEFT_ARM),
       0.6},  // 笛卡尔轴 LEFT_ARM: 最大旋转速度=0.6 rad/s
      {static_cast<uint32_t>(CartIndex::RIGHT_ARM), 0.7}
      // 笛卡尔轴 RIGHT_ARM: 最大旋转速度=0.7 rad/s
  };

  if (params.setCartRotaMaxVel(cartRotaMaxVel) == 0) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}