// get_version.cpp

#include <iostream>
#include <iomanip>
#include "h2x/h2x_system.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h2x;

int main() {
  std::cout << "=== 获取机器人各软件的版本号示例 ===" << std::endl;
  H2xSystem system;
  RobotVersion robotVersion;
  system.getRobotVersion(robotVersion);
  std::cout << "驱动器版本号：" << robotVersion.driver_version.driver_version
            << std::endl;
  std::cout << "控制器版本号：" << robotVersion.controller_version.main_version
            << std::endl;
  for (const auto& [name, version] :
       robotVersion.controller_version.plugin_versions) {
    std::cout << "\t控制器的插件 " << name << " 的版本号: " << version
              << std::endl;
  }

  std::cout << "安全监控版本号：" << robotVersion.monitor_version.main_version
            << std::endl;

  return 0;
}