# CMakeLists.txt for H2x Low Level Examples
cmake_minimum_required(VERSION 3.10)
project(h2x_high_level_examples)

# Project Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
set(HumanoidSDK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../cmake/HumanoidSDK")
find_package(HumanoidSDK REQUIRED)

file(GLOB_RECURSE CPP_FILES "*.cpp")
list(LENGTH CPP_FILES CPP_FILES_COUNT)
set(EXECUTABLE_TARGETS "")

# build example for each cpp file
foreach(CPP_FILE ${CPP_FILES})
    get_filename_component(EXECUTABLE_NAME ${CPP_FILE} NAME_WE)
    add_executable(${EXECUTABLE_NAME} ${CPP_FILE})
    target_link_libraries(${EXECUTABLE_NAME} humanoid_sdk::humanoid_sdk)
    list(APPEND EXECUTABLE_TARGETS ${EXECUTABLE_NAME})
endforeach()

install(TARGETS
    ${EXECUTABLE_TARGETS}
    DESTINATION h2x/high_level
)


list(LENGTH EXECUTABLE_TARGETS EXECUTABLE_TARGETS_COUNT)
message(STATUS "构建 H2x high_level 示例程序: 发现 ${EXECUTABLE_TARGETS_COUNT} 个示例程序")
