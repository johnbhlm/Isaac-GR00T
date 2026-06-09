// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from h2x:msg/DebugMotorState.idl
// generated code does not contain a copyright notice
#include "h2x/msg/detail/debug_motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `firmware_version`
// Member `bootloader_version`
// Member `app_branch_name`
// Member `app_tag_sha1_id`
// Member `boot_branch_name`
// Member `boot_tag_sha1_id`
#include "rosidl_runtime_c/string_functions.h"

bool
h2x__msg__DebugMotorState__init(h2x__msg__DebugMotorState * msg)
{
  if (!msg) {
    return false;
  }
  // slave_id
  // frame_counter
  // error_register
  // motor_mode
  // status_word
  // joint_position
  // joint_speed
  // motor_current
  // joint_torque
  // tx_object_index
  // tx_object_value
  // pos_kp
  // vibration_dampratio
  // min_position
  // max_position
  // spd_coefficient
  // spd_kp
  // spd_ki
  // spd_rmax
  // spd_rmin
  // position_velocity_torque_current_polarity
  // position_ctrl_vibration_controller_bandwidth
  // position_feedback_encoder_select
  // align_motor_pos_2_link_pos
  // velocity_ctrl_link_speed_observer_bandwidth
  // deceleration_of_link_side
  // spd_bandwidth
  // current_coefficient
  // max_motor_torque
  // max_joint_torque
  // torque_a_offset
  // torque_b_offset
  // torque_kp
  // torque_kd
  // torque_bfe
  // torque_l
  // torque_kfc
  // current_torque_coefficient
  // led_rgb_ctrl
  // motor_error_configmask
  // link_error_configmask
  // board_error_configmask
  // joint_error_configmask
  // ctrl_error_configmask
  // communication_error_configmask
  // current_ctrl_bandwidth
  // current_ctrl_mode
  // motor_rs
  // motor_l
  // motor_ke
  // motorside_position
  // linkside_position
  // friction_ctrl_param1
  // friction_ctrl_param2
  // friction_ctrl_param3
  // friction_ctrl_param4
  // vendor_id
  // robot_product_code
  // robot_version_number
  // robot_serial_number
  // joint_type
  // joint_version
  // joint_serial_number
  // firmware_version
  if (!rosidl_runtime_c__String__init(&msg->firmware_version)) {
    h2x__msg__DebugMotorState__fini(msg);
    return false;
  }
  // bootloader_version
  if (!rosidl_runtime_c__String__init(&msg->bootloader_version)) {
    h2x__msg__DebugMotorState__fini(msg);
    return false;
  }
  // app_branch_name
  if (!rosidl_runtime_c__String__init(&msg->app_branch_name)) {
    h2x__msg__DebugMotorState__fini(msg);
    return false;
  }
  // app_tag_sha1_id
  if (!rosidl_runtime_c__String__init(&msg->app_tag_sha1_id)) {
    h2x__msg__DebugMotorState__fini(msg);
    return false;
  }
  // boot_branch_name
  if (!rosidl_runtime_c__String__init(&msg->boot_branch_name)) {
    h2x__msg__DebugMotorState__fini(msg);
    return false;
  }
  // boot_tag_sha1_id
  if (!rosidl_runtime_c__String__init(&msg->boot_tag_sha1_id)) {
    h2x__msg__DebugMotorState__fini(msg);
    return false;
  }
  // link_encoder_calibrated_data
  // motor_encoder_calibrated_data
  // a_phase_current_offset
  // b_phase_current_offset
  // c_phase_current_offset
  // bus_current_offset
  // motor_temperature
  // drive_temperature
  // estimated_temperature1
  // estimated_temperature2
  // bus_current
  // bus_voltage
  // flag
  // developer_command_status
  return true;
}

void
h2x__msg__DebugMotorState__fini(h2x__msg__DebugMotorState * msg)
{
  if (!msg) {
    return;
  }
  // slave_id
  // frame_counter
  // error_register
  // motor_mode
  // status_word
  // joint_position
  // joint_speed
  // motor_current
  // joint_torque
  // tx_object_index
  // tx_object_value
  // pos_kp
  // vibration_dampratio
  // min_position
  // max_position
  // spd_coefficient
  // spd_kp
  // spd_ki
  // spd_rmax
  // spd_rmin
  // position_velocity_torque_current_polarity
  // position_ctrl_vibration_controller_bandwidth
  // position_feedback_encoder_select
  // align_motor_pos_2_link_pos
  // velocity_ctrl_link_speed_observer_bandwidth
  // deceleration_of_link_side
  // spd_bandwidth
  // current_coefficient
  // max_motor_torque
  // max_joint_torque
  // torque_a_offset
  // torque_b_offset
  // torque_kp
  // torque_kd
  // torque_bfe
  // torque_l
  // torque_kfc
  // current_torque_coefficient
  // led_rgb_ctrl
  // motor_error_configmask
  // link_error_configmask
  // board_error_configmask
  // joint_error_configmask
  // ctrl_error_configmask
  // communication_error_configmask
  // current_ctrl_bandwidth
  // current_ctrl_mode
  // motor_rs
  // motor_l
  // motor_ke
  // motorside_position
  // linkside_position
  // friction_ctrl_param1
  // friction_ctrl_param2
  // friction_ctrl_param3
  // friction_ctrl_param4
  // vendor_id
  // robot_product_code
  // robot_version_number
  // robot_serial_number
  // joint_type
  // joint_version
  // joint_serial_number
  // firmware_version
  rosidl_runtime_c__String__fini(&msg->firmware_version);
  // bootloader_version
  rosidl_runtime_c__String__fini(&msg->bootloader_version);
  // app_branch_name
  rosidl_runtime_c__String__fini(&msg->app_branch_name);
  // app_tag_sha1_id
  rosidl_runtime_c__String__fini(&msg->app_tag_sha1_id);
  // boot_branch_name
  rosidl_runtime_c__String__fini(&msg->boot_branch_name);
  // boot_tag_sha1_id
  rosidl_runtime_c__String__fini(&msg->boot_tag_sha1_id);
  // link_encoder_calibrated_data
  // motor_encoder_calibrated_data
  // a_phase_current_offset
  // b_phase_current_offset
  // c_phase_current_offset
  // bus_current_offset
  // motor_temperature
  // drive_temperature
  // estimated_temperature1
  // estimated_temperature2
  // bus_current
  // bus_voltage
  // flag
  // developer_command_status
}

bool
h2x__msg__DebugMotorState__are_equal(const h2x__msg__DebugMotorState * lhs, const h2x__msg__DebugMotorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // slave_id
  if (lhs->slave_id != rhs->slave_id) {
    return false;
  }
  // frame_counter
  if (lhs->frame_counter != rhs->frame_counter) {
    return false;
  }
  // error_register
  if (lhs->error_register != rhs->error_register) {
    return false;
  }
  // motor_mode
  if (lhs->motor_mode != rhs->motor_mode) {
    return false;
  }
  // status_word
  if (lhs->status_word != rhs->status_word) {
    return false;
  }
  // joint_position
  if (lhs->joint_position != rhs->joint_position) {
    return false;
  }
  // joint_speed
  if (lhs->joint_speed != rhs->joint_speed) {
    return false;
  }
  // motor_current
  if (lhs->motor_current != rhs->motor_current) {
    return false;
  }
  // joint_torque
  if (lhs->joint_torque != rhs->joint_torque) {
    return false;
  }
  // tx_object_index
  if (lhs->tx_object_index != rhs->tx_object_index) {
    return false;
  }
  // tx_object_value
  if (lhs->tx_object_value != rhs->tx_object_value) {
    return false;
  }
  // pos_kp
  if (lhs->pos_kp != rhs->pos_kp) {
    return false;
  }
  // vibration_dampratio
  if (lhs->vibration_dampratio != rhs->vibration_dampratio) {
    return false;
  }
  // min_position
  if (lhs->min_position != rhs->min_position) {
    return false;
  }
  // max_position
  if (lhs->max_position != rhs->max_position) {
    return false;
  }
  // spd_coefficient
  if (lhs->spd_coefficient != rhs->spd_coefficient) {
    return false;
  }
  // spd_kp
  if (lhs->spd_kp != rhs->spd_kp) {
    return false;
  }
  // spd_ki
  if (lhs->spd_ki != rhs->spd_ki) {
    return false;
  }
  // spd_rmax
  if (lhs->spd_rmax != rhs->spd_rmax) {
    return false;
  }
  // spd_rmin
  if (lhs->spd_rmin != rhs->spd_rmin) {
    return false;
  }
  // position_velocity_torque_current_polarity
  if (lhs->position_velocity_torque_current_polarity != rhs->position_velocity_torque_current_polarity) {
    return false;
  }
  // position_ctrl_vibration_controller_bandwidth
  if (lhs->position_ctrl_vibration_controller_bandwidth != rhs->position_ctrl_vibration_controller_bandwidth) {
    return false;
  }
  // position_feedback_encoder_select
  if (lhs->position_feedback_encoder_select != rhs->position_feedback_encoder_select) {
    return false;
  }
  // align_motor_pos_2_link_pos
  if (lhs->align_motor_pos_2_link_pos != rhs->align_motor_pos_2_link_pos) {
    return false;
  }
  // velocity_ctrl_link_speed_observer_bandwidth
  if (lhs->velocity_ctrl_link_speed_observer_bandwidth != rhs->velocity_ctrl_link_speed_observer_bandwidth) {
    return false;
  }
  // deceleration_of_link_side
  if (lhs->deceleration_of_link_side != rhs->deceleration_of_link_side) {
    return false;
  }
  // spd_bandwidth
  if (lhs->spd_bandwidth != rhs->spd_bandwidth) {
    return false;
  }
  // current_coefficient
  if (lhs->current_coefficient != rhs->current_coefficient) {
    return false;
  }
  // max_motor_torque
  if (lhs->max_motor_torque != rhs->max_motor_torque) {
    return false;
  }
  // max_joint_torque
  if (lhs->max_joint_torque != rhs->max_joint_torque) {
    return false;
  }
  // torque_a_offset
  if (lhs->torque_a_offset != rhs->torque_a_offset) {
    return false;
  }
  // torque_b_offset
  if (lhs->torque_b_offset != rhs->torque_b_offset) {
    return false;
  }
  // torque_kp
  if (lhs->torque_kp != rhs->torque_kp) {
    return false;
  }
  // torque_kd
  if (lhs->torque_kd != rhs->torque_kd) {
    return false;
  }
  // torque_bfe
  if (lhs->torque_bfe != rhs->torque_bfe) {
    return false;
  }
  // torque_l
  if (lhs->torque_l != rhs->torque_l) {
    return false;
  }
  // torque_kfc
  if (lhs->torque_kfc != rhs->torque_kfc) {
    return false;
  }
  // current_torque_coefficient
  if (lhs->current_torque_coefficient != rhs->current_torque_coefficient) {
    return false;
  }
  // led_rgb_ctrl
  if (lhs->led_rgb_ctrl != rhs->led_rgb_ctrl) {
    return false;
  }
  // motor_error_configmask
  if (lhs->motor_error_configmask != rhs->motor_error_configmask) {
    return false;
  }
  // link_error_configmask
  if (lhs->link_error_configmask != rhs->link_error_configmask) {
    return false;
  }
  // board_error_configmask
  if (lhs->board_error_configmask != rhs->board_error_configmask) {
    return false;
  }
  // joint_error_configmask
  if (lhs->joint_error_configmask != rhs->joint_error_configmask) {
    return false;
  }
  // ctrl_error_configmask
  if (lhs->ctrl_error_configmask != rhs->ctrl_error_configmask) {
    return false;
  }
  // communication_error_configmask
  if (lhs->communication_error_configmask != rhs->communication_error_configmask) {
    return false;
  }
  // current_ctrl_bandwidth
  if (lhs->current_ctrl_bandwidth != rhs->current_ctrl_bandwidth) {
    return false;
  }
  // current_ctrl_mode
  if (lhs->current_ctrl_mode != rhs->current_ctrl_mode) {
    return false;
  }
  // motor_rs
  if (lhs->motor_rs != rhs->motor_rs) {
    return false;
  }
  // motor_l
  if (lhs->motor_l != rhs->motor_l) {
    return false;
  }
  // motor_ke
  if (lhs->motor_ke != rhs->motor_ke) {
    return false;
  }
  // motorside_position
  if (lhs->motorside_position != rhs->motorside_position) {
    return false;
  }
  // linkside_position
  if (lhs->linkside_position != rhs->linkside_position) {
    return false;
  }
  // friction_ctrl_param1
  if (lhs->friction_ctrl_param1 != rhs->friction_ctrl_param1) {
    return false;
  }
  // friction_ctrl_param2
  if (lhs->friction_ctrl_param2 != rhs->friction_ctrl_param2) {
    return false;
  }
  // friction_ctrl_param3
  if (lhs->friction_ctrl_param3 != rhs->friction_ctrl_param3) {
    return false;
  }
  // friction_ctrl_param4
  if (lhs->friction_ctrl_param4 != rhs->friction_ctrl_param4) {
    return false;
  }
  // vendor_id
  if (lhs->vendor_id != rhs->vendor_id) {
    return false;
  }
  // robot_product_code
  if (lhs->robot_product_code != rhs->robot_product_code) {
    return false;
  }
  // robot_version_number
  if (lhs->robot_version_number != rhs->robot_version_number) {
    return false;
  }
  // robot_serial_number
  if (lhs->robot_serial_number != rhs->robot_serial_number) {
    return false;
  }
  // joint_type
  if (lhs->joint_type != rhs->joint_type) {
    return false;
  }
  // joint_version
  if (lhs->joint_version != rhs->joint_version) {
    return false;
  }
  // joint_serial_number
  if (lhs->joint_serial_number != rhs->joint_serial_number) {
    return false;
  }
  // firmware_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->firmware_version), &(rhs->firmware_version)))
  {
    return false;
  }
  // bootloader_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->bootloader_version), &(rhs->bootloader_version)))
  {
    return false;
  }
  // app_branch_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->app_branch_name), &(rhs->app_branch_name)))
  {
    return false;
  }
  // app_tag_sha1_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->app_tag_sha1_id), &(rhs->app_tag_sha1_id)))
  {
    return false;
  }
  // boot_branch_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->boot_branch_name), &(rhs->boot_branch_name)))
  {
    return false;
  }
  // boot_tag_sha1_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->boot_tag_sha1_id), &(rhs->boot_tag_sha1_id)))
  {
    return false;
  }
  // link_encoder_calibrated_data
  if (lhs->link_encoder_calibrated_data != rhs->link_encoder_calibrated_data) {
    return false;
  }
  // motor_encoder_calibrated_data
  if (lhs->motor_encoder_calibrated_data != rhs->motor_encoder_calibrated_data) {
    return false;
  }
  // a_phase_current_offset
  if (lhs->a_phase_current_offset != rhs->a_phase_current_offset) {
    return false;
  }
  // b_phase_current_offset
  if (lhs->b_phase_current_offset != rhs->b_phase_current_offset) {
    return false;
  }
  // c_phase_current_offset
  if (lhs->c_phase_current_offset != rhs->c_phase_current_offset) {
    return false;
  }
  // bus_current_offset
  if (lhs->bus_current_offset != rhs->bus_current_offset) {
    return false;
  }
  // motor_temperature
  if (lhs->motor_temperature != rhs->motor_temperature) {
    return false;
  }
  // drive_temperature
  if (lhs->drive_temperature != rhs->drive_temperature) {
    return false;
  }
  // estimated_temperature1
  if (lhs->estimated_temperature1 != rhs->estimated_temperature1) {
    return false;
  }
  // estimated_temperature2
  if (lhs->estimated_temperature2 != rhs->estimated_temperature2) {
    return false;
  }
  // bus_current
  if (lhs->bus_current != rhs->bus_current) {
    return false;
  }
  // bus_voltage
  if (lhs->bus_voltage != rhs->bus_voltage) {
    return false;
  }
  // flag
  if (lhs->flag != rhs->flag) {
    return false;
  }
  // developer_command_status
  if (lhs->developer_command_status != rhs->developer_command_status) {
    return false;
  }
  return true;
}

bool
h2x__msg__DebugMotorState__copy(
  const h2x__msg__DebugMotorState * input,
  h2x__msg__DebugMotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // slave_id
  output->slave_id = input->slave_id;
  // frame_counter
  output->frame_counter = input->frame_counter;
  // error_register
  output->error_register = input->error_register;
  // motor_mode
  output->motor_mode = input->motor_mode;
  // status_word
  output->status_word = input->status_word;
  // joint_position
  output->joint_position = input->joint_position;
  // joint_speed
  output->joint_speed = input->joint_speed;
  // motor_current
  output->motor_current = input->motor_current;
  // joint_torque
  output->joint_torque = input->joint_torque;
  // tx_object_index
  output->tx_object_index = input->tx_object_index;
  // tx_object_value
  output->tx_object_value = input->tx_object_value;
  // pos_kp
  output->pos_kp = input->pos_kp;
  // vibration_dampratio
  output->vibration_dampratio = input->vibration_dampratio;
  // min_position
  output->min_position = input->min_position;
  // max_position
  output->max_position = input->max_position;
  // spd_coefficient
  output->spd_coefficient = input->spd_coefficient;
  // spd_kp
  output->spd_kp = input->spd_kp;
  // spd_ki
  output->spd_ki = input->spd_ki;
  // spd_rmax
  output->spd_rmax = input->spd_rmax;
  // spd_rmin
  output->spd_rmin = input->spd_rmin;
  // position_velocity_torque_current_polarity
  output->position_velocity_torque_current_polarity = input->position_velocity_torque_current_polarity;
  // position_ctrl_vibration_controller_bandwidth
  output->position_ctrl_vibration_controller_bandwidth = input->position_ctrl_vibration_controller_bandwidth;
  // position_feedback_encoder_select
  output->position_feedback_encoder_select = input->position_feedback_encoder_select;
  // align_motor_pos_2_link_pos
  output->align_motor_pos_2_link_pos = input->align_motor_pos_2_link_pos;
  // velocity_ctrl_link_speed_observer_bandwidth
  output->velocity_ctrl_link_speed_observer_bandwidth = input->velocity_ctrl_link_speed_observer_bandwidth;
  // deceleration_of_link_side
  output->deceleration_of_link_side = input->deceleration_of_link_side;
  // spd_bandwidth
  output->spd_bandwidth = input->spd_bandwidth;
  // current_coefficient
  output->current_coefficient = input->current_coefficient;
  // max_motor_torque
  output->max_motor_torque = input->max_motor_torque;
  // max_joint_torque
  output->max_joint_torque = input->max_joint_torque;
  // torque_a_offset
  output->torque_a_offset = input->torque_a_offset;
  // torque_b_offset
  output->torque_b_offset = input->torque_b_offset;
  // torque_kp
  output->torque_kp = input->torque_kp;
  // torque_kd
  output->torque_kd = input->torque_kd;
  // torque_bfe
  output->torque_bfe = input->torque_bfe;
  // torque_l
  output->torque_l = input->torque_l;
  // torque_kfc
  output->torque_kfc = input->torque_kfc;
  // current_torque_coefficient
  output->current_torque_coefficient = input->current_torque_coefficient;
  // led_rgb_ctrl
  output->led_rgb_ctrl = input->led_rgb_ctrl;
  // motor_error_configmask
  output->motor_error_configmask = input->motor_error_configmask;
  // link_error_configmask
  output->link_error_configmask = input->link_error_configmask;
  // board_error_configmask
  output->board_error_configmask = input->board_error_configmask;
  // joint_error_configmask
  output->joint_error_configmask = input->joint_error_configmask;
  // ctrl_error_configmask
  output->ctrl_error_configmask = input->ctrl_error_configmask;
  // communication_error_configmask
  output->communication_error_configmask = input->communication_error_configmask;
  // current_ctrl_bandwidth
  output->current_ctrl_bandwidth = input->current_ctrl_bandwidth;
  // current_ctrl_mode
  output->current_ctrl_mode = input->current_ctrl_mode;
  // motor_rs
  output->motor_rs = input->motor_rs;
  // motor_l
  output->motor_l = input->motor_l;
  // motor_ke
  output->motor_ke = input->motor_ke;
  // motorside_position
  output->motorside_position = input->motorside_position;
  // linkside_position
  output->linkside_position = input->linkside_position;
  // friction_ctrl_param1
  output->friction_ctrl_param1 = input->friction_ctrl_param1;
  // friction_ctrl_param2
  output->friction_ctrl_param2 = input->friction_ctrl_param2;
  // friction_ctrl_param3
  output->friction_ctrl_param3 = input->friction_ctrl_param3;
  // friction_ctrl_param4
  output->friction_ctrl_param4 = input->friction_ctrl_param4;
  // vendor_id
  output->vendor_id = input->vendor_id;
  // robot_product_code
  output->robot_product_code = input->robot_product_code;
  // robot_version_number
  output->robot_version_number = input->robot_version_number;
  // robot_serial_number
  output->robot_serial_number = input->robot_serial_number;
  // joint_type
  output->joint_type = input->joint_type;
  // joint_version
  output->joint_version = input->joint_version;
  // joint_serial_number
  output->joint_serial_number = input->joint_serial_number;
  // firmware_version
  if (!rosidl_runtime_c__String__copy(
      &(input->firmware_version), &(output->firmware_version)))
  {
    return false;
  }
  // bootloader_version
  if (!rosidl_runtime_c__String__copy(
      &(input->bootloader_version), &(output->bootloader_version)))
  {
    return false;
  }
  // app_branch_name
  if (!rosidl_runtime_c__String__copy(
      &(input->app_branch_name), &(output->app_branch_name)))
  {
    return false;
  }
  // app_tag_sha1_id
  if (!rosidl_runtime_c__String__copy(
      &(input->app_tag_sha1_id), &(output->app_tag_sha1_id)))
  {
    return false;
  }
  // boot_branch_name
  if (!rosidl_runtime_c__String__copy(
      &(input->boot_branch_name), &(output->boot_branch_name)))
  {
    return false;
  }
  // boot_tag_sha1_id
  if (!rosidl_runtime_c__String__copy(
      &(input->boot_tag_sha1_id), &(output->boot_tag_sha1_id)))
  {
    return false;
  }
  // link_encoder_calibrated_data
  output->link_encoder_calibrated_data = input->link_encoder_calibrated_data;
  // motor_encoder_calibrated_data
  output->motor_encoder_calibrated_data = input->motor_encoder_calibrated_data;
  // a_phase_current_offset
  output->a_phase_current_offset = input->a_phase_current_offset;
  // b_phase_current_offset
  output->b_phase_current_offset = input->b_phase_current_offset;
  // c_phase_current_offset
  output->c_phase_current_offset = input->c_phase_current_offset;
  // bus_current_offset
  output->bus_current_offset = input->bus_current_offset;
  // motor_temperature
  output->motor_temperature = input->motor_temperature;
  // drive_temperature
  output->drive_temperature = input->drive_temperature;
  // estimated_temperature1
  output->estimated_temperature1 = input->estimated_temperature1;
  // estimated_temperature2
  output->estimated_temperature2 = input->estimated_temperature2;
  // bus_current
  output->bus_current = input->bus_current;
  // bus_voltage
  output->bus_voltage = input->bus_voltage;
  // flag
  output->flag = input->flag;
  // developer_command_status
  output->developer_command_status = input->developer_command_status;
  return true;
}

h2x__msg__DebugMotorState *
h2x__msg__DebugMotorState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugMotorState * msg = (h2x__msg__DebugMotorState *)allocator.allocate(sizeof(h2x__msg__DebugMotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(h2x__msg__DebugMotorState));
  bool success = h2x__msg__DebugMotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
h2x__msg__DebugMotorState__destroy(h2x__msg__DebugMotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    h2x__msg__DebugMotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
h2x__msg__DebugMotorState__Sequence__init(h2x__msg__DebugMotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugMotorState * data = NULL;

  if (size) {
    data = (h2x__msg__DebugMotorState *)allocator.zero_allocate(size, sizeof(h2x__msg__DebugMotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = h2x__msg__DebugMotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        h2x__msg__DebugMotorState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
h2x__msg__DebugMotorState__Sequence__fini(h2x__msg__DebugMotorState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      h2x__msg__DebugMotorState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

h2x__msg__DebugMotorState__Sequence *
h2x__msg__DebugMotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  h2x__msg__DebugMotorState__Sequence * array = (h2x__msg__DebugMotorState__Sequence *)allocator.allocate(sizeof(h2x__msg__DebugMotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = h2x__msg__DebugMotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
h2x__msg__DebugMotorState__Sequence__destroy(h2x__msg__DebugMotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    h2x__msg__DebugMotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
h2x__msg__DebugMotorState__Sequence__are_equal(const h2x__msg__DebugMotorState__Sequence * lhs, const h2x__msg__DebugMotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!h2x__msg__DebugMotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
h2x__msg__DebugMotorState__Sequence__copy(
  const h2x__msg__DebugMotorState__Sequence * input,
  h2x__msg__DebugMotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(h2x__msg__DebugMotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    h2x__msg__DebugMotorState * data =
      (h2x__msg__DebugMotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!h2x__msg__DebugMotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          h2x__msg__DebugMotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!h2x__msg__DebugMotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
