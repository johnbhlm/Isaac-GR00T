# 获取 Humanoid SDK 根目录
get_filename_component(_HUMANOID_SDK_ROOT "${CMAKE_CURRENT_LIST_DIR}/../.." ABSOLUTE)
set(PLATFORM_PATH ${HUMANOID_PLATFORM}/${HUMANOID_ARCH}/${HUMANOID_BITNESS})
# 主库目标
if(NOT TARGET humanoid_sdk::humanoid_sdk)
    add_library(humanoid_sdk::humanoid_sdk SHARED IMPORTED)
    set_target_properties(humanoid_sdk::humanoid_sdk PROPERTIES
        IMPORTED_LOCATION "${_HUMANOID_SDK_ROOT}/lib/${PLATFORM_PATH}/libhumanoid_sdk.so"
        INTERFACE_INCLUDE_DIRECTORIES "${_HUMANOID_SDK_ROOT}/include"
        INTERFACE_COMPILE_DEFINITIONS "USE_HUMANOID_SDK"
    )
    # 设置链接目录
    target_link_directories(humanoid_sdk::humanoid_sdk INTERFACE
    "${_HUMANOID_SDK_ROOT}/lib/${PLATFORM_PATH}"
    "${_HUMANOID_SDK_ROOT}/dependency/fastdds/${PLATFORM_PATH}"
    "${_HUMANOID_SDK_ROOT}/dependency/sdk/Runtime_Env/${PLATFORM_PATH}"
    )

    # log wrapper
    set(LOG_WRAPPER_LINK_LIB LogWrapper)
    
    target_link_libraries(humanoid_sdk::humanoid_sdk INTERFACE ${LOG_WRAPPER_LINK_LIB})
endif()

# 设置编译选项
target_compile_options(humanoid_sdk::humanoid_sdk INTERFACE
    $<$<CXX_COMPILER_ID:GNU>:-Wall>
)