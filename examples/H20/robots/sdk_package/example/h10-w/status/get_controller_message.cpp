// get_controller_message.cpp

#include <iostream>
#include <iomanip>
#include <bitset>
#include "h10-w/h10w_status.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取机器人当前控制器状态信息示例 ===" << std::endl;

  H10wStatus status;
  ControllerMessageParams controllerMessage;

  int result = status.getControllerMessage(controllerMessage);
  if (result != 0) {
    std::cerr << "获取控制器信息失败，错误码: " << result << std::endl;
    return -1;
  }

  std::cout << "\n=== 控制器状态信息 ===" << std::endl;

  // 控制器启用状态
  std::cout << "控制器启用状态: ";
  if (controllerMessage.controller_enabled_state == 0) {
    std::cout << "未启用" << std::endl;
  } else if (controllerMessage.controller_enabled_state == 1) {
    std::cout << "已启用" << std::endl;
  } else {
    std::cout << "未知状态 ("
              << static_cast<int>(controllerMessage.controller_enabled_state)
              << ")" << std::endl;
  }

  // 电源状态
  std::cout << "机器人电源状态: ";
  if (controllerMessage.power_state == 0) {
    std::cout << "上电状态" << std::endl;
  } else if (controllerMessage.power_state == 1) {
    std::cout << "下电状态" << std::endl;
  } else {
    std::cout << "未知状态 (" << static_cast<int>(controllerMessage.power_state)
              << ")" << std::endl;
  }

  // 抱闸状态
  std::cout << "抱闸状态 (32位): "
            << std::bitset<32>(controllerMessage.brake_state) << std::endl;
  std::cout << "抱闸状态详细解析:" << std::endl;

  // 解析各关节抱闸状态
  std::cout << "  关节抱闸状态:" << std::endl;
  for (int i = 0; i < 18; i++) {  // Bits 0-17 为有效位
    bool brake_engaged = (controllerMessage.brake_state >> i) & 0x1;
    std::string joint_name;
    if (i < 7) {
      joint_name = "L_JOINT_" + std::to_string(i + 1);
    } else if (i < 14) {
      joint_name = "R_JOINT_" + std::to_string(i - 6);
    } else if (i == 14) {
      joint_name = "HEAD_PITCH";
    } else if (i == 15) {
      joint_name = "HEAD_YAW";
    } else if (i == 16) {
      joint_name = "ELEVATOR_MOTOR";
    } else if (i == 17) {
      joint_name = "MOBILE_BASE";
    } else {
      joint_name = "UNKNOWN_JOINT_" + std::to_string(i);
    }
    std::cout << "    " << std::left << std::setw(16) << joint_name << ": "
              << (brake_engaged ? "抱闸开启" : "抱闸关闭") << std::endl;
  }

  std::cout << "\n=== 状态信息获取完成 ===" << std::endl;
  return 0;
}