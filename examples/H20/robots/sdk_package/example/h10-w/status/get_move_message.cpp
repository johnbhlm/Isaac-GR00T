// get_move_message.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_status.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取机器人当前运动状态信息示例 ===" << std::endl;

  H10wStatus status;
  MoveMessageParams moveMessage;

  int result = status.getMoveMessage(moveMessage);
  if (result != 0) {
    std::cerr << "获取运动信息失败，任务终止" << std::endl;
    return -1;
  }
  std::cout << "机器人当前状态：" << static_cast<int>(moveMessage.state)
            << std::endl;
  std::cout << "机器人当前位置：" << std::endl;
  for (auto& pos : moveMessage.position) {
    std::cout << std::fixed << std::setprecision(3) << pos << " ";
  }
  std::cout << std::endl;
  std::cout << "机器人当前速度：" << std::endl;
  for (auto& vel : moveMessage.velocity) {
    std::cout << std::fixed << std::setprecision(3) << vel << " ";
  }
  std::cout << std::endl;
  std::cout << "机器人当前TCP位姿：" << std::endl;
  for (auto& pose : moveMessage.tcp_pose) {
    std::cout << "TCP " << static_cast<int>(pose.type) << " ：" << std::endl;
    for (size_t i = 0; i < 6; i++) {
      std::cout << std::fixed << std::setprecision(2) << pose.pose[i] << " ";
    }
    std::cout << std::endl;
  }
  std::cout << "机器人当前执行任务：" << moveMessage.task_id << std::endl;
  return 0;
}