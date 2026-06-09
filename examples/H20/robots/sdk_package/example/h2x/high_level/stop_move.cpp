#include <iostream>

#include "h2x/h2x_high_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== h2x 停止运动示例 ===" << std::endl;
  H2xHighLevel high_level;

  int ret = high_level.StopMove();
  if (ret == 0) {
    std::cout << "成功进入停止运动模式" << std::endl;
  } else {
    std::cout << "进入停止运动模式失败, 错误码：" << ret << std::endl;
    return -1;
  }
  return 0;
}