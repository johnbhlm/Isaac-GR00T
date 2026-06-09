// control_brake.cpp

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include "h10-w/h10w_system.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 上半身抱闸控制示例 ===" << std::endl;
  H10wSystem system;

  std::cout << "正在进行上半身开启抱闸控制..." << std::endl;
  if (system.controlBrake(BrakeState::BRAKE_ON) == 0) {
    std::cout << "上半身开启抱闸控制成功" << std::endl;
  } else {
    std::cerr << "上半身开启抱闸控制失败" << std::endl;
  }

  std::this_thread::sleep_for(std::chrono::seconds(3));

  std::cout << "正在进行上半身关闭抱闸控制..." << std::endl;
  if (system.controlBrake(BrakeState::BRAKE_OFF) == 0) {
    std::cout << "上半身关闭抱闸控制成功" << std::endl;
  } else {
    std::cerr << "上半身关闭抱闸控制失败" << std::endl;
  }

  return 0;
}