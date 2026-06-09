cmake_minimum_required(VERSION 3.10)
project(humanoid_sdk VERSION 1.0.0)


## Set compiler to use c++ 17 features
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(H10W "Build H10W example" OFF)
option(H2X "Build H2X example" OFF)

if(H10W)
    add_subdirectory(h10-w)
endif()
if(H2X)
    add_subdirectory(h2x)
endif()


set(CMAKE_INSTALL_PREFIX "${CMAKE_CURRENT_SOURCE_DIR}/install" CACHE PATH "install dir" FORCE)


