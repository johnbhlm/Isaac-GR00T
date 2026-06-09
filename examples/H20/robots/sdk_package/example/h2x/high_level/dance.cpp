#include <iostream>

#include "h2x/h2x_high_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== h2x 执行舞蹈【1】示例 ===" << std::endl;
  H2xHighLevel high_level;

  int ret = high_level.DanceMode();
  if (ret == 0) {
    std::cout << "进入舞蹈模式成功" << std::endl;
  } else {
    std::cout << "进入舞蹈模式失败，错误码：" << ret << std::endl;
    return -1;
  }

  ret = high_level.Dance("DanceQingpingguo");
  if (ret == 0) {
    std::cout << "开始执行舞蹈 DanceQingpingguo 成功" << std::endl;
  } else {
    std::cout << "开始执行舞蹈 DanceQingpingguo 失败, 错误码：" << ret
              << std::endl;
    return -1;
  }
  return 0;
}