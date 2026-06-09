// linear_move.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_motion.h"
#include "common/common_def.h"
#include "h10-w/h10w_status.h"
#include "h10-w/h10w_system.h"
#include <algorithm>

using namespace humanoid;
using namespace humanoid::h10w;

/**
 * 测试LinearMove，注意：
 * 1、避免运动时发生危险，需要保证机器人四周空旷
 * 2、本测试为单臂运动，运行前control_policy设置为humanoid::ControlPolicy::SINGLE_ARM
 */

int main() {
  std::cout << "=== Linear Move Demo ===" << std::endl;

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

  // move to start position
  // ->tcp:{1.225196,0.387371,1.157848,0.683798,2.018945,0.074912}
  std::vector<JointTarget> leftStartPos{
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1), -0.2},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT2), 0.2},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT3), 0.2},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT4), 0.9},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT5), 0.8},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT6), 0.5},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT7), 0.5},
      {static_cast<uint32_t>(JointIndexValue::ELEVATOR_MOTOR), 0.3}};
  result = motion.requestMultiJointsMove(leftStartPos, 0.1, 0.1);
  if (result != 0) {
    std::cout << "Move to start position failed." << std::endl;
    return -1;
  }
  result = motion.waitMove();

  if (result != 0) {
    std::cout << "Wait move to start position failed." << std::endl;
    return -1;
  }

  // x:1.225196->1.025196
  std::vector<LinearTarget> linearTargets = {
      {CartIndex::LEFT_ARM,  // 左臂
       {1.025196, 0.387371, 1.157848, 0.683798, 2.018945,
        0.074912},  // 目标位置
       0.1,         // 速度 10%
       0.1}         // 加速度 10%
  };

  if (motion.requestLinearMove(linearTargets) == 0) {
    std::cout << "Start linear move success." << std::endl;
  } else {
    std::cout << "Start linear move failed." << std::endl;
    return -1;
  }

  result = motion.waitMove();

  if (result != 0) {
    std::cout << "Wait linear move failed." << std::endl;
    return -1;
  }

  std::vector<JointTarget> leftZeroPos{
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1), 0},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT2), 0},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT3), 0},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT4), 0},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT5), 0},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT6), 0},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT7), 0}};
  result = motion.requestMultiJointsMove(leftZeroPos, 0.1, 0.1);
  if (result != 0) {
    std::cout << "Start move to zero failed." << std::endl;
  }
  result = motion.waitMove();

  if (result != 0) {
    std::cout << "Wait move to zero failed." << std::endl;
  }

  return 0;
}
