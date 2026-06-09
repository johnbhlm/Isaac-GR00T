cmake_minimum_required(VERSION 3.8)
project(h2x)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/BatteryState.msg"
  "msg/IMUState.msg"
  "msg/LowCmd.msg"
  "msg/LowState.msg"
  "msg/MotorCmd.msg"
  "msg/MotorState.msg"
  "msg/CDUState.msg"
  "msg/MotorCmdGripper.msg"
  "msg/MotorStateGripper.msg"
  "msg/GripperCmd.msg"
  "msg/GripperState.msg"
  "msg/LRCUCmd.msg"
  "msg/LRCUState.msg"
  "msg/PCUState.msg"
  "msg/Diagnosis.msg"
  "msg/DiagnosticData.msg"
  "msg/DebugMotorState.msg"
  "msg/DebugIMUState.msg"
  "msg/DebugCDUState.msg"
  "srv/CalibrateMotorElectricalAngle.srv"
  "msg/GripperDiagnosis.msg"
  "msg/GripperDiagnosticData.msg"
  "srv/CalibrationZero.srv"
  "srv/GetJointMonitor.srv"
  "srv/ResetJointParameters.srv"
  "srv/SaveJointParameters.srv"
  "srv/SetJointMonitor.srv"
  "srv/GetJointHardLimit.srv"
  "srv/ClearError.srv"
  "srv/SetMechanicalLimitToJoint.srv"
  "srv/CommandReset.srv"
  "srv/SetJointDirection.srv"
  "srv/GripperClearError.srv"
  "srv/GetGripperMaxForce.srv"
  "srv/GetGripperStrokeRange.srv"
  "srv/GripperInitialize.srv"
  "srv/SetGripperMaxForce.srv"
  "srv/SetGripperStrokeRange.srv"
  "srv/GripperBrakeControl.srv"
  "srv/GripperTorqueCalibrationZero.srv"
  "srv/IMUGyroZeroBiasCalibrtion.srv"
  "srv/IMUMagneticFieldCalibrationStart.srv"
  "srv/IMUMagneticFieldCalibrationStop.srv"
  "srv/IMUAccModuleCalibrtion.srv"
  "srv/IMUHorizonReferenceSet.srv"
  "srv/IMUHorizontalInstallationSet.srv"
  "srv/IMUVerticalInstallationSet.srv"
  "srv/IMUInternalSolverSourceSet.srv"
  "srv/IMUExternalSolverSourceSet.srv"
  "srv/IMUControlReset.srv"
  "srv/Set5GAirplane.srv"
  "srv/Set5GGnss.srv"
  "srv/SetBlueTooth.srv"
  "srv/AwakenBlueTooth.srv"
  "srv/SetWlanPower.srv"
  "srv/SetWlanrfPower.srv"
  "srv/SetLowBatteryThreshold.srv"
  "srv/GetLowBatteryThreshold.srv"
)

if (DEFINED ENV{HUMANOID_DRIVER_ROOT})

  find_package(rosidl_generator_dds_idl REQUIRED)
  rosidl_generate_dds_interfaces(
    ${rosidl_generate_interfaces_TARGET}__dds_fastrtps_idl
    IDL_TUPLES ${rosidl_generate_interfaces_IDL_TUPLES}
    OUTPUT_SUBFOLDERS "dds_fastrtps"
  )
  add_dependencies(
    ${PROJECT_NAME}
    ${PROJECT_NAME}__dds_fastrtps_idl
  )

  set(SOURCES_IDL_PATH "${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_dds_idl/${PROJECT_NAME}/msg/dds_fastrtps/")
  set(INSTALL_IDL_PATH "$ENV{HUMANOID_DRIVER_ROOT}/idl/${PROJECT_NAME}/msg/dds_fastrtps")
  install(
    DIRECTORY ${SOURCES_IDL_PATH}
    DESTINATION ${INSTALL_IDL_PATH}
    FILES_MATCHING PATTERN "*.idl"
  )

  set(SOURCES_SRV_IDL_PATH "${CMAKE_CURRENT_BINARY_DIR}/rosidl_generator_dds_idl/${PROJECT_NAME}/srv/dds_fastrtps/")
  set(INSTALL_SRV_IDL_PATH "$ENV{HUMANOID_DRIVER_ROOT}/idl/${PROJECT_NAME}/srv/dds_fastrtps")
  install(
    DIRECTORY ${SOURCES_SRV_IDL_PATH}
    DESTINATION ${INSTALL_SRV_IDL_PATH}
    FILES_MATCHING PATTERN "*.idl"
  )

endif()

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
