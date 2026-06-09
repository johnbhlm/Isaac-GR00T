# Humanoid SDK Guide

## C++ Usage Guide

### Environment Setup
``` bash
cd ~/sdk_package
export LD_LIBRARY_PATH="$(pwd)/lib/linux/x86_64/x64:$(pwd)/dependency/sdk/Runtime_Env/linux/x86_64/x64:$(pwd)/dependency/fastdds/linux/x86_64/x64:$LD_LIBRARY_PATH"
## optional: if you want to use a custom DDS profile, set the ROBOT_DDS_PROFILE environment variable
# export ROBOT_DDS_PROFILE=$(pwd)/example/Robot_DDS_Profile.xml 

# aarch64
export LD_LIBRARY_PATH="$(pwd)/lib/linux/arm/aarch64:$(pwd)/dependency/sdk/Runtime_Env/linux/arm/aarch64:$(pwd)/dependency/fastdds/linux/arm/aarch64:$LD_LIBRARY_PATH"
export PYTHONPATH="$(pwd)/lib/linux/arm/aarch64:$PYTHONPATH"
```

### Quick Run Example
``` bash
cd example
mkdir build && cd build && cmake .. && make -j$(($(nproc) - 1)) && make install
cd ../install/h10-w/params
./get_joint_soft_limit
```

### Build a Simple Example

#### 1. Create a cpp File
``` cpp
// main.cpp
#include "h10-w/h10w_params.h"
#include "common/common_def.h"

using namespace humanoid;
using namespace humanoid::h10w;
int main() {
  H10wParams params;
  JointLimit jointLimits;
  params.getJointSoftLimit(jointLimits);
  return 0;
}
```

#### 2. Create a CMakeLists.txt File
``` Cmake
cmake_minimum_required(VERSION 3.10)
project(simple_example)

# Project Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find HumanoidSDK
set(HumanoidSDK_DIR "path/to/sdk_package/cmake/HumanoidSDK") ## replace with your sdk package path
find_package(HumanoidSDK REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} humanoid_sdk::humanoid_sdk)
```

#### 3. Build and Run Example
``` bash
mkdir build && cd build && cmake .. && make
./simple_example
```

## Python Usage Guide

### Environment Setup
``` bash
# x86_64
cd ~/sdk_package
export LD_LIBRARY_PATH="$(pwd)/lib/linux/x86_64/x64:$(pwd)/dependency/sdk/Runtime_Env/linux/x86_64/x64:$(pwd)/dependency/fastdds/linux/x86_64/x64:$LD_LIBRARY_PATH"
export PYTHONPATH="$(pwd)/lib/linux/x86_64/x64:$PYTHONPATH"

# aarch64
cd ~/sdk_package
export LD_LIBRARY_PATH="$(pwd)/lib/linux/arm/aarch64:$(pwd)/dependency/sdk/Runtime_Env/linux/arm/aarch64:$(pwd)/dependency/fastdds/linux/arm/aarch64:$LD_LIBRARY_PATH"
export PYTHONPATH="$(pwd)/lib/linux/arm/aarch64:$PYTHONPATH"

## optional: if you want to use a custom DDS profile, set the ROBOT_DDS_PROFILE environment variable
# export ROBOT_DDS_PROFILE=path/to/your/Robot_DDS_Profile.xml 

# aarch64
export LD_LIBRARY_PATH="$(pwd)/lib/linux/arm/aarch64:$(pwd)/dependency/sdk/Runtime_Env/linux/arm/aarch64:$(pwd)/dependency/fastdds/linux/arm/aarch64:$LD_LIBRARY_PATH"
export PYTHONPATH="$(pwd)/lib/linux/arm/aarch64:$PYTHONPATH"
```

### Quick Run Example
``` bash
cd example_py/h10-w/params
python3 get_joint_soft_limit.py
```

### Build a Simple Example

#### 1. Create a Python File
``` python
# example.py
import humanoid_sdk_py
import humanoid_sdk_py.h10w as h10w
import time

h10w_params = h10w.H10wParams()
time.sleep(1)

ret, limit = h10w_params.getJointSoftLimit()
if ret == 0:
    for index, max, min in limit:
        print(
            "    joint {}: max pos= {:.3f} rad, min pos= {:.3f} rad".format(
                index, max, min
            )
        )
else:
    print("Failed to get joint soft limit.")
```

#### 2. Run Example
``` bash
python3 example.py
```