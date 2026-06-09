// low_state.cpp

#include <iostream>
#include <thread>
#include <chrono>

#include "common/common_def.h"
#include "common/h2x_def.h"
#include "h2x/h2x_low_level.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== Low State Reading Test ===" << std::endl;

  H2xLowLevel low_level;
  LowState low_state;

  // Read low state for 5 seconds
  constexpr int DURATION_MS = 5000;
  constexpr int READ_INTERVAL_MS = 100;
  constexpr int read_count = DURATION_MS / READ_INTERVAL_MS;

  for (int i = 0; i < read_count; ++i) {
    auto start = std::chrono::high_resolution_clock::now();

    int ret = low_level.readLowState(low_state);
    if (ret != 0) {
      std::cout << "Failed to read low state!" << std::endl;
      return -1;
    }

    // Print some state information
    std::cout << "=== Low State Reading " << i + 1 << " ===" << std::endl;
    std::cout << "Tick: " << low_state.tick << std::endl;
    std::cout << "Time seconds: " << low_state.time_seconds << std::endl;
    std::cout << "Is data valid: " << (low_state.is_data_valid ? "Yes" : "No")
              << std::endl;

    // Print first motor state as example
    if (low_state.is_data_valid) {
      std::cout << "Motor 0 - Position: " << low_state.motor_state[0].q
                << ", Velocity: " << low_state.motor_state[0].dq
                << ", Torque: " << low_state.motor_state[0].tau_est
                << std::endl;
    }

    // Print IMU state if available
    if (low_state.is_data_valid) {
      std::cout << "IMU 0 - Accel: [" << low_state.imu_state[0].accelerometer[0]
                << ", " << low_state.imu_state[0].accelerometer[1] << ", "
                << low_state.imu_state[0].accelerometer[2] << "]"
                << ", Gyro: [" << low_state.imu_state[0].gyroscope[0] << ", "
                << low_state.imu_state[0].gyroscope[1] << ", "
                << low_state.imu_state[0].gyroscope[2] << "]" << std::endl;
    }

    std::cout << "Error code: " << low_state.error_code << std::endl;
    std::cout << "Warning code: " << low_state.warning_code << std::endl;
    std::cout << std::endl;

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed =
        std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    std::this_thread::sleep_for(std::chrono::milliseconds(READ_INTERVAL_MS) -
                                elapsed);
  }

  std::cout << "Low state reading test completed successfully" << std::endl;
  return 0;
}