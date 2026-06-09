# 检测操作系统
if(CMAKE_SYSTEM_NAME STREQUAL "Linux")
    set(HUMANOID_PLATFORM "linux")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Windows")
    set(HUMANOID_PLATFORM "windows")
elseif(CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    set(HUMANOID_PLATFORM "macos")
else()
    message(FATAL_ERROR "Unsupported platform: ${CMAKE_SYSTEM_NAME}")
endif()

# 检测架构
if(CMAKE_SYSTEM_PROCESSOR STREQUAL "x86_64" OR CMAKE_SYSTEM_PROCESSOR STREQUAL "AMD64")
    set(HUMANOID_ARCH "x86_64")
    set(HUMANOID_BITNESS "x64")  # 添加位宽层
elseif(CMAKE_SYSTEM_PROCESSOR STREQUAL "aarch64" OR CMAKE_SYSTEM_PROCESSOR STREQUAL "ARM64")
    set(HUMANOID_ARCH "arm")
    set(HUMANOID_BITNESS "aarch64")
elseif(CMAKE_SYSTEM_PROCESSOR STREQUAL "armv7l")
    set(HUMANOID_ARCH "armv7l")
    set(HUMANOID_BITNESS "arm32")
else()
    message(FATAL_ERROR "Unsupported architecture: ${CMAKE_SYSTEM_PROCESSOR}")
endif()

# 设置库后缀
if(WIN32)
    set(HUMANOID_LIB_SUFFIX ".dll")
elseif(APPLE)
    set(HUMANOID_LIB_SUFFIX ".dylib")
else()
    set(HUMANOID_LIB_SUFFIX ".so")
endif()

message(STATUS "Detected platform: ${HUMANOID_PLATFORM}/${HUMANOID_ARCH}/${HUMANOID_BITNESS}")