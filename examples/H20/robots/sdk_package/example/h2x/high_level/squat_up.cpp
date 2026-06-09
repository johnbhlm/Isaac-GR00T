#include <iostream>

#include "h2x/h2x_high_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== h2x 蹲起示例 ===" << std::endl;
  H2xHighLevel high_level;

  int ret = high_level.SquatUp();
  if (ret == 0) {
    std::cout << "成功蹲起" << std::endl;
  } else {
    std::cout << "蹲起失败, 错误码：" << ret << std::endl;
    return -1;
  }
  return 0;
}