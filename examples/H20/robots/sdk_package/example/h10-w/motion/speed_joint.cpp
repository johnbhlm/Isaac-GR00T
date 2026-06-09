// get_cartesian_rotation_max_acc.cpp

#include <iostream>
#include <iomanip>
#include "h10-w/h10w_motion.h"
#include "common/common_def.h"
#include "common/h10w_def.h"
#include "h10-w/h10w_status.h"
#include "h10-w/h10w_system.h"
#include <algorithm>
#include <thread>

using namespace humanoid;
using namespace humanoid::h10w;
/// @brief
/// 以左臂某端关节为例，将1s内将关节速度从0加速至0.1rad/s，以0.1rad/s的速度运行1s后停止。
int main() {
  std::cout << "=== realtime speed joint ===" << std::endl;
  H10wMotion motion;
  H10wStatus status;
  H10wSystem system;
  MoveMessageParams moveMsg;
  int result = status.getMoveMessage(moveMsg);
  if (result != 0) {
    std::cerr << "获取运动信息失败，任务终止" << std::endl;
    return -1;
  }
  bool leftArmNearZero =
      std::all_of(moveMsg.position.begin(), moveMsg.position.begin() + 7,
                  [](double value) { return value - 0.0 < 0.001; });
  if (!leftArmNearZero) {
    std::cerr << "为保证安全，请先将左臂回零" << std::endl;
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

  RealtimeJointsParams vels;
  vels.left_arm_valid = false;
  vels.right_arm_valid = false;
  vels.torso_valid = false;
  vels.time = 0.001;

  motion.enableRealtimeCmd(true);
  for (int i = 0; i < 7; i++) {
    vels.left_arm[i] = 0;
  }

  double step = 0.0001;
  int time = 2000;
  while (time > 0) {
    vels.left_arm[6] += step;
    vels.left_arm_valid = true;
    if (motion.speedJoint(vels) != 0) {
      std::cout << "Speed joint failed." << std::endl;
      break;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    time--;
  }
  motion.enableRealtimeCmd(false);

  std::vector<JointTarget> leftZeroPos{
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT7), 0}};
  result = motion.requestMultiJointsMove(leftZeroPos, 0.1, 0.1);
  if (result != 0) {
    std::cout << "Move to zero failed." << std::endl;
  }

  if (motion.waitMove() != 0) {
    std::cerr << "Wait move to zero pos failed." << std::endl;
    return -1;
  }
  return 0;
}