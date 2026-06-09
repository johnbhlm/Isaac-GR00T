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
  std::cout << "=== realtime servo joint ===" << std::endl;
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

  motion.enableRealtimeCmd(true);
  RealtimeJointsParams joints;
  joints.left_arm_valid = false;
  joints.right_arm_valid = false;
  joints.torso_valid = false;
  for (int i = 0; i < 7; i++) {
    joints.left_arm[i] = moveMsg.position[i];
  }
  joints.time = 0.001;
  double step = 0.0001;
  bool servo_failed = false;
  for (int i = 0; i < 7; i++) {
    int time = 3000;
    while (time > 0) {
      joints.left_arm[i] += step;
      joints.left_arm_valid = true;
      if (motion.servoJoint(joints) != 0) {
        std::cout << "Servo joint failed." << std::endl;
        servo_failed = true;
        break;
      }
      std::this_thread::sleep_for(std::chrono::milliseconds(1));
      time--;
    }
    if (servo_failed) break;
    time = 0;
    while (time < 3000) {
      joints.left_arm[i] -= step;
      joints.left_arm_valid = true;
      if (motion.servoJoint(joints) != 0) {
        std::cout << "Servo joint failed." << std::endl;
        servo_failed = true;
        break;
      }
      std::this_thread::sleep_for(std::chrono::milliseconds(1));
      time++;
    }
    if (servo_failed) break;
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
    std::cout << "Move to zero failed." << std::endl;
  }

  result = motion.waitMove();
  if (result != 0) {
    std::cout << "Wait move to zero position failed." << std::endl;
    return -1;
  }
  return 0;
}