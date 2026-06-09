// low_cmd.cpp

#include <iostream>
#include <algorithm>
#include <thread>
#include <cmath>
#include <chrono>

#include "common/common_def.h"
#include "common/h2x_def.h"
#include "h2x/h2x_low_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

constexpr double MAX_POS = M_PI * 10.0 / 180.0;
constexpr double DURATION = 10;      // unit: ms
constexpr double TOTAL_TIME = 2000;  // unit: ms

int main() {
  std::cout << "=== Low Level Command Test ===" << std::endl;
  H2xLowLevel low_level;
  LowCmd low_cmd;
  // start control loop
  constexpr size_t control_count = TOTAL_TIME / DURATION;
  for (size_t i = 0; i < control_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();
    auto pos = std::sin(M_PI * i * DURATION / 1000.0) * MAX_POS;
    auto vel = std::cos(M_PI * i * DURATION / 1000.0) * MAX_POS * M_PI;
    low_cmd.motor_cmd[0].mode = 1;
    low_cmd.motor_cmd[0].kp = 15.0;
    low_cmd.motor_cmd[0].kd = 0.5;
    low_cmd.motor_cmd[0].q = pos;
    low_cmd.motor_cmd[0].dq = vel;
    if (low_level.writeLowCmd(low_cmd) != 0) {
      std::cout << "pub low cmd failed!" << std::endl;
      return 0;
    }
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = end - start;
    std::this_thread::sleep_for(
        std::chrono::microseconds(static_cast<int>(DURATION * 1000)) - elapsed);
  }

  return 0;
}