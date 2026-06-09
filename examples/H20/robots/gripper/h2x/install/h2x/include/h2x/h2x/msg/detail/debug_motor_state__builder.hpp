// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/DebugMotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_motor_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/debug_motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_DebugMotorState_developer_command_status
{
public:
  explicit Init_DebugMotorState_developer_command_status(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::DebugMotorState developer_command_status(::h2x::msg::DebugMotorState::_developer_command_status_type arg)
  {
    msg_.developer_command_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_flag
{
public:
  explicit Init_DebugMotorState_flag(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_developer_command_status flag(::h2x::msg::DebugMotorState::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return Init_DebugMotorState_developer_command_status(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_bus_voltage
{
public:
  explicit Init_DebugMotorState_bus_voltage(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_flag bus_voltage(::h2x::msg::DebugMotorState::_bus_voltage_type arg)
  {
    msg_.bus_voltage = std::move(arg);
    return Init_DebugMotorState_flag(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_bus_current
{
public:
  explicit Init_DebugMotorState_bus_current(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_bus_voltage bus_current(::h2x::msg::DebugMotorState::_bus_current_type arg)
  {
    msg_.bus_current = std::move(arg);
    return Init_DebugMotorState_bus_voltage(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_estimated_temperature2
{
public:
  explicit Init_DebugMotorState_estimated_temperature2(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_bus_current estimated_temperature2(::h2x::msg::DebugMotorState::_estimated_temperature2_type arg)
  {
    msg_.estimated_temperature2 = std::move(arg);
    return Init_DebugMotorState_bus_current(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_estimated_temperature1
{
public:
  explicit Init_DebugMotorState_estimated_temperature1(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_estimated_temperature2 estimated_temperature1(::h2x::msg::DebugMotorState::_estimated_temperature1_type arg)
  {
    msg_.estimated_temperature1 = std::move(arg);
    return Init_DebugMotorState_estimated_temperature2(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_drive_temperature
{
public:
  explicit Init_DebugMotorState_drive_temperature(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_estimated_temperature1 drive_temperature(::h2x::msg::DebugMotorState::_drive_temperature_type arg)
  {
    msg_.drive_temperature = std::move(arg);
    return Init_DebugMotorState_estimated_temperature1(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motor_temperature
{
public:
  explicit Init_DebugMotorState_motor_temperature(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_drive_temperature motor_temperature(::h2x::msg::DebugMotorState::_motor_temperature_type arg)
  {
    msg_.motor_temperature = std::move(arg);
    return Init_DebugMotorState_drive_temperature(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_bus_current_offset
{
public:
  explicit Init_DebugMotorState_bus_current_offset(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motor_temperature bus_current_offset(::h2x::msg::DebugMotorState::_bus_current_offset_type arg)
  {
    msg_.bus_current_offset = std::move(arg);
    return Init_DebugMotorState_motor_temperature(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_c_phase_current_offset
{
public:
  explicit Init_DebugMotorState_c_phase_current_offset(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_bus_current_offset c_phase_current_offset(::h2x::msg::DebugMotorState::_c_phase_current_offset_type arg)
  {
    msg_.c_phase_current_offset = std::move(arg);
    return Init_DebugMotorState_bus_current_offset(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_b_phase_current_offset
{
public:
  explicit Init_DebugMotorState_b_phase_current_offset(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_c_phase_current_offset b_phase_current_offset(::h2x::msg::DebugMotorState::_b_phase_current_offset_type arg)
  {
    msg_.b_phase_current_offset = std::move(arg);
    return Init_DebugMotorState_c_phase_current_offset(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_a_phase_current_offset
{
public:
  explicit Init_DebugMotorState_a_phase_current_offset(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_b_phase_current_offset a_phase_current_offset(::h2x::msg::DebugMotorState::_a_phase_current_offset_type arg)
  {
    msg_.a_phase_current_offset = std::move(arg);
    return Init_DebugMotorState_b_phase_current_offset(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motor_encoder_calibrated_data
{
public:
  explicit Init_DebugMotorState_motor_encoder_calibrated_data(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_a_phase_current_offset motor_encoder_calibrated_data(::h2x::msg::DebugMotorState::_motor_encoder_calibrated_data_type arg)
  {
    msg_.motor_encoder_calibrated_data = std::move(arg);
    return Init_DebugMotorState_a_phase_current_offset(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_link_encoder_calibrated_data
{
public:
  explicit Init_DebugMotorState_link_encoder_calibrated_data(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motor_encoder_calibrated_data link_encoder_calibrated_data(::h2x::msg::DebugMotorState::_link_encoder_calibrated_data_type arg)
  {
    msg_.link_encoder_calibrated_data = std::move(arg);
    return Init_DebugMotorState_motor_encoder_calibrated_data(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_boot_tag_sha1_id
{
public:
  explicit Init_DebugMotorState_boot_tag_sha1_id(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_link_encoder_calibrated_data boot_tag_sha1_id(::h2x::msg::DebugMotorState::_boot_tag_sha1_id_type arg)
  {
    msg_.boot_tag_sha1_id = std::move(arg);
    return Init_DebugMotorState_link_encoder_calibrated_data(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_boot_branch_name
{
public:
  explicit Init_DebugMotorState_boot_branch_name(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_boot_tag_sha1_id boot_branch_name(::h2x::msg::DebugMotorState::_boot_branch_name_type arg)
  {
    msg_.boot_branch_name = std::move(arg);
    return Init_DebugMotorState_boot_tag_sha1_id(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_app_tag_sha1_id
{
public:
  explicit Init_DebugMotorState_app_tag_sha1_id(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_boot_branch_name app_tag_sha1_id(::h2x::msg::DebugMotorState::_app_tag_sha1_id_type arg)
  {
    msg_.app_tag_sha1_id = std::move(arg);
    return Init_DebugMotorState_boot_branch_name(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_app_branch_name
{
public:
  explicit Init_DebugMotorState_app_branch_name(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_app_tag_sha1_id app_branch_name(::h2x::msg::DebugMotorState::_app_branch_name_type arg)
  {
    msg_.app_branch_name = std::move(arg);
    return Init_DebugMotorState_app_tag_sha1_id(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_bootloader_version
{
public:
  explicit Init_DebugMotorState_bootloader_version(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_app_branch_name bootloader_version(::h2x::msg::DebugMotorState::_bootloader_version_type arg)
  {
    msg_.bootloader_version = std::move(arg);
    return Init_DebugMotorState_app_branch_name(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_firmware_version
{
public:
  explicit Init_DebugMotorState_firmware_version(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_bootloader_version firmware_version(::h2x::msg::DebugMotorState::_firmware_version_type arg)
  {
    msg_.firmware_version = std::move(arg);
    return Init_DebugMotorState_bootloader_version(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_joint_serial_number
{
public:
  explicit Init_DebugMotorState_joint_serial_number(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_firmware_version joint_serial_number(::h2x::msg::DebugMotorState::_joint_serial_number_type arg)
  {
    msg_.joint_serial_number = std::move(arg);
    return Init_DebugMotorState_firmware_version(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_joint_version
{
public:
  explicit Init_DebugMotorState_joint_version(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_joint_serial_number joint_version(::h2x::msg::DebugMotorState::_joint_version_type arg)
  {
    msg_.joint_version = std::move(arg);
    return Init_DebugMotorState_joint_serial_number(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_joint_type
{
public:
  explicit Init_DebugMotorState_joint_type(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_joint_version joint_type(::h2x::msg::DebugMotorState::_joint_type_type arg)
  {
    msg_.joint_type = std::move(arg);
    return Init_DebugMotorState_joint_version(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_robot_serial_number
{
public:
  explicit Init_DebugMotorState_robot_serial_number(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_joint_type robot_serial_number(::h2x::msg::DebugMotorState::_robot_serial_number_type arg)
  {
    msg_.robot_serial_number = std::move(arg);
    return Init_DebugMotorState_joint_type(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_robot_version_number
{
public:
  explicit Init_DebugMotorState_robot_version_number(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_robot_serial_number robot_version_number(::h2x::msg::DebugMotorState::_robot_version_number_type arg)
  {
    msg_.robot_version_number = std::move(arg);
    return Init_DebugMotorState_robot_serial_number(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_robot_product_code
{
public:
  explicit Init_DebugMotorState_robot_product_code(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_robot_version_number robot_product_code(::h2x::msg::DebugMotorState::_robot_product_code_type arg)
  {
    msg_.robot_product_code = std::move(arg);
    return Init_DebugMotorState_robot_version_number(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_vendor_id
{
public:
  explicit Init_DebugMotorState_vendor_id(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_robot_product_code vendor_id(::h2x::msg::DebugMotorState::_vendor_id_type arg)
  {
    msg_.vendor_id = std::move(arg);
    return Init_DebugMotorState_robot_product_code(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_friction_ctrl_param4
{
public:
  explicit Init_DebugMotorState_friction_ctrl_param4(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_vendor_id friction_ctrl_param4(::h2x::msg::DebugMotorState::_friction_ctrl_param4_type arg)
  {
    msg_.friction_ctrl_param4 = std::move(arg);
    return Init_DebugMotorState_vendor_id(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_friction_ctrl_param3
{
public:
  explicit Init_DebugMotorState_friction_ctrl_param3(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_friction_ctrl_param4 friction_ctrl_param3(::h2x::msg::DebugMotorState::_friction_ctrl_param3_type arg)
  {
    msg_.friction_ctrl_param3 = std::move(arg);
    return Init_DebugMotorState_friction_ctrl_param4(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_friction_ctrl_param2
{
public:
  explicit Init_DebugMotorState_friction_ctrl_param2(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_friction_ctrl_param3 friction_ctrl_param2(::h2x::msg::DebugMotorState::_friction_ctrl_param2_type arg)
  {
    msg_.friction_ctrl_param2 = std::move(arg);
    return Init_DebugMotorState_friction_ctrl_param3(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_friction_ctrl_param1
{
public:
  explicit Init_DebugMotorState_friction_ctrl_param1(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_friction_ctrl_param2 friction_ctrl_param1(::h2x::msg::DebugMotorState::_friction_ctrl_param1_type arg)
  {
    msg_.friction_ctrl_param1 = std::move(arg);
    return Init_DebugMotorState_friction_ctrl_param2(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_linkside_position
{
public:
  explicit Init_DebugMotorState_linkside_position(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_friction_ctrl_param1 linkside_position(::h2x::msg::DebugMotorState::_linkside_position_type arg)
  {
    msg_.linkside_position = std::move(arg);
    return Init_DebugMotorState_friction_ctrl_param1(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motorside_position
{
public:
  explicit Init_DebugMotorState_motorside_position(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_linkside_position motorside_position(::h2x::msg::DebugMotorState::_motorside_position_type arg)
  {
    msg_.motorside_position = std::move(arg);
    return Init_DebugMotorState_linkside_position(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motor_ke
{
public:
  explicit Init_DebugMotorState_motor_ke(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motorside_position motor_ke(::h2x::msg::DebugMotorState::_motor_ke_type arg)
  {
    msg_.motor_ke = std::move(arg);
    return Init_DebugMotorState_motorside_position(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motor_l
{
public:
  explicit Init_DebugMotorState_motor_l(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motor_ke motor_l(::h2x::msg::DebugMotorState::_motor_l_type arg)
  {
    msg_.motor_l = std::move(arg);
    return Init_DebugMotorState_motor_ke(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motor_rs
{
public:
  explicit Init_DebugMotorState_motor_rs(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motor_l motor_rs(::h2x::msg::DebugMotorState::_motor_rs_type arg)
  {
    msg_.motor_rs = std::move(arg);
    return Init_DebugMotorState_motor_l(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_current_ctrl_mode
{
public:
  explicit Init_DebugMotorState_current_ctrl_mode(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motor_rs current_ctrl_mode(::h2x::msg::DebugMotorState::_current_ctrl_mode_type arg)
  {
    msg_.current_ctrl_mode = std::move(arg);
    return Init_DebugMotorState_motor_rs(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_current_ctrl_bandwidth
{
public:
  explicit Init_DebugMotorState_current_ctrl_bandwidth(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_current_ctrl_mode current_ctrl_bandwidth(::h2x::msg::DebugMotorState::_current_ctrl_bandwidth_type arg)
  {
    msg_.current_ctrl_bandwidth = std::move(arg);
    return Init_DebugMotorState_current_ctrl_mode(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_communication_error_configmask
{
public:
  explicit Init_DebugMotorState_communication_error_configmask(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_current_ctrl_bandwidth communication_error_configmask(::h2x::msg::DebugMotorState::_communication_error_configmask_type arg)
  {
    msg_.communication_error_configmask = std::move(arg);
    return Init_DebugMotorState_current_ctrl_bandwidth(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_ctrl_error_configmask
{
public:
  explicit Init_DebugMotorState_ctrl_error_configmask(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_communication_error_configmask ctrl_error_configmask(::h2x::msg::DebugMotorState::_ctrl_error_configmask_type arg)
  {
    msg_.ctrl_error_configmask = std::move(arg);
    return Init_DebugMotorState_communication_error_configmask(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_joint_error_configmask
{
public:
  explicit Init_DebugMotorState_joint_error_configmask(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_ctrl_error_configmask joint_error_configmask(::h2x::msg::DebugMotorState::_joint_error_configmask_type arg)
  {
    msg_.joint_error_configmask = std::move(arg);
    return Init_DebugMotorState_ctrl_error_configmask(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_board_error_configmask
{
public:
  explicit Init_DebugMotorState_board_error_configmask(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_joint_error_configmask board_error_configmask(::h2x::msg::DebugMotorState::_board_error_configmask_type arg)
  {
    msg_.board_error_configmask = std::move(arg);
    return Init_DebugMotorState_joint_error_configmask(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_link_error_configmask
{
public:
  explicit Init_DebugMotorState_link_error_configmask(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_board_error_configmask link_error_configmask(::h2x::msg::DebugMotorState::_link_error_configmask_type arg)
  {
    msg_.link_error_configmask = std::move(arg);
    return Init_DebugMotorState_board_error_configmask(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motor_error_configmask
{
public:
  explicit Init_DebugMotorState_motor_error_configmask(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_link_error_configmask motor_error_configmask(::h2x::msg::DebugMotorState::_motor_error_configmask_type arg)
  {
    msg_.motor_error_configmask = std::move(arg);
    return Init_DebugMotorState_link_error_configmask(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_led_rgb_ctrl
{
public:
  explicit Init_DebugMotorState_led_rgb_ctrl(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motor_error_configmask led_rgb_ctrl(::h2x::msg::DebugMotorState::_led_rgb_ctrl_type arg)
  {
    msg_.led_rgb_ctrl = std::move(arg);
    return Init_DebugMotorState_motor_error_configmask(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_current_torque_coefficient
{
public:
  explicit Init_DebugMotorState_current_torque_coefficient(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_led_rgb_ctrl current_torque_coefficient(::h2x::msg::DebugMotorState::_current_torque_coefficient_type arg)
  {
    msg_.current_torque_coefficient = std::move(arg);
    return Init_DebugMotorState_led_rgb_ctrl(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_torque_kfc
{
public:
  explicit Init_DebugMotorState_torque_kfc(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_current_torque_coefficient torque_kfc(::h2x::msg::DebugMotorState::_torque_kfc_type arg)
  {
    msg_.torque_kfc = std::move(arg);
    return Init_DebugMotorState_current_torque_coefficient(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_torque_l
{
public:
  explicit Init_DebugMotorState_torque_l(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_torque_kfc torque_l(::h2x::msg::DebugMotorState::_torque_l_type arg)
  {
    msg_.torque_l = std::move(arg);
    return Init_DebugMotorState_torque_kfc(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_torque_bfe
{
public:
  explicit Init_DebugMotorState_torque_bfe(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_torque_l torque_bfe(::h2x::msg::DebugMotorState::_torque_bfe_type arg)
  {
    msg_.torque_bfe = std::move(arg);
    return Init_DebugMotorState_torque_l(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_torque_kd
{
public:
  explicit Init_DebugMotorState_torque_kd(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_torque_bfe torque_kd(::h2x::msg::DebugMotorState::_torque_kd_type arg)
  {
    msg_.torque_kd = std::move(arg);
    return Init_DebugMotorState_torque_bfe(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_torque_kp
{
public:
  explicit Init_DebugMotorState_torque_kp(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_torque_kd torque_kp(::h2x::msg::DebugMotorState::_torque_kp_type arg)
  {
    msg_.torque_kp = std::move(arg);
    return Init_DebugMotorState_torque_kd(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_torque_b_offset
{
public:
  explicit Init_DebugMotorState_torque_b_offset(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_torque_kp torque_b_offset(::h2x::msg::DebugMotorState::_torque_b_offset_type arg)
  {
    msg_.torque_b_offset = std::move(arg);
    return Init_DebugMotorState_torque_kp(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_torque_a_offset
{
public:
  explicit Init_DebugMotorState_torque_a_offset(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_torque_b_offset torque_a_offset(::h2x::msg::DebugMotorState::_torque_a_offset_type arg)
  {
    msg_.torque_a_offset = std::move(arg);
    return Init_DebugMotorState_torque_b_offset(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_max_joint_torque
{
public:
  explicit Init_DebugMotorState_max_joint_torque(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_torque_a_offset max_joint_torque(::h2x::msg::DebugMotorState::_max_joint_torque_type arg)
  {
    msg_.max_joint_torque = std::move(arg);
    return Init_DebugMotorState_torque_a_offset(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_max_motor_torque
{
public:
  explicit Init_DebugMotorState_max_motor_torque(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_max_joint_torque max_motor_torque(::h2x::msg::DebugMotorState::_max_motor_torque_type arg)
  {
    msg_.max_motor_torque = std::move(arg);
    return Init_DebugMotorState_max_joint_torque(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_current_coefficient
{
public:
  explicit Init_DebugMotorState_current_coefficient(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_max_motor_torque current_coefficient(::h2x::msg::DebugMotorState::_current_coefficient_type arg)
  {
    msg_.current_coefficient = std::move(arg);
    return Init_DebugMotorState_max_motor_torque(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_spd_bandwidth
{
public:
  explicit Init_DebugMotorState_spd_bandwidth(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_current_coefficient spd_bandwidth(::h2x::msg::DebugMotorState::_spd_bandwidth_type arg)
  {
    msg_.spd_bandwidth = std::move(arg);
    return Init_DebugMotorState_current_coefficient(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_deceleration_of_link_side
{
public:
  explicit Init_DebugMotorState_deceleration_of_link_side(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_spd_bandwidth deceleration_of_link_side(::h2x::msg::DebugMotorState::_deceleration_of_link_side_type arg)
  {
    msg_.deceleration_of_link_side = std::move(arg);
    return Init_DebugMotorState_spd_bandwidth(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_velocity_ctrl_link_speed_observer_bandwidth
{
public:
  explicit Init_DebugMotorState_velocity_ctrl_link_speed_observer_bandwidth(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_deceleration_of_link_side velocity_ctrl_link_speed_observer_bandwidth(::h2x::msg::DebugMotorState::_velocity_ctrl_link_speed_observer_bandwidth_type arg)
  {
    msg_.velocity_ctrl_link_speed_observer_bandwidth = std::move(arg);
    return Init_DebugMotorState_deceleration_of_link_side(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_align_motor_pos_2_link_pos
{
public:
  explicit Init_DebugMotorState_align_motor_pos_2_link_pos(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_velocity_ctrl_link_speed_observer_bandwidth align_motor_pos_2_link_pos(::h2x::msg::DebugMotorState::_align_motor_pos_2_link_pos_type arg)
  {
    msg_.align_motor_pos_2_link_pos = std::move(arg);
    return Init_DebugMotorState_velocity_ctrl_link_speed_observer_bandwidth(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_position_feedback_encoder_select
{
public:
  explicit Init_DebugMotorState_position_feedback_encoder_select(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_align_motor_pos_2_link_pos position_feedback_encoder_select(::h2x::msg::DebugMotorState::_position_feedback_encoder_select_type arg)
  {
    msg_.position_feedback_encoder_select = std::move(arg);
    return Init_DebugMotorState_align_motor_pos_2_link_pos(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_position_ctrl_vibration_controller_bandwidth
{
public:
  explicit Init_DebugMotorState_position_ctrl_vibration_controller_bandwidth(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_position_feedback_encoder_select position_ctrl_vibration_controller_bandwidth(::h2x::msg::DebugMotorState::_position_ctrl_vibration_controller_bandwidth_type arg)
  {
    msg_.position_ctrl_vibration_controller_bandwidth = std::move(arg);
    return Init_DebugMotorState_position_feedback_encoder_select(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_position_velocity_torque_current_polarity
{
public:
  explicit Init_DebugMotorState_position_velocity_torque_current_polarity(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_position_ctrl_vibration_controller_bandwidth position_velocity_torque_current_polarity(::h2x::msg::DebugMotorState::_position_velocity_torque_current_polarity_type arg)
  {
    msg_.position_velocity_torque_current_polarity = std::move(arg);
    return Init_DebugMotorState_position_ctrl_vibration_controller_bandwidth(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_spd_rmin
{
public:
  explicit Init_DebugMotorState_spd_rmin(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_position_velocity_torque_current_polarity spd_rmin(::h2x::msg::DebugMotorState::_spd_rmin_type arg)
  {
    msg_.spd_rmin = std::move(arg);
    return Init_DebugMotorState_position_velocity_torque_current_polarity(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_spd_rmax
{
public:
  explicit Init_DebugMotorState_spd_rmax(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_spd_rmin spd_rmax(::h2x::msg::DebugMotorState::_spd_rmax_type arg)
  {
    msg_.spd_rmax = std::move(arg);
    return Init_DebugMotorState_spd_rmin(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_spd_ki
{
public:
  explicit Init_DebugMotorState_spd_ki(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_spd_rmax spd_ki(::h2x::msg::DebugMotorState::_spd_ki_type arg)
  {
    msg_.spd_ki = std::move(arg);
    return Init_DebugMotorState_spd_rmax(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_spd_kp
{
public:
  explicit Init_DebugMotorState_spd_kp(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_spd_ki spd_kp(::h2x::msg::DebugMotorState::_spd_kp_type arg)
  {
    msg_.spd_kp = std::move(arg);
    return Init_DebugMotorState_spd_ki(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_spd_coefficient
{
public:
  explicit Init_DebugMotorState_spd_coefficient(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_spd_kp spd_coefficient(::h2x::msg::DebugMotorState::_spd_coefficient_type arg)
  {
    msg_.spd_coefficient = std::move(arg);
    return Init_DebugMotorState_spd_kp(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_max_position
{
public:
  explicit Init_DebugMotorState_max_position(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_spd_coefficient max_position(::h2x::msg::DebugMotorState::_max_position_type arg)
  {
    msg_.max_position = std::move(arg);
    return Init_DebugMotorState_spd_coefficient(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_min_position
{
public:
  explicit Init_DebugMotorState_min_position(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_max_position min_position(::h2x::msg::DebugMotorState::_min_position_type arg)
  {
    msg_.min_position = std::move(arg);
    return Init_DebugMotorState_max_position(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_vibration_dampratio
{
public:
  explicit Init_DebugMotorState_vibration_dampratio(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_min_position vibration_dampratio(::h2x::msg::DebugMotorState::_vibration_dampratio_type arg)
  {
    msg_.vibration_dampratio = std::move(arg);
    return Init_DebugMotorState_min_position(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_pos_kp
{
public:
  explicit Init_DebugMotorState_pos_kp(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_vibration_dampratio pos_kp(::h2x::msg::DebugMotorState::_pos_kp_type arg)
  {
    msg_.pos_kp = std::move(arg);
    return Init_DebugMotorState_vibration_dampratio(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_tx_object_value
{
public:
  explicit Init_DebugMotorState_tx_object_value(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_pos_kp tx_object_value(::h2x::msg::DebugMotorState::_tx_object_value_type arg)
  {
    msg_.tx_object_value = std::move(arg);
    return Init_DebugMotorState_pos_kp(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_tx_object_index
{
public:
  explicit Init_DebugMotorState_tx_object_index(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_tx_object_value tx_object_index(::h2x::msg::DebugMotorState::_tx_object_index_type arg)
  {
    msg_.tx_object_index = std::move(arg);
    return Init_DebugMotorState_tx_object_value(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_joint_torque
{
public:
  explicit Init_DebugMotorState_joint_torque(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_tx_object_index joint_torque(::h2x::msg::DebugMotorState::_joint_torque_type arg)
  {
    msg_.joint_torque = std::move(arg);
    return Init_DebugMotorState_tx_object_index(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motor_current
{
public:
  explicit Init_DebugMotorState_motor_current(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_joint_torque motor_current(::h2x::msg::DebugMotorState::_motor_current_type arg)
  {
    msg_.motor_current = std::move(arg);
    return Init_DebugMotorState_joint_torque(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_joint_speed
{
public:
  explicit Init_DebugMotorState_joint_speed(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motor_current joint_speed(::h2x::msg::DebugMotorState::_joint_speed_type arg)
  {
    msg_.joint_speed = std::move(arg);
    return Init_DebugMotorState_motor_current(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_joint_position
{
public:
  explicit Init_DebugMotorState_joint_position(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_joint_speed joint_position(::h2x::msg::DebugMotorState::_joint_position_type arg)
  {
    msg_.joint_position = std::move(arg);
    return Init_DebugMotorState_joint_speed(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_status_word
{
public:
  explicit Init_DebugMotorState_status_word(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_joint_position status_word(::h2x::msg::DebugMotorState::_status_word_type arg)
  {
    msg_.status_word = std::move(arg);
    return Init_DebugMotorState_joint_position(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_motor_mode
{
public:
  explicit Init_DebugMotorState_motor_mode(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_status_word motor_mode(::h2x::msg::DebugMotorState::_motor_mode_type arg)
  {
    msg_.motor_mode = std::move(arg);
    return Init_DebugMotorState_status_word(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_error_register
{
public:
  explicit Init_DebugMotorState_error_register(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_motor_mode error_register(::h2x::msg::DebugMotorState::_error_register_type arg)
  {
    msg_.error_register = std::move(arg);
    return Init_DebugMotorState_motor_mode(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_frame_counter
{
public:
  explicit Init_DebugMotorState_frame_counter(::h2x::msg::DebugMotorState & msg)
  : msg_(msg)
  {}
  Init_DebugMotorState_error_register frame_counter(::h2x::msg::DebugMotorState::_frame_counter_type arg)
  {
    msg_.frame_counter = std::move(arg);
    return Init_DebugMotorState_error_register(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

class Init_DebugMotorState_slave_id
{
public:
  Init_DebugMotorState_slave_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugMotorState_frame_counter slave_id(::h2x::msg::DebugMotorState::_slave_id_type arg)
  {
    msg_.slave_id = std::move(arg);
    return Init_DebugMotorState_frame_counter(msg_);
  }

private:
  ::h2x::msg::DebugMotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::DebugMotorState>()
{
  return h2x::msg::builder::Init_DebugMotorState_slave_id();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__BUILDER_HPP_
