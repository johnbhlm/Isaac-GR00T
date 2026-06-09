#include <chrono>
#include <cstdint>
#include <iostream>
#include <thread>

#include "common/h2x_def.h"
#include "h2x/h2x_high_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

namespace {
constexpr auto kControlPeriod = std::chrono::milliseconds(100);
constexpr double kControlPeriodSec = 0.1;

// motor_cmd[] 使用 0-based index（关节ID - 1）
// 上半身范围：腰部(12-14)，左臂(15-21)，右臂(22-28)，对应关节ID 13-29
constexpr int kUpperBodyStart = 12;  // WAIST_YAW index
constexpr int kUpperBodyEnd = 29;    // R_WRIST_YAW index + 1（exclusive）

// WAIST_ROLL(14) 和 WAIST_PITCH(15) 使用更高的刚度
constexpr int kWaistRollIndex = 13;   // 关节ID 14 = WAIST_ROLL
constexpr int kWaistPitchIndex = 14;  // 关节ID 15 = WAIST_PITCH

constexpr float kHighKp = 100.0f;
constexpr float kNormalKp = 50.0f;
constexpr float kKd = 2.0f;

// 腰部偏转关节（WAIST_YAW，index 12）做摆动
constexpr int kWaistYawIndex = 12;  // 关节ID 13 = WAIST_YAW
}  // namespace

int main() {
  std::cout << "=== h2x 实时运动控制示例 "
               ",仅支持在climb_stairs_mode模式下控制上半身，下半身暂时不要控制 ==="
            << std::endl;

  H2xHighLevel highLevel;

  RealtimeCmd cmd{};
  cmd.time = kControlPeriodSec;

  double a = 0.0;
  int times = 0;

  while (true) {
    // 上半身所有关节保持默认位置，施加适度增益
    for (int i = kUpperBodyStart; i < kUpperBodyEnd; ++i) {
      cmd.motor_cmd[i].mode = 0;
      cmd.motor_cmd[i].q = 0.0f;
      // WAIST_ROLL / WAIST_PITCH 使用更高刚度以保持稳定
      if (i == kWaistRollIndex || i == kWaistPitchIndex) {
        cmd.motor_cmd[i].mode = 1;
        cmd.motor_cmd[i].kp = kHighKp;
      } else {
        cmd.motor_cmd[i].kp = kNormalKp;
      }
      cmd.motor_cmd[i].kd = kKd;
    }

    // 腰部偏转关节做 0 → 0.5 rad → 0 的循环摆动
    if (times < 50) {
      a += 0.01;
      cmd.motor_cmd[kWaistYawIndex].mode = 1;
      cmd.motor_cmd[kWaistYawIndex].q = static_cast<float>(a);
    } else if (times < 100) {
      a -= 0.01;
      cmd.motor_cmd[kWaistYawIndex].mode = 1;
      cmd.motor_cmd[kWaistYawIndex].q = static_cast<float>(a);
    } else {
      cmd.motor_cmd[kWaistYawIndex].mode = 1;
      times = 0;
    }

    std::cout << "pos: " << cmd.motor_cmd[kWaistYawIndex].q << std::endl;

    int ret = highLevel.realtimeMove(cmd);
    if (ret != 0) {
      std::cerr << "实时运动控制失败, 错误码：" << ret << std::endl;
      return -1;
    }

    std::this_thread::sleep_for(kControlPeriod);
    ++times;
  }

  std::cout << "实时运动控制完成" << std::endl;
  return 0;
}
