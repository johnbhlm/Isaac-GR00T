// single_joint_move.cpp

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
  std::cout << "=== 单轴运动示例 ===" << std::endl;

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

  // 左臂7轴运动至 0.5 rad 位置，最大速度 0.1 rad/s
  JointTarget jointTarget = {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT7),
                             0.5};

  if (motion.requestSingleJointMove(jointTarget, 0.1, 0.1) == 0) {
    std::cout << "Start move joint success." << std::endl;
  } else {
    std::cout << "Start move joint failed." << std::endl;
    return -1;
  }

  if (motion.waitMove() != 0) {
    std::cerr << "Wait move to start pos failed." << std::endl;
    return -1;
  }

  JointTarget zeroTarget = {static_cast<uint32_t>(JointIndexValue::L_ARM_JOINT7),
                            0.0};

  if (motion.requestSingleJointMove(zeroTarget, 0.1, 0.1) == 0) {
    std::cout << "Start move zero success." << std::endl;
  } else {
    std::cout << "Start move zero failed." << std::endl;
    return -1;
  }

  if (motion.waitMove() != 0) {
    std::cerr << "Wait move to zero pos failed." << std::endl;
    return -1;
  }
  return 0;
}
