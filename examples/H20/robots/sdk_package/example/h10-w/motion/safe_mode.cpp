// control_power.cpp

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include "h10-w/h10w_motion.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 上半身设置安全模式示例 ===" << std::endl;
  H10wMotion motion;

  std::cout << "正在进行上半身安全模式设置..." << std::endl;
  bool enable = true;
  if (motion.setSafeMode(true) == 0 && motion.getSafeMode(enable) == 0 &&
      enable == true) {
    std::cout << "上半身进入安全模式成功" << std::endl;
  } else {
    std::cerr << "上半身进入安全模式失败" << std::endl;
  }

  std::this_thread::sleep_for(std::chrono::seconds(3));

  if (motion.setSafeMode(false) == 0 && motion.getSafeMode(enable) == 0 &&
      enable == false) {
    std::cout << "上半身退出安全模式成功" << std::endl;
  } else {
    std::cerr << "上半身退出安全模式失败" << std::endl;
  }

  return 0;
}