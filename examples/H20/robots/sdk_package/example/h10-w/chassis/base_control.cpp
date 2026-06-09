// base_control.cpp

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
  LOG_INFO("=== 底盘抱闸控制 ===");
  H10wChassis chassis;
  uint32_t control_word = 1;
  int ret = chassis.baseControl(control_word);
  if (ret != 0) {
    LOG_ERROR("底盘抱闸控制打开失败。");
    return 0;
  }
  LOG_INFO("底盘抱闸控制打开成功。");

  control_word = 0;
  ret = chassis.baseControl(control_word);
  if (ret != 0) {
    LOG_ERROR("底盘抱闸控制关闭失败。");
    return 0;
  }
  LOG_INFO("底盘抱闸控制关闭成功。");

  return 0;
}