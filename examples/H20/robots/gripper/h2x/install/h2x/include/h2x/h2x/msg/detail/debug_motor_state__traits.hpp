// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from h2x:msg/DebugMotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_motor_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__TRAITS_HPP_
#define H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "h2x/msg/detail/debug_motor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace h2x
{

namespace msg
{

inline void to_flow_style_yaml(
  const DebugMotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: slave_id
  {
    out << "slave_id: ";
    rosidl_generator_traits::value_to_yaml(msg.slave_id, out);
    out << ", ";
  }

  // member: frame_counter
  {
    out << "frame_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_counter, out);
    out << ", ";
  }

  // member: error_register
  {
    out << "error_register: ";
    rosidl_generator_traits::value_to_yaml(msg.error_register, out);
    out << ", ";
  }

  // member: motor_mode
  {
    out << "motor_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_mode, out);
    out << ", ";
  }

  // member: status_word
  {
    out << "status_word: ";
    rosidl_generator_traits::value_to_yaml(msg.status_word, out);
    out << ", ";
  }

  // member: joint_position
  {
    out << "joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position, out);
    out << ", ";
  }

  // member: joint_speed
  {
    out << "joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_speed, out);
    out << ", ";
  }

  // member: motor_current
  {
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << ", ";
  }

  // member: joint_torque
  {
    out << "joint_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_torque, out);
    out << ", ";
  }

  // member: tx_object_index
  {
    out << "tx_object_index: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_object_index, out);
    out << ", ";
  }

  // member: tx_object_value
  {
    out << "tx_object_value: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_object_value, out);
    out << ", ";
  }

  // member: pos_kp
  {
    out << "pos_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_kp, out);
    out << ", ";
  }

  // member: vibration_dampratio
  {
    out << "vibration_dampratio: ";
    rosidl_generator_traits::value_to_yaml(msg.vibration_dampratio, out);
    out << ", ";
  }

  // member: min_position
  {
    out << "min_position: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position, out);
    out << ", ";
  }

  // member: max_position
  {
    out << "max_position: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position, out);
    out << ", ";
  }

  // member: spd_coefficient
  {
    out << "spd_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_coefficient, out);
    out << ", ";
  }

  // member: spd_kp
  {
    out << "spd_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_kp, out);
    out << ", ";
  }

  // member: spd_ki
  {
    out << "spd_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_ki, out);
    out << ", ";
  }

  // member: spd_rmax
  {
    out << "spd_rmax: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_rmax, out);
    out << ", ";
  }

  // member: spd_rmin
  {
    out << "spd_rmin: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_rmin, out);
    out << ", ";
  }

  // member: position_velocity_torque_current_polarity
  {
    out << "position_velocity_torque_current_polarity: ";
    rosidl_generator_traits::value_to_yaml(msg.position_velocity_torque_current_polarity, out);
    out << ", ";
  }

  // member: position_ctrl_vibration_controller_bandwidth
  {
    out << "position_ctrl_vibration_controller_bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.position_ctrl_vibration_controller_bandwidth, out);
    out << ", ";
  }

  // member: position_feedback_encoder_select
  {
    out << "position_feedback_encoder_select: ";
    rosidl_generator_traits::value_to_yaml(msg.position_feedback_encoder_select, out);
    out << ", ";
  }

  // member: align_motor_pos_2_link_pos
  {
    out << "align_motor_pos_2_link_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.align_motor_pos_2_link_pos, out);
    out << ", ";
  }

  // member: velocity_ctrl_link_speed_observer_bandwidth
  {
    out << "velocity_ctrl_link_speed_observer_bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ctrl_link_speed_observer_bandwidth, out);
    out << ", ";
  }

  // member: deceleration_of_link_side
  {
    out << "deceleration_of_link_side: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration_of_link_side, out);
    out << ", ";
  }

  // member: spd_bandwidth
  {
    out << "spd_bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_bandwidth, out);
    out << ", ";
  }

  // member: current_coefficient
  {
    out << "current_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.current_coefficient, out);
    out << ", ";
  }

  // member: max_motor_torque
  {
    out << "max_motor_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.max_motor_torque, out);
    out << ", ";
  }

  // member: max_joint_torque
  {
    out << "max_joint_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.max_joint_torque, out);
    out << ", ";
  }

  // member: torque_a_offset
  {
    out << "torque_a_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_a_offset, out);
    out << ", ";
  }

  // member: torque_b_offset
  {
    out << "torque_b_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_b_offset, out);
    out << ", ";
  }

  // member: torque_kp
  {
    out << "torque_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_kp, out);
    out << ", ";
  }

  // member: torque_kd
  {
    out << "torque_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_kd, out);
    out << ", ";
  }

  // member: torque_bfe
  {
    out << "torque_bfe: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_bfe, out);
    out << ", ";
  }

  // member: torque_l
  {
    out << "torque_l: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_l, out);
    out << ", ";
  }

  // member: torque_kfc
  {
    out << "torque_kfc: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_kfc, out);
    out << ", ";
  }

  // member: current_torque_coefficient
  {
    out << "current_torque_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.current_torque_coefficient, out);
    out << ", ";
  }

  // member: led_rgb_ctrl
  {
    out << "led_rgb_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.led_rgb_ctrl, out);
    out << ", ";
  }

  // member: motor_error_configmask
  {
    out << "motor_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_error_configmask, out);
    out << ", ";
  }

  // member: link_error_configmask
  {
    out << "link_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.link_error_configmask, out);
    out << ", ";
  }

  // member: board_error_configmask
  {
    out << "board_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.board_error_configmask, out);
    out << ", ";
  }

  // member: joint_error_configmask
  {
    out << "joint_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_error_configmask, out);
    out << ", ";
  }

  // member: ctrl_error_configmask
  {
    out << "ctrl_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_error_configmask, out);
    out << ", ";
  }

  // member: communication_error_configmask
  {
    out << "communication_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_error_configmask, out);
    out << ", ";
  }

  // member: current_ctrl_bandwidth
  {
    out << "current_ctrl_bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ctrl_bandwidth, out);
    out << ", ";
  }

  // member: current_ctrl_mode
  {
    out << "current_ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ctrl_mode, out);
    out << ", ";
  }

  // member: motor_rs
  {
    out << "motor_rs: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_rs, out);
    out << ", ";
  }

  // member: motor_l
  {
    out << "motor_l: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_l, out);
    out << ", ";
  }

  // member: motor_ke
  {
    out << "motor_ke: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_ke, out);
    out << ", ";
  }

  // member: motorside_position
  {
    out << "motorside_position: ";
    rosidl_generator_traits::value_to_yaml(msg.motorside_position, out);
    out << ", ";
  }

  // member: linkside_position
  {
    out << "linkside_position: ";
    rosidl_generator_traits::value_to_yaml(msg.linkside_position, out);
    out << ", ";
  }

  // member: friction_ctrl_param1
  {
    out << "friction_ctrl_param1: ";
    rosidl_generator_traits::value_to_yaml(msg.friction_ctrl_param1, out);
    out << ", ";
  }

  // member: friction_ctrl_param2
  {
    out << "friction_ctrl_param2: ";
    rosidl_generator_traits::value_to_yaml(msg.friction_ctrl_param2, out);
    out << ", ";
  }

  // member: friction_ctrl_param3
  {
    out << "friction_ctrl_param3: ";
    rosidl_generator_traits::value_to_yaml(msg.friction_ctrl_param3, out);
    out << ", ";
  }

  // member: friction_ctrl_param4
  {
    out << "friction_ctrl_param4: ";
    rosidl_generator_traits::value_to_yaml(msg.friction_ctrl_param4, out);
    out << ", ";
  }

  // member: vendor_id
  {
    out << "vendor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vendor_id, out);
    out << ", ";
  }

  // member: robot_product_code
  {
    out << "robot_product_code: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_product_code, out);
    out << ", ";
  }

  // member: robot_version_number
  {
    out << "robot_version_number: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_version_number, out);
    out << ", ";
  }

  // member: robot_serial_number
  {
    out << "robot_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_serial_number, out);
    out << ", ";
  }

  // member: joint_type
  {
    out << "joint_type: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_type, out);
    out << ", ";
  }

  // member: joint_version
  {
    out << "joint_version: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_version, out);
    out << ", ";
  }

  // member: joint_serial_number
  {
    out << "joint_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_serial_number, out);
    out << ", ";
  }

  // member: firmware_version
  {
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << ", ";
  }

  // member: bootloader_version
  {
    out << "bootloader_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bootloader_version, out);
    out << ", ";
  }

  // member: app_branch_name
  {
    out << "app_branch_name: ";
    rosidl_generator_traits::value_to_yaml(msg.app_branch_name, out);
    out << ", ";
  }

  // member: app_tag_sha1_id
  {
    out << "app_tag_sha1_id: ";
    rosidl_generator_traits::value_to_yaml(msg.app_tag_sha1_id, out);
    out << ", ";
  }

  // member: boot_branch_name
  {
    out << "boot_branch_name: ";
    rosidl_generator_traits::value_to_yaml(msg.boot_branch_name, out);
    out << ", ";
  }

  // member: boot_tag_sha1_id
  {
    out << "boot_tag_sha1_id: ";
    rosidl_generator_traits::value_to_yaml(msg.boot_tag_sha1_id, out);
    out << ", ";
  }

  // member: link_encoder_calibrated_data
  {
    out << "link_encoder_calibrated_data: ";
    rosidl_generator_traits::value_to_yaml(msg.link_encoder_calibrated_data, out);
    out << ", ";
  }

  // member: motor_encoder_calibrated_data
  {
    out << "motor_encoder_calibrated_data: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_encoder_calibrated_data, out);
    out << ", ";
  }

  // member: a_phase_current_offset
  {
    out << "a_phase_current_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.a_phase_current_offset, out);
    out << ", ";
  }

  // member: b_phase_current_offset
  {
    out << "b_phase_current_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.b_phase_current_offset, out);
    out << ", ";
  }

  // member: c_phase_current_offset
  {
    out << "c_phase_current_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.c_phase_current_offset, out);
    out << ", ";
  }

  // member: bus_current_offset
  {
    out << "bus_current_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_current_offset, out);
    out << ", ";
  }

  // member: motor_temperature
  {
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << ", ";
  }

  // member: drive_temperature
  {
    out << "drive_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_temperature, out);
    out << ", ";
  }

  // member: estimated_temperature1
  {
    out << "estimated_temperature1: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_temperature1, out);
    out << ", ";
  }

  // member: estimated_temperature2
  {
    out << "estimated_temperature2: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_temperature2, out);
    out << ", ";
  }

  // member: bus_current
  {
    out << "bus_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_current, out);
    out << ", ";
  }

  // member: bus_voltage
  {
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << ", ";
  }

  // member: flag
  {
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << ", ";
  }

  // member: developer_command_status
  {
    out << "developer_command_status: ";
    rosidl_generator_traits::value_to_yaml(msg.developer_command_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DebugMotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: slave_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slave_id: ";
    rosidl_generator_traits::value_to_yaml(msg.slave_id, out);
    out << "\n";
  }

  // member: frame_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_counter, out);
    out << "\n";
  }

  // member: error_register
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_register: ";
    rosidl_generator_traits::value_to_yaml(msg.error_register, out);
    out << "\n";
  }

  // member: motor_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_mode, out);
    out << "\n";
  }

  // member: status_word
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_word: ";
    rosidl_generator_traits::value_to_yaml(msg.status_word, out);
    out << "\n";
  }

  // member: joint_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_position: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_position, out);
    out << "\n";
  }

  // member: joint_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_speed, out);
    out << "\n";
  }

  // member: motor_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_current: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_current, out);
    out << "\n";
  }

  // member: joint_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_torque, out);
    out << "\n";
  }

  // member: tx_object_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_object_index: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_object_index, out);
    out << "\n";
  }

  // member: tx_object_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tx_object_value: ";
    rosidl_generator_traits::value_to_yaml(msg.tx_object_value, out);
    out << "\n";
  }

  // member: pos_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_kp, out);
    out << "\n";
  }

  // member: vibration_dampratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vibration_dampratio: ";
    rosidl_generator_traits::value_to_yaml(msg.vibration_dampratio, out);
    out << "\n";
  }

  // member: min_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_position: ";
    rosidl_generator_traits::value_to_yaml(msg.min_position, out);
    out << "\n";
  }

  // member: max_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_position: ";
    rosidl_generator_traits::value_to_yaml(msg.max_position, out);
    out << "\n";
  }

  // member: spd_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_coefficient, out);
    out << "\n";
  }

  // member: spd_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_kp, out);
    out << "\n";
  }

  // member: spd_ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_ki, out);
    out << "\n";
  }

  // member: spd_rmax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd_rmax: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_rmax, out);
    out << "\n";
  }

  // member: spd_rmin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd_rmin: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_rmin, out);
    out << "\n";
  }

  // member: position_velocity_torque_current_polarity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_velocity_torque_current_polarity: ";
    rosidl_generator_traits::value_to_yaml(msg.position_velocity_torque_current_polarity, out);
    out << "\n";
  }

  // member: position_ctrl_vibration_controller_bandwidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_ctrl_vibration_controller_bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.position_ctrl_vibration_controller_bandwidth, out);
    out << "\n";
  }

  // member: position_feedback_encoder_select
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_feedback_encoder_select: ";
    rosidl_generator_traits::value_to_yaml(msg.position_feedback_encoder_select, out);
    out << "\n";
  }

  // member: align_motor_pos_2_link_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "align_motor_pos_2_link_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.align_motor_pos_2_link_pos, out);
    out << "\n";
  }

  // member: velocity_ctrl_link_speed_observer_bandwidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_ctrl_link_speed_observer_bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_ctrl_link_speed_observer_bandwidth, out);
    out << "\n";
  }

  // member: deceleration_of_link_side
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deceleration_of_link_side: ";
    rosidl_generator_traits::value_to_yaml(msg.deceleration_of_link_side, out);
    out << "\n";
  }

  // member: spd_bandwidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spd_bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.spd_bandwidth, out);
    out << "\n";
  }

  // member: current_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.current_coefficient, out);
    out << "\n";
  }

  // member: max_motor_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_motor_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.max_motor_torque, out);
    out << "\n";
  }

  // member: max_joint_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_joint_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.max_joint_torque, out);
    out << "\n";
  }

  // member: torque_a_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_a_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_a_offset, out);
    out << "\n";
  }

  // member: torque_b_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_b_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_b_offset, out);
    out << "\n";
  }

  // member: torque_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_kp, out);
    out << "\n";
  }

  // member: torque_kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_kd, out);
    out << "\n";
  }

  // member: torque_bfe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_bfe: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_bfe, out);
    out << "\n";
  }

  // member: torque_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_l: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_l, out);
    out << "\n";
  }

  // member: torque_kfc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_kfc: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_kfc, out);
    out << "\n";
  }

  // member: current_torque_coefficient
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_torque_coefficient: ";
    rosidl_generator_traits::value_to_yaml(msg.current_torque_coefficient, out);
    out << "\n";
  }

  // member: led_rgb_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_rgb_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.led_rgb_ctrl, out);
    out << "\n";
  }

  // member: motor_error_configmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_error_configmask, out);
    out << "\n";
  }

  // member: link_error_configmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.link_error_configmask, out);
    out << "\n";
  }

  // member: board_error_configmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.board_error_configmask, out);
    out << "\n";
  }

  // member: joint_error_configmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_error_configmask, out);
    out << "\n";
  }

  // member: ctrl_error_configmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ctrl_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.ctrl_error_configmask, out);
    out << "\n";
  }

  // member: communication_error_configmask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "communication_error_configmask: ";
    rosidl_generator_traits::value_to_yaml(msg.communication_error_configmask, out);
    out << "\n";
  }

  // member: current_ctrl_bandwidth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_ctrl_bandwidth: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ctrl_bandwidth, out);
    out << "\n";
  }

  // member: current_ctrl_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_ctrl_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ctrl_mode, out);
    out << "\n";
  }

  // member: motor_rs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_rs: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_rs, out);
    out << "\n";
  }

  // member: motor_l
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_l: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_l, out);
    out << "\n";
  }

  // member: motor_ke
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_ke: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_ke, out);
    out << "\n";
  }

  // member: motorside_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motorside_position: ";
    rosidl_generator_traits::value_to_yaml(msg.motorside_position, out);
    out << "\n";
  }

  // member: linkside_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linkside_position: ";
    rosidl_generator_traits::value_to_yaml(msg.linkside_position, out);
    out << "\n";
  }

  // member: friction_ctrl_param1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction_ctrl_param1: ";
    rosidl_generator_traits::value_to_yaml(msg.friction_ctrl_param1, out);
    out << "\n";
  }

  // member: friction_ctrl_param2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction_ctrl_param2: ";
    rosidl_generator_traits::value_to_yaml(msg.friction_ctrl_param2, out);
    out << "\n";
  }

  // member: friction_ctrl_param3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction_ctrl_param3: ";
    rosidl_generator_traits::value_to_yaml(msg.friction_ctrl_param3, out);
    out << "\n";
  }

  // member: friction_ctrl_param4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "friction_ctrl_param4: ";
    rosidl_generator_traits::value_to_yaml(msg.friction_ctrl_param4, out);
    out << "\n";
  }

  // member: vendor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vendor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.vendor_id, out);
    out << "\n";
  }

  // member: robot_product_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_product_code: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_product_code, out);
    out << "\n";
  }

  // member: robot_version_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_version_number: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_version_number, out);
    out << "\n";
  }

  // member: robot_serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_serial_number, out);
    out << "\n";
  }

  // member: joint_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_type: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_type, out);
    out << "\n";
  }

  // member: joint_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_version: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_version, out);
    out << "\n";
  }

  // member: joint_serial_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_serial_number: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_serial_number, out);
    out << "\n";
  }

  // member: firmware_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "firmware_version: ";
    rosidl_generator_traits::value_to_yaml(msg.firmware_version, out);
    out << "\n";
  }

  // member: bootloader_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bootloader_version: ";
    rosidl_generator_traits::value_to_yaml(msg.bootloader_version, out);
    out << "\n";
  }

  // member: app_branch_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_branch_name: ";
    rosidl_generator_traits::value_to_yaml(msg.app_branch_name, out);
    out << "\n";
  }

  // member: app_tag_sha1_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "app_tag_sha1_id: ";
    rosidl_generator_traits::value_to_yaml(msg.app_tag_sha1_id, out);
    out << "\n";
  }

  // member: boot_branch_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boot_branch_name: ";
    rosidl_generator_traits::value_to_yaml(msg.boot_branch_name, out);
    out << "\n";
  }

  // member: boot_tag_sha1_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "boot_tag_sha1_id: ";
    rosidl_generator_traits::value_to_yaml(msg.boot_tag_sha1_id, out);
    out << "\n";
  }

  // member: link_encoder_calibrated_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_encoder_calibrated_data: ";
    rosidl_generator_traits::value_to_yaml(msg.link_encoder_calibrated_data, out);
    out << "\n";
  }

  // member: motor_encoder_calibrated_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_encoder_calibrated_data: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_encoder_calibrated_data, out);
    out << "\n";
  }

  // member: a_phase_current_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_phase_current_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.a_phase_current_offset, out);
    out << "\n";
  }

  // member: b_phase_current_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b_phase_current_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.b_phase_current_offset, out);
    out << "\n";
  }

  // member: c_phase_current_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_phase_current_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.c_phase_current_offset, out);
    out << "\n";
  }

  // member: bus_current_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_current_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_current_offset, out);
    out << "\n";
  }

  // member: motor_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_temperature, out);
    out << "\n";
  }

  // member: drive_temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drive_temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.drive_temperature, out);
    out << "\n";
  }

  // member: estimated_temperature1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_temperature1: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_temperature1, out);
    out << "\n";
  }

  // member: estimated_temperature2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estimated_temperature2: ";
    rosidl_generator_traits::value_to_yaml(msg.estimated_temperature2, out);
    out << "\n";
  }

  // member: bus_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_current: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_current, out);
    out << "\n";
  }

  // member: bus_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bus_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.bus_voltage, out);
    out << "\n";
  }

  // member: flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag: ";
    rosidl_generator_traits::value_to_yaml(msg.flag, out);
    out << "\n";
  }

  // member: developer_command_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "developer_command_status: ";
    rosidl_generator_traits::value_to_yaml(msg.developer_command_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DebugMotorState & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace h2x

namespace rosidl_generator_traits
{

[[deprecated("use h2x::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const h2x::msg::DebugMotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  h2x::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use h2x::msg::to_yaml() instead")]]
inline std::string to_yaml(const h2x::msg::DebugMotorState & msg)
{
  return h2x::msg::to_yaml(msg);
}

template<>
inline const char * data_type<h2x::msg::DebugMotorState>()
{
  return "h2x::msg::DebugMotorState";
}

template<>
inline const char * name<h2x::msg::DebugMotorState>()
{
  return "h2x/msg/DebugMotorState";
}

template<>
struct has_fixed_size<h2x::msg::DebugMotorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<h2x::msg::DebugMotorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<h2x::msg::DebugMotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__TRAITS_HPP_
