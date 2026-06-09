// set_tcp_offset.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置 TCP 偏移量示例 ===" << std::endl;
  H10wParams params;

  // 设置 TCP 偏移量
  TcpOffsetParams tcpOffsetParams = {
      {1, {0.1, 0.2, 0.3, 0.4, 0.5, 0.6}},  // 设置左臂 TCP 偏移量参数
      {2, {0.2, 0.3, 0.4, 0.5, 0.6, 0.7}}   // 设置右臂 TCP 偏移量参数
  };

  if (!params.setTcpOffset(tcpOffsetParams)) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}
