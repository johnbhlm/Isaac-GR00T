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
/// 以左臂为例从末端开始依次将各关节旋转0.3rad，再旋转回初始位置。初始位置应为0位，运行时需保持双臂不干涉且周围空旷。
int main() {
  std::cout << "=== realtime Speed linear ===" << std::endl;
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

  // move to start position
  // ->tcp:{1.225196,0.387371,1.157848,0.683798,2.018945,0.074912}
  std::vector<JointTarget> linearStartPos{
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT1), -0.2},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT2), 0.2},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT3), 0.2},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT4), 0.9},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT5), 0.8},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT6), 0.5},
      {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT7), 0.5},
      {static_cast<uint32_t>(JointIndexValue::ELEVATOR_MOTOR), 0.3}};
  result = motion.requestMultiJointsMove(linearStartPos, 0.1, 0.1);
  if (result != 0) {
    std::cerr << "Move to start position failed." << std::endl;
    return -1;
  }
  result = motion.waitMove();
  if (result != 0) {
    std::cerr << "Wait move to start position failed." << std::endl;
    return -1;
  }

  RealtimeTcpParams vel;
  vel.left_arm_valid = false;
  vel.right_arm_valid = false;
  vel.torso_valid = false;
  for (int i = 0; i < 6; i++) {
    vel.left_arm[i] = 0;
  }
  vel.time = 0.001;

  motion.enableRealtimeCmd(true);
  // 1s移动0.1m
  double step = 0.0001;
  int time = 2000;
  while (time > 0) {
    if (time < 1000)
      vel.left_arm[0] -= step;
    else
      vel.left_arm[0] = 0;
    vel.left_arm_valid = true;
    if (motion.speedLinear(vel) != 0) {
      std::cout << "Speed linear failed." << std::endl;
      break;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    time--;
  }
  motion.enableRealtimeCmd(false);

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
  if (motion.waitMove() != 0) {
    std::cerr << "Wait move to zero pos failed." << std::endl;
    return -1;
  }
  return 0;
}