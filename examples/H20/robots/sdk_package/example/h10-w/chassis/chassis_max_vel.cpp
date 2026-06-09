// control_power.cpp

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include "h10-w/h10w_chassis.h"
#include "common/common_def.h"
#include "common/LogWrapper.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  LOG_INFO("=== 底盘获取设置最大速度 ===");
  H10wChassis chassis;
  float linear_velocity, angular_velocity;
  int ret = chassis.getChassisMaxVel(linear_velocity, angular_velocity);
  if (ret < 0) {
    LOG_ERROR("Get chassis max velocity failed.")
    return 0;
  } else {
    LOG_INFO(
        "Get chassis max velocity successed. linear velocity:%f, angular "
        "velocity:%f.",
        linear_velocity, angular_velocity)
  }
  ret = chassis.setChassisMaxVel(linear_velocity, angular_velocity);
  if (ret < 0) {
    LOG_ERROR("Set chassis max velocity failed.")
    return 0;
  } else {
    LOG_INFO("Set chassis max velocity successed.")
  }

  return 0;
}