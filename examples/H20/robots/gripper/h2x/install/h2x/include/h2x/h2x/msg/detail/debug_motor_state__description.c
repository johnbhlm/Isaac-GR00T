// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from h2x:msg/DebugMotorState.idl
// generated code does not contain a copyright notice

#include "h2x/msg/detail/debug_motor_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_h2x
const rosidl_type_hash_t *
h2x__msg__DebugMotorState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf7, 0xc1, 0x22, 0x36, 0x36, 0x4f, 0xb2, 0x0e,
      0x8c, 0x2b, 0x52, 0x62, 0x69, 0x4f, 0x6b, 0xa3,
      0x83, 0xfe, 0xb3, 0xe8, 0x1a, 0x29, 0xf3, 0x84,
      0x2b, 0x29, 0x55, 0x77, 0x78, 0x7d, 0x44, 0x52,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char h2x__msg__DebugMotorState__TYPE_NAME[] = "h2x/msg/DebugMotorState";

// Define type names, field names, and default values
static char h2x__msg__DebugMotorState__FIELD_NAME__slave_id[] = "slave_id";
static char h2x__msg__DebugMotorState__FIELD_NAME__frame_counter[] = "frame_counter";
static char h2x__msg__DebugMotorState__FIELD_NAME__error_register[] = "error_register";
static char h2x__msg__DebugMotorState__FIELD_NAME__motor_mode[] = "motor_mode";
static char h2x__msg__DebugMotorState__FIELD_NAME__status_word[] = "status_word";
static char h2x__msg__DebugMotorState__FIELD_NAME__joint_position[] = "joint_position";
static char h2x__msg__DebugMotorState__FIELD_NAME__joint_speed[] = "joint_speed";
static char h2x__msg__DebugMotorState__FIELD_NAME__motor_current[] = "motor_current";
static char h2x__msg__DebugMotorState__FIELD_NAME__joint_torque[] = "joint_torque";
static char h2x__msg__DebugMotorState__FIELD_NAME__tx_object_index[] = "tx_object_index";
static char h2x__msg__DebugMotorState__FIELD_NAME__tx_object_value[] = "tx_object_value";
static char h2x__msg__DebugMotorState__FIELD_NAME__pos_kp[] = "pos_kp";
static char h2x__msg__DebugMotorState__FIELD_NAME__vibration_dampratio[] = "vibration_dampratio";
static char h2x__msg__DebugMotorState__FIELD_NAME__min_position[] = "min_position";
static char h2x__msg__DebugMotorState__FIELD_NAME__max_position[] = "max_position";
static char h2x__msg__DebugMotorState__FIELD_NAME__spd_coefficient[] = "spd_coefficient";
static char h2x__msg__DebugMotorState__FIELD_NAME__spd_kp[] = "spd_kp";
static char h2x__msg__DebugMotorState__FIELD_NAME__spd_ki[] = "spd_ki";
static char h2x__msg__DebugMotorState__FIELD_NAME__spd_rmax[] = "spd_rmax";
static char h2x__msg__DebugMotorState__FIELD_NAME__spd_rmin[] = "spd_rmin";
static char h2x__msg__DebugMotorState__FIELD_NAME__position_velocity_torque_current_polarity[] = "position_velocity_torque_current_polarity";
static char h2x__msg__DebugMotorState__FIELD_NAME__position_ctrl_vibration_controller_bandwidth[] = "position_ctrl_vibration_controller_bandwidth";
static char h2x__msg__DebugMotorState__FIELD_NAME__position_feedback_encoder_select[] = "position_feedback_encoder_select";
static char h2x__msg__DebugMotorState__FIELD_NAME__align_motor_pos_2_link_pos[] = "align_motor_pos_2_link_pos";
static char h2x__msg__DebugMotorState__FIELD_NAME__velocity_ctrl_link_speed_observer_bandwidth[] = "velocity_ctrl_link_speed_observer_bandwidth";
static char h2x__msg__DebugMotorState__FIELD_NAME__deceleration_of_link_side[] = "deceleration_of_link_side";
static char h2x__msg__DebugMotorState__FIELD_NAME__spd_bandwidth[] = "spd_bandwidth";
static char h2x__msg__DebugMotorState__FIELD_NAME__current_coefficient[] = "current_coefficient";
static char h2x__msg__DebugMotorState__FIELD_NAME__max_motor_torque[] = "max_motor_torque";
static char h2x__msg__DebugMotorState__FIELD_NAME__max_joint_torque[] = "max_joint_torque";
static char h2x__msg__DebugMotorState__FIELD_NAME__torque_a_offset[] = "torque_a_offset";
static char h2x__msg__DebugMotorState__FIELD_NAME__torque_b_offset[] = "torque_b_offset";
static char h2x__msg__DebugMotorState__FIELD_NAME__torque_kp[] = "torque_kp";
static char h2x__msg__DebugMotorState__FIELD_NAME__torque_kd[] = "torque_kd";
static char h2x__msg__DebugMotorState__FIELD_NAME__torque_bfe[] = "torque_bfe";
static char h2x__msg__DebugMotorState__FIELD_NAME__torque_l[] = "torque_l";
static char h2x__msg__DebugMotorState__FIELD_NAME__torque_kfc[] = "torque_kfc";
static char h2x__msg__DebugMotorState__FIELD_NAME__current_torque_coefficient[] = "current_torque_coefficient";
static char h2x__msg__DebugMotorState__FIELD_NAME__led_rgb_ctrl[] = "led_rgb_ctrl";
static char h2x__msg__DebugMotorState__FIELD_NAME__motor_error_configmask[] = "motor_error_configmask";
static char h2x__msg__DebugMotorState__FIELD_NAME__link_error_configmask[] = "link_error_configmask";
static char h2x__msg__DebugMotorState__FIELD_NAME__board_error_configmask[] = "board_error_configmask";
static char h2x__msg__DebugMotorState__FIELD_NAME__joint_error_configmask[] = "joint_error_configmask";
static char h2x__msg__DebugMotorState__FIELD_NAME__ctrl_error_configmask[] = "ctrl_error_configmask";
static char h2x__msg__DebugMotorState__FIELD_NAME__communication_error_configmask[] = "communication_error_configmask";
static char h2x__msg__DebugMotorState__FIELD_NAME__current_ctrl_bandwidth[] = "current_ctrl_bandwidth";
static char h2x__msg__DebugMotorState__FIELD_NAME__current_ctrl_mode[] = "current_ctrl_mode";
static char h2x__msg__DebugMotorState__FIELD_NAME__motor_rs[] = "motor_rs";
static char h2x__msg__DebugMotorState__FIELD_NAME__motor_l[] = "motor_l";
static char h2x__msg__DebugMotorState__FIELD_NAME__motor_ke[] = "motor_ke";
static char h2x__msg__DebugMotorState__FIELD_NAME__motorside_position[] = "motorside_position";
static char h2x__msg__DebugMotorState__FIELD_NAME__linkside_position[] = "linkside_position";
static char h2x__msg__DebugMotorState__FIELD_NAME__friction_ctrl_param1[] = "friction_ctrl_param1";
static char h2x__msg__DebugMotorState__FIELD_NAME__friction_ctrl_param2[] = "friction_ctrl_param2";
static char h2x__msg__DebugMotorState__FIELD_NAME__friction_ctrl_param3[] = "friction_ctrl_param3";
static char h2x__msg__DebugMotorState__FIELD_NAME__friction_ctrl_param4[] = "friction_ctrl_param4";
static char h2x__msg__DebugMotorState__FIELD_NAME__vendor_id[] = "vendor_id";
static char h2x__msg__DebugMotorState__FIELD_NAME__robot_product_code[] = "robot_product_code";
static char h2x__msg__DebugMotorState__FIELD_NAME__robot_version_number[] = "robot_version_number";
static char h2x__msg__DebugMotorState__FIELD_NAME__robot_serial_number[] = "robot_serial_number";
static char h2x__msg__DebugMotorState__FIELD_NAME__joint_type[] = "joint_type";
static char h2x__msg__DebugMotorState__FIELD_NAME__joint_version[] = "joint_version";
static char h2x__msg__DebugMotorState__FIELD_NAME__joint_serial_number[] = "joint_serial_number";
static char h2x__msg__DebugMotorState__FIELD_NAME__firmware_version[] = "firmware_version";
static char h2x__msg__DebugMotorState__FIELD_NAME__bootloader_version[] = "bootloader_version";
static char h2x__msg__DebugMotorState__FIELD_NAME__app_branch_name[] = "app_branch_name";
static char h2x__msg__DebugMotorState__FIELD_NAME__app_tag_sha1_id[] = "app_tag_sha1_id";
static char h2x__msg__DebugMotorState__FIELD_NAME__boot_branch_name[] = "boot_branch_name";
static char h2x__msg__DebugMotorState__FIELD_NAME__boot_tag_sha1_id[] = "boot_tag_sha1_id";
static char h2x__msg__DebugMotorState__FIELD_NAME__link_encoder_calibrated_data[] = "link_encoder_calibrated_data";
static char h2x__msg__DebugMotorState__FIELD_NAME__motor_encoder_calibrated_data[] = "motor_encoder_calibrated_data";
static char h2x__msg__DebugMotorState__FIELD_NAME__a_phase_current_offset[] = "a_phase_current_offset";
static char h2x__msg__DebugMotorState__FIELD_NAME__b_phase_current_offset[] = "b_phase_current_offset";
static char h2x__msg__DebugMotorState__FIELD_NAME__c_phase_current_offset[] = "c_phase_current_offset";
static char h2x__msg__DebugMotorState__FIELD_NAME__bus_current_offset[] = "bus_current_offset";
static char h2x__msg__DebugMotorState__FIELD_NAME__motor_temperature[] = "motor_temperature";
static char h2x__msg__DebugMotorState__FIELD_NAME__drive_temperature[] = "drive_temperature";
static char h2x__msg__DebugMotorState__FIELD_NAME__estimated_temperature1[] = "estimated_temperature1";
static char h2x__msg__DebugMotorState__FIELD_NAME__estimated_temperature2[] = "estimated_temperature2";
static char h2x__msg__DebugMotorState__FIELD_NAME__bus_current[] = "bus_current";
static char h2x__msg__DebugMotorState__FIELD_NAME__bus_voltage[] = "bus_voltage";
static char h2x__msg__DebugMotorState__FIELD_NAME__flag[] = "flag";
static char h2x__msg__DebugMotorState__FIELD_NAME__developer_command_status[] = "developer_command_status";

static rosidl_runtime_c__type_description__Field h2x__msg__DebugMotorState__FIELDS[] = {
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__slave_id, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__frame_counter, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__error_register, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motor_mode, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__status_word, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__joint_position, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__joint_speed, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motor_current, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__joint_torque, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__tx_object_index, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__tx_object_value, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__pos_kp, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__vibration_dampratio, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__min_position, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__max_position, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__spd_coefficient, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__spd_kp, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__spd_ki, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__spd_rmax, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__spd_rmin, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__position_velocity_torque_current_polarity, 41, 41},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__position_ctrl_vibration_controller_bandwidth, 44, 44},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__position_feedback_encoder_select, 32, 32},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__align_motor_pos_2_link_pos, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__velocity_ctrl_link_speed_observer_bandwidth, 43, 43},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__deceleration_of_link_side, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__spd_bandwidth, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__current_coefficient, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__max_motor_torque, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__max_joint_torque, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__torque_a_offset, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__torque_b_offset, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__torque_kp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__torque_kd, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__torque_bfe, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__torque_l, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__torque_kfc, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__current_torque_coefficient, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__led_rgb_ctrl, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motor_error_configmask, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__link_error_configmask, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__board_error_configmask, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__joint_error_configmask, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__ctrl_error_configmask, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__communication_error_configmask, 30, 30},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__current_ctrl_bandwidth, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__current_ctrl_mode, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motor_rs, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motor_l, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motor_ke, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motorside_position, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__linkside_position, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__friction_ctrl_param1, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__friction_ctrl_param2, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__friction_ctrl_param3, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__friction_ctrl_param4, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__vendor_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__robot_product_code, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__robot_version_number, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__robot_serial_number, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__joint_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__joint_version, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__joint_serial_number, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__firmware_version, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__bootloader_version, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__app_branch_name, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__app_tag_sha1_id, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__boot_branch_name, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__boot_tag_sha1_id, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__link_encoder_calibrated_data, 28, 28},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motor_encoder_calibrated_data, 29, 29},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__a_phase_current_offset, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__b_phase_current_offset, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__c_phase_current_offset, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__bus_current_offset, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__motor_temperature, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__drive_temperature, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__estimated_temperature1, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__estimated_temperature2, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__bus_current, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__bus_voltage, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__flag, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {h2x__msg__DebugMotorState__FIELD_NAME__developer_command_status, 24, 24},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
h2x__msg__DebugMotorState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {h2x__msg__DebugMotorState__TYPE_NAME, 23, 23},
      {h2x__msg__DebugMotorState__FIELDS, 83, 83},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 slave_id\n"
  "uint8 frame_counter\n"
  "uint8 error_register\n"
  "uint8 motor_mode\n"
  "uint16 status_word\n"
  "float32 joint_position\n"
  "float32 joint_speed\n"
  "float32 motor_current\n"
  "float32 joint_torque\n"
  "uint16 tx_object_index\n"
  "int32 tx_object_value\n"
  "float32 pos_kp\n"
  "float64 vibration_dampratio\n"
  "float64 min_position\n"
  "float64 max_position\n"
  "float32 spd_coefficient\n"
  "float32 spd_kp\n"
  "float32 spd_ki\n"
  "float32 spd_rmax\n"
  "float32 spd_rmin\n"
  "\n"
  "int32 position_velocity_torque_current_polarity\n"
  "float32 position_ctrl_vibration_controller_bandwidth\n"
  "int32 position_feedback_encoder_select\n"
  "int32 align_motor_pos_2_link_pos\n"
  "int32 velocity_ctrl_link_speed_observer_bandwidth\n"
  "\n"
  "float32 deceleration_of_link_side\n"
  "float32 spd_bandwidth\n"
  "float32 current_coefficient\n"
  "float32 max_motor_torque\n"
  "float32 max_joint_torque\n"
  "float32 torque_a_offset\n"
  "float32 torque_b_offset\n"
  "float32 torque_kp\n"
  "float32 torque_kd\n"
  "float32 torque_bfe\n"
  "float32 torque_l\n"
  "float32 torque_kfc\n"
  "float32 current_torque_coefficient\n"
  "uint32 led_rgb_ctrl\n"
  "uint32 motor_error_configmask\n"
  "uint32 link_error_configmask\n"
  "uint32 board_error_configmask\n"
  "uint32 joint_error_configmask\n"
  "uint32 ctrl_error_configmask\n"
  "uint32 communication_error_configmask\n"
  "int32 current_ctrl_bandwidth\n"
  "int32 current_ctrl_mode\n"
  "int32 motor_rs\n"
  "int32 motor_l\n"
  "int32 motor_ke\n"
  "int32 motorside_position\n"
  "int32 linkside_position\n"
  "int32 friction_ctrl_param1\n"
  "int32 friction_ctrl_param2\n"
  "int32 friction_ctrl_param3\n"
  "int32 friction_ctrl_param4\n"
  "\n"
  "int32 vendor_id\n"
  "int32 robot_product_code\n"
  "int32 robot_version_number\n"
  "int32 robot_serial_number\n"
  "uint32 joint_type\n"
  "uint32 joint_version\n"
  "uint32 joint_serial_number\n"
  "string firmware_version\n"
  "string bootloader_version\n"
  "string app_branch_name\n"
  "string app_tag_sha1_id\n"
  "string boot_branch_name\n"
  "string boot_tag_sha1_id\n"
  "int32 link_encoder_calibrated_data\n"
  "int32 motor_encoder_calibrated_data\n"
  "uint16 a_phase_current_offset\n"
  "uint16 b_phase_current_offset\n"
  "uint16 c_phase_current_offset\n"
  "uint16 bus_current_offset\n"
  "int16 motor_temperature\n"
  "int16 drive_temperature\n"
  "int16 estimated_temperature1\n"
  "int16 estimated_temperature2\n"
  "float32 bus_current\n"
  "float32 bus_voltage\n"
  "uint32 flag\n"
  "int32 developer_command_status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
h2x__msg__DebugMotorState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {h2x__msg__DebugMotorState__TYPE_NAME, 23, 23},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 2069, 2069},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
h2x__msg__DebugMotorState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *h2x__msg__DebugMotorState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
