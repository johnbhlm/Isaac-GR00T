// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from h2x:msg/DebugMotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_motor_state.h"


#ifndef H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__STRUCT_H_
#define H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'firmware_version'
// Member 'bootloader_version'
// Member 'app_branch_name'
// Member 'app_tag_sha1_id'
// Member 'boot_branch_name'
// Member 'boot_tag_sha1_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DebugMotorState in the package h2x.
typedef struct h2x__msg__DebugMotorState
{
  uint8_t slave_id;
  uint8_t frame_counter;
  uint8_t error_register;
  uint8_t motor_mode;
  uint16_t status_word;
  float joint_position;
  float joint_speed;
  float motor_current;
  float joint_torque;
  uint16_t tx_object_index;
  int32_t tx_object_value;
  float pos_kp;
  double vibration_dampratio;
  double min_position;
  double max_position;
  float spd_coefficient;
  float spd_kp;
  float spd_ki;
  float spd_rmax;
  float spd_rmin;
  int32_t position_velocity_torque_current_polarity;
  float position_ctrl_vibration_controller_bandwidth;
  int32_t position_feedback_encoder_select;
  int32_t align_motor_pos_2_link_pos;
  int32_t velocity_ctrl_link_speed_observer_bandwidth;
  float deceleration_of_link_side;
  float spd_bandwidth;
  float current_coefficient;
  float max_motor_torque;
  float max_joint_torque;
  float torque_a_offset;
  float torque_b_offset;
  float torque_kp;
  float torque_kd;
  float torque_bfe;
  float torque_l;
  float torque_kfc;
  float current_torque_coefficient;
  uint32_t led_rgb_ctrl;
  uint32_t motor_error_configmask;
  uint32_t link_error_configmask;
  uint32_t board_error_configmask;
  uint32_t joint_error_configmask;
  uint32_t ctrl_error_configmask;
  uint32_t communication_error_configmask;
  int32_t current_ctrl_bandwidth;
  int32_t current_ctrl_mode;
  int32_t motor_rs;
  int32_t motor_l;
  int32_t motor_ke;
  int32_t motorside_position;
  int32_t linkside_position;
  int32_t friction_ctrl_param1;
  int32_t friction_ctrl_param2;
  int32_t friction_ctrl_param3;
  int32_t friction_ctrl_param4;
  int32_t vendor_id;
  int32_t robot_product_code;
  int32_t robot_version_number;
  int32_t robot_serial_number;
  uint32_t joint_type;
  uint32_t joint_version;
  uint32_t joint_serial_number;
  rosidl_runtime_c__String firmware_version;
  rosidl_runtime_c__String bootloader_version;
  rosidl_runtime_c__String app_branch_name;
  rosidl_runtime_c__String app_tag_sha1_id;
  rosidl_runtime_c__String boot_branch_name;
  rosidl_runtime_c__String boot_tag_sha1_id;
  int32_t link_encoder_calibrated_data;
  int32_t motor_encoder_calibrated_data;
  uint16_t a_phase_current_offset;
  uint16_t b_phase_current_offset;
  uint16_t c_phase_current_offset;
  uint16_t bus_current_offset;
  int16_t motor_temperature;
  int16_t drive_temperature;
  int16_t estimated_temperature1;
  int16_t estimated_temperature2;
  float bus_current;
  float bus_voltage;
  uint32_t flag;
  int32_t developer_command_status;
} h2x__msg__DebugMotorState;

// Struct for a sequence of h2x__msg__DebugMotorState.
typedef struct h2x__msg__DebugMotorState__Sequence
{
  h2x__msg__DebugMotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} h2x__msg__DebugMotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__STRUCT_H_
