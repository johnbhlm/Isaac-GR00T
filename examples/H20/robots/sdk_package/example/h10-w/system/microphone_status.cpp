// microphone_status.cpp

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include "HumanoidSdkDef.h"
#include "h10-w/h10w_system.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 麦克风状态设置与获取示例 ===" << std::endl;
  H10wSystem system;

  std::cout << "正在设置麦克风状态..." << std::endl;
  MicrophoneStatus status;
  status.enable = false;
  status.volume = 50;
  if (system.setMicrophone(status) == 0) {
    std::cout << "麦克风状态设置成功" << std::endl;
  } else {
    std::cerr << "麦克风状态设置失败" << std::endl;
  }

  std::this_thread::sleep_for(std::chrono::seconds(3));

  std::cout << "正在获取麦克风状态..." << std::endl;
  if (system.getMicrophone(status) == 0) {
    std::cout << "麦克风使能状态: " << (status.enable ? "启用" : "禁用")
              << std::endl;
    std::cout << "麦克风音量: " << status.volume << std::endl;
    std::cout << "麦克风状态获取成功" << std::endl;
  } else {
    std::cerr << "麦克风状态获取失败" << std::endl;
  }

  return 0;
}