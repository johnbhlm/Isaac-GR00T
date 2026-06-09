// clear_error.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_system.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 清除所有报错信息参数示例 ===" << std::endl;
  H10wSystem system;
  std::cout << "清除报错信息" << (system.clearError() == 0 ? "成功" : "失败")
            << std::endl;
  return 0;
}