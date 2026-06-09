// set_tcp_payload.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 设置 TCP 载荷示例 ===" << std::endl;
  H10wParams params;

  // 设置 TCP 载荷
  TcpPayloadParams tcpPayloadParams = {
      {1,
       {0.001, 0, 0, 0, 0.000001, 0.000001, 0.000001, 0, 0,
        0}},  // 设置左臂 TCP 载荷参数
      {2,
       {0.001, 0, 0, 0, 0.000001, 0.000001, 0.000001, 0, 0,
        0}}  // 设置右臂 TCP 载荷参数
  };

  if (!params.setTcpPayload(tcpPayloadParams)) {
    std::cout << "设置成功" << std::endl;
  } else {
    std::cout << "设置失败" << std::endl;
    return -1;
  }
  return 0;
}
