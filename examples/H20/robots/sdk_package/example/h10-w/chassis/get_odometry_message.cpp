// get_odometry_message.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_chassis.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取里程计信息示例 ===" << std::endl;
  H10wChassis chassis;
  int cur_time;
  int cur_mileage;

  if (chassis.getOdometryMessage(cur_time, cur_mileage) == 0) {
    std::cout << "获取成功" << std::endl;
    std::cout << "    累计运行时间=" << cur_time << "s, 累计里程="
              << cur_mileage << "m" << std::endl;
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}
