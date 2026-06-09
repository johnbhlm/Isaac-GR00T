// control_power.cpp

#include <iostream>
#include <iomanip>
#include <thread>
#include <chrono>
#include "h10-w/h10w_motion.h"
#include "common/common_def.h"
#include "common/LogWrapper.h"

using namespace humanoid;
using namespace humanoid::h10w;

int main() {
  std::cout << "=== 上半身设置控制策略示例 ===" << std::endl;
  H10wMotion motion;

  LOG_INFO("正在进行上半身控制策略设置...");
  humanoid::ControlPolicy policy;
  if (motion.setControlPolicy(humanoid::ControlPolicy::FULL_BODY) == 0 &&
      motion.getControlPolicy(policy) == 0 &&
      policy == humanoid::ControlPolicy::FULL_BODY) {
    LOG_INFO("上半身设置为全身控制成功");
  } else {
    LOG_ERROR("上半身设置为全身控制失败");
  }

  std::this_thread::sleep_for(std::chrono::seconds(3));

  if (motion.setControlPolicy(humanoid::ControlPolicy::SINGLE_ARM) == 0 &&
      motion.getControlPolicy(policy) == 0 &&
      policy == humanoid::ControlPolicy::SINGLE_ARM) {
    LOG_INFO("上半身设置为单臂控制成功");
  } else {
    LOG_ERROR("上半身设置为单臂控制失败");
  }

  return 0;
}