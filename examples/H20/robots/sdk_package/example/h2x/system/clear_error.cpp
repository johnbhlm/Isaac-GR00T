// clear_error.cpp

#include <iostream>
#include <iomanip>
#include "h2x/h2x_system.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== 清除所有报错信息参数示例 ===" << std::endl;
  H2xSystem system;
  std::cout << "清除报错信息" << (system.clearError() == 0 ? "成功" : "失败")
            << std::endl;
  return 0;
}