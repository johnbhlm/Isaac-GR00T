#include <iostream>

#include "h2x/h2x_high_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== h2x 获取当前模式示例 ===" << std::endl;
  H2xHighLevel high_level;

  int robot_mode = 0;
  int ret = high_level.GetRobotMode(robot_mode);
  if (ret == 0) {
    std::cout << "获取当前模式请求成功，当前模式：" << robot_mode << std::endl;
  } else {
    std::cout << "获取当前模式请求失败，错误码：" << ret << std::endl;
    return -1;
  }

  return 0;
}