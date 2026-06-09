// get_error_message.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_status.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取机器人当前错误信息示例 ===" << std::endl;

  H10wStatus status;
  ErrorMessageParams errorMessage;

  int result = status.getErrorMessage(errorMessage);
  if (result != 0) {
    std::cerr << "获取机器人当前错误信息失败: " << std::endl;
    return -1;
  }
  std::cout << "错误码ID: " << errorMessage.id << std::endl;
  std::cout << "错误等级: " << static_cast<int>(errorMessage.level)
            << std::endl;
  std::cout << "错误模块: " << static_cast<int>(errorMessage.module)
            << std::endl;
  std::cout << "错误代码: " << errorMessage.error_code << std::endl;
  std::cout << "错误信息: " << errorMessage.msg << std::endl;
  return 0;
}