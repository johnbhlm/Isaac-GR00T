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
  std::cout << "=== 上半身控制器使能示例 ===" << std::endl;
  H10wSystem system;

  std::cout << "正在进行上半身使能控制..." << std::endl;
  bool enable = true;
  if (system.enableController(false) == 0 &&
      system.isControllerEnabled(enable) == 0 && enable == false) {
    std::cout << "上半身禁用使能控制成功" << std::endl;
  } else {
    std::cerr << "上半身禁用使能控制失败" << std::endl;
  }

  std::this_thread::sleep_for(std::chrono::seconds(3));

  if (system.enableController(true) == 0 &&
      system.isControllerEnabled(enable) == 0 && enable == true) {
    std::cout << "上半身启用使能控制成功" << std::endl;
  } else {
    std::cerr << "上半身启用使能控制失败" << std::endl;
  }

  return 0;
}