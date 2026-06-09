// get_tcp_offset.cpp

#include <iostream>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 获取 TCP 偏移量示例 ===" << std::endl;
  H10wParams params;
  TcpOffsetParams tcpOffsetParams = {
      // 留空则返回全部 TCP 偏移量
      {1, {}},  // 获取左臂 TCP 偏移量
      {2, {}}   // 获取右臂 TCP 偏移量
  };

  if (!params.getTcpOffset(tcpOffsetParams)) {
    std::cout << "获取成功" << std::endl;
    for (const auto& [index, offset] : tcpOffsetParams) {
      std::cout << "    TCP " << index << ": ";
      std::copy(offset.begin(), offset.end(),
                std::ostream_iterator<double>(std::cout, " "));
      std::cout << std::endl;
    }
  } else {
    std::cout << "获取失败" << std::endl;
    return -1;
  }
  return 0;
}
