// get_localization.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_chassis.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取定位信息示例 ===" << std::endl;
  H10wChassis chassis;
  float pos_x;
  float pos_y;
  bool pos_valid;

  if (chassis.getLocalization(pos_x, pos_y, pos_valid) == 0) {
    std::cout << "获取成功" << std::endl;
    std::cout << "    X 坐标=" << pos_x << "m, Y 坐标=" << pos_y
              << "m, 定位有效=" << pos_valid << std::endl;
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}
