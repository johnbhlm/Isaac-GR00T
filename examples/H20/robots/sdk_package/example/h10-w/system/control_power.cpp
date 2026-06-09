// control_power.cpp

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include "h10-w/h10w_system.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 上半身上电/下点控制及状态获取示例 ===" << std::endl;
  H10wSystem system;

  std::cout << "正在进行上半身上电控制..." << std::endl;
  if (system.controlPower(PowerState::POWER_ON) == 0) {
    std::cout << "上半身上电控制成功" << std::endl;
  } else {
    std::cerr << "上半身上电控制失败" << std::endl;
  }

  std::this_thread::sleep_for(std::chrono::milliseconds(50));

  std::cout << "正在获取上半身电源状态..." << std::endl;
  PowerState state;
  if (system.statusPower(state) == 0) {
    std::cout << "获取上半身电源状态："
              << (state == PowerState::POWER_ON ? "上电" : "下电") << std::endl;
  } else {
    std::cerr << "获取上半身电源状态失败" << std::endl;
  }

  std::this_thread::sleep_for(std::chrono::seconds(3));

  std::cout << "正在进行上半身下电控制..." << std::endl;
  if (system.controlPower(PowerState::POWER_OFF) == 0) {
    std::cout << "上半身下电控制成功" << std::endl;
  } else {
    std::cerr << "上半身下电控制失败" << std::endl;
  }

  std::this_thread::sleep_for(std::chrono::milliseconds(50));

  std::cout << "正在获取上半身电源状态..." << std::endl;
  PowerState state2;
  if (system.statusPower(state2) == 0) {
    std::cout << "获取上半身电源状态："
              << (state2 == PowerState::POWER_ON ? "上电" : "下电")
              << std::endl;
  } else {
    std::cerr << "获取上半身电源状态失败" << std::endl;
  }

  return 0;
}