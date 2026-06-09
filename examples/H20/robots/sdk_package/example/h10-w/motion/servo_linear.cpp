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
  std::cout << "=== realtime servo linear ===" << std::endl;
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

  // 首先运动到一个合适的初始位姿
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
    std::cerr << "Start move joints to start pos failed." << std::endl;
    return -1;
  }
  result = motion.waitMove();
  if (result != 0) {
    std::cerr << "Wait move to start pos failed." << std::endl;
    return -1;
  }

  RealtimeTcpParams pos;
  pos.left_arm_valid = false;
  pos.right_arm_valid = false;
  pos.torso_valid = false;
  pos.time = 0.001;

  // 从当前位置
  // ->tcp:{1.225196,0.387371,1.157848,0.683798,2.018945,0.074912}，在x轴做往复运动
  result = status.getMoveMessage(moveMsg);
  for (int i = 0; i < (int)moveMsg.tcp_pose.size(); i++) {
    if (moveMsg.tcp_pose[i].type == CartIndex::LEFT_ARM) {  // 取出左臂当前位姿
      for (int p = 0; p < 6; p++) {
        pos.left_arm[p] = moveMsg.tcp_pose[i].pose[p];
        std::cout << "current pos:" << pos.left_arm[p] << std::endl;
      }
    }
  }

  motion.enableRealtimeCmd(true);

  // 1s移动0.1m
  double step = 0.0001;
  bool servo_failed = false;
  int time = 1000;
  while (time > 0) {
    pos.left_arm[0] -= step;
    pos.left_arm_valid = true;
    if (motion.servoLinear(pos) != 0) {
      std::cout << "Servo linear1 failed." << std::endl;
      servo_failed = true;
      break;
    }
    std::this_thread::sleep_for(std::chrono::milliseconds(1));
    time--;
  }

  if (!servo_failed) {
    time = 0;
    while (time < 1000) {
      pos.left_arm[0] += step;
      pos.left_arm_valid = true;
      if (motion.servoLinear(pos) != 0) {
        std::cout << "Servo linear2 failed." << std::endl;
        servo_failed = true;
        break;
      }
      std::this_thread::sleep_for(std::chrono::milliseconds(1));
      time++;
    }
  }

  motion.enableRealtimeCmd(false);
  // std::this_thread::sleep_for(std::chrono::milliseconds(1000));
  // move to zero
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
    std::cerr << "Wait move to zero failed." << std::endl;
    return -1;
  }
  return 0;
}