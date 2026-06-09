// set_localization.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_chassis.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置定位信息示例 ===" << std::endl;
  H10wChassis chassis;

  if (chassis.setLocalization(0.1, 0.2, true) == 0) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}
