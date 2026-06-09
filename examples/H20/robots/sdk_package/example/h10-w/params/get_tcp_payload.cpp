// get_tcp_payload.cpp

#include <iostream>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取 TCP 载荷参数示例 ===" << std::endl;
  H10wParams params;
  TcpPayloadParams tcpPayloadParams = {
      // 留空则返回全部 TCP 载荷参数
      {1, {}},  // 获取左臂 TCP 载荷参数
      {2, {}}   // 获取右臂 TCP 载荷参数
  };

  if (!params.getTcpPayload(tcpPayloadParams)) {
    std::cout << "获取成功" << std::endl;

    for (const auto& [index, payload] : tcpPayloadParams) {
      std::cout << "    TCP " << index << ": ";
      std::copy(payload.begin(), payload.end(),
                std::ostream_iterator<double>(std::cout, " "));
      std::cout << std::endl;
    }
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}
