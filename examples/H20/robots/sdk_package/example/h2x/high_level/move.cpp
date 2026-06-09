#include <iostream>

#include "h2x/h2x_high_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== h2x 移动控制示例 ===" << std::endl;
  H2xHighLevel high_level;

  int ret = high_level.Move(0.5, 0.0, 0.0, 0.799, false);
  if (ret == 0) {
    std::cout << "移动控制成功" << std::endl;
  } else {
    std::cout << "移动控制失败, 错误码：" << ret << std::endl;
    return -1;
  }
  return 0;
}