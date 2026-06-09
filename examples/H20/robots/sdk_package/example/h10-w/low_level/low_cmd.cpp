// low_cmd.cpp

#include <iostream>
#include <algorithm>
#include <thread>
#include <cmath>
#include <chrono>

#include "common/common_def.h"
#include "common/h10w_def.h"
#include "h10-w/h10w_low_level.h"
#include "h10-w/h10w_status.h"
#include "h10-w/h10w_system.h"

using namespace humanoid;
using namespace humanoid::h10w;

constexpr double MAX_POS = M_PI * 10.0 / 180.0;
constexpr double DURATION = 10;      // unit: ms
constexpr double TOTAL_TIME = 2000;  // unit: ms

int main() {
  std::cout << "=== Low Level Command Test ===" << std::endl;
  H10wStatus status;
  H10wSystem system;
  H10wLowLevel low_level;

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

  LowCmd low_cmd;
  // start control loop
  constexpr size_t control_count = TOTAL_TIME / DURATION;
  for (size_t i = 0; i < control_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();
    auto pos = std::sin(M_PI * i * DURATION / 1000.0) * MAX_POS;
    auto vel = std::cos(M_PI * i * DURATION / 1000.0) * MAX_POS * M_PI;
    low_cmd.motor_cmd[static_cast<int>(JointIndexValue::L_ARM_JOINT1) - 1].mode = 1;
    low_cmd.motor_cmd[static_cast<int>(JointIndexValue::L_ARM_JOINT1) - 1].q = pos;
    low_cmd.motor_cmd[static_cast<int>(JointIndexValue::L_ARM_JOINT1) - 1].dq = vel;
    if (low_level.writeLowCmd(low_cmd) != 0) {
      std::cout << "pub low cmd failed!" << std::endl;
      return 0;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = end - start;
    std::this_thread::sleep_for(
        std::chrono::microseconds(static_cast<int>(DURATION * 1000)) - elapsed);
  }
  // restart controller after pub low cmd
  system.enableController(true);
  return 0;
}