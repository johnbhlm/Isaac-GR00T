// multi_joints_move.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_motion.h"
#include "common/common_def.h"
#include "h10-w/h10w_status.h"
#include "h10-w/h10w_system.h"
#include <algorithm>

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 多轴运动示例 ===" << std::endl;

  H10wMotion motion;
  H10wStatus status;
  H10wSystem system;
  MoveMessageParams moveMsg;

  int result = status.getMoveMessage(moveMsg);
  if (result != 0) {
    std::cerr << "Get move message failed." << std::endl;
    return -1;
  }
  bool leftArmNearZero =
      std::all_of(moveMsg.position.begin(), moveMsg.position.begin() + 7,
                  [](double value) { return value - 0.0 < 0.001; });
  if (!leftArmNearZero) {
    std::cerr << "To ensure safety, please zero the left arm." << std::endl;
    return -1;
  }

  result = system.controlPower(PowerState::POWER_ON);
  if (result != 0) {
    std::cerr << "上电失败" << std::endl;
    return -1;
  }
  result = system.clearError();
  if (result != 0) {
    std::cerr << "清错失败" << std::endl;
    return -1;
  }
  result = system.controlBrake(BrakeState::BRAKE_ON);
  if (result != 0) {
    std::cerr << "打开抱闸失败" << std::endl;
    return -1;
  }

  std::vector<JointTarget> jointTargets = {
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT6),
       1.57},  //  左臂6关节运动至 1.57 rad 位置
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT7), 1.57}
      // 左臂7关节运动至 1.57 rad 位置
  };

  if (motion.requestMultiJointsMove(jointTargets, 0.1, 0.1) == 0) {
    std::cout << "Start joints move success." << std::endl;
  } else {
    std::cout << "Start joints move failed." << std::endl;
    return -1;
  }

  result = motion.waitMove();

  if (result != 0) {
    std::cout << "Wait move to start position failed." << std::endl;
    return -1;
  }

  std::vector<JointTarget> zeroTargets = {
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT6), 0},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT7), 0}};

  if (motion.requestMultiJointsMove(zeroTargets, 0.1, 0.1) == 0) {
    std::cout << "Start move left to zero success." << std::endl;
  } else {
    std::cout << "Start move left to zero failed." << std::endl;
    return -1;
  }

  result = motion.waitMove();

  if (result != 0) {
    std::cout << "Wait move to zero position failed." << std::endl;
    return -1;
  }

  return 0;
}
