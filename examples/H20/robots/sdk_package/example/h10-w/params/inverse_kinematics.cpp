// set_tcp_payload.cpp

#include <iostream>
#include <iterator>
#include <iomanip>
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 运动学逆解示例 ===" << std::endl;
  H10wParams params;

  // 设置 TCP 坐标
  std::vector<TcpPoseParams> pose = {
      {CartIndex::LEFT_ARM,
       {-0.037, 0.894, 0.502, -3.142, -0.001, 2.558}},  // 设置左臂 TCP 坐标
      {CartIndex::RIGHT_ARM,
       {-0.300, -0.820, 0.736, -0.000, 3.142, 2.356}}  // 设置右臂 TCP 坐标
  };
  std::vector<double> joint_angles;
  std::vector<double> reference_angles = {
      2.29544,  1.2858,  -0.582269,   0,           -0.676624, 0.772921,
      2.51774,  -2.4926, 1.5708,      0.000874287, 0,         1.47373,
      0.832474, -3.123,  0.000406279, 0.000406509, 0.319515};
  if (!params.inverseKinematics(pose, reference_angles, joint_angles, true)) {
    std::cout << "计算成功: " << std::endl;
    std::cout << "    关节角: ";
    std::copy(joint_angles.begin(), joint_angles.end(),
              std::ostream_iterator<double>(std::cout, " "));
    std::cout << std::endl;
  } else {
    std::cout << "计算失败" << std::endl;
    return -1;
  }
  return 0;
}
