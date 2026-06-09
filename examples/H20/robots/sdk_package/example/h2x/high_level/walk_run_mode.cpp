#include <iostream>

#include "h2x/h2x_high_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== h2x 进入走跑模式示例 ===" << std::endl;
  H2xHighLevel high_level;

  int ret = high_level.WalkRunMode();
  if (ret == 0) {
    std::cout << "进入走跑模式请求成功" << std::endl;
  } else {
    std::cout << "进入走跑模式请求失败, 错误码：" << ret << std::endl;
    return -1;
  }

  ret = high_level.waitRunning(5000);
  if (ret == 0) {
    std::cout << "模式切换成功" << std::endl;
  } else {
    std::cout << "模式切换失败, 错误码：" << ret << std::endl;
    return -1;
  }
  return 0;
}