// get_chassis_speed.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_chassis.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取底盘速度示例 ===" << std::endl;
  H10wChassis chassis;
  float linear_velocity;
  float angular_velocity;

  if (chassis.getChassisSpeed(linear_velocity, angular_velocity) == 0) {
    std::cout << "获取成功" << std::endl;
    std::cout << "    线速度=" << linear_velocity << "m/s, 角速度="
              << angular_velocity << "rad/s" << std::endl;
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}
