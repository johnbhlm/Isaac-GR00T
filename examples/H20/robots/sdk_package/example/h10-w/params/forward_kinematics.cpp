// set_tcp_payload.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 运动学正解示例 ===" << std::endl;
  H10wParams params;

  // 获取 TCP 1, 2, 3 的坐标
  std::vector<int> type = {1, 2, 3};
  // 设置关节角
  const std::vector<double> joint_angles = {
      2.29544,  1.2858,  -0.582269,   0,           -0.676624, 0.772921,
      2.51774,  -2.4926, 1.5708,      0.000874287, 0,         1.47373,
      0.832474, -3.123,  0.000406279, 0.000406509, 0.319515};
  std::vector<TcpPoseParams> tcpPose;
  if (!params.forwardKinematics(type, joint_angles, tcpPose)) {
    std::cout << "计算成功" << std::endl;
    for (const auto& [type, pose] : tcpPose) {
      std::cout << "    TCP " << (int)type << ":";
      for (int i = 0; i < 6; i++) {
        std::cout << " " << pose[i];
      }
      std::cout << std::endl;
    }
  } else {
    std::cout << "计算失败" << std::endl;
    return -1;
  }
  return 0;
}
