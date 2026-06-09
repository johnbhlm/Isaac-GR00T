// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/DebugMotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_motor_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__STRUCT_HPP_
#define H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__DebugMotorState __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__DebugMotorState __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugMotorState_
{
  using Type = DebugMotorState_<ContainerAllocator>;

  explicit DebugMotorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slave_id = 0;
      this->frame_counter = 0;
      this->error_register = 0;
      this->motor_mode = 0;
      this->status_word = 0;
      this->joint_position = 0.0f;
      this->joint_speed = 0.0f;
      this->motor_current = 0.0f;
      this->joint_torque = 0.0f;
      this->tx_object_index = 0;
      this->tx_object_value = 0l;
      this->pos_kp = 0.0f;
      this->vibration_dampratio = 0.0;
      this->min_position = 0.0;
      this->max_position = 0.0;
      this->spd_coefficient = 0.0f;
      this->spd_kp = 0.0f;
      this->spd_ki = 0.0f;
      this->spd_rmax = 0.0f;
      this->spd_rmin = 0.0f;
      this->position_velocity_torque_current_polarity = 0l;
      this->position_ctrl_vibration_controller_bandwidth = 0.0f;
      this->position_feedback_encoder_select = 0l;
      this->align_motor_pos_2_link_pos = 0l;
      this->velocity_ctrl_link_speed_observer_bandwidth = 0l;
      this->deceleration_of_link_side = 0.0f;
      this->spd_bandwidth = 0.0f;
      this->current_coefficient = 0.0f;
      this->max_motor_torque = 0.0f;
      this->max_joint_torque = 0.0f;
      this->torque_a_offset = 0.0f;
      this->torque_b_offset = 0.0f;
      this->torque_kp = 0.0f;
      this->torque_kd = 0.0f;
      this->torque_bfe = 0.0f;
      this->torque_l = 0.0f;
      this->torque_kfc = 0.0f;
      this->current_torque_coefficient = 0.0f;
      this->led_rgb_ctrl = 0ul;
      this->motor_error_configmask = 0ul;
      this->link_error_configmask = 0ul;
      this->board_error_configmask = 0ul;
      this->joint_error_configmask = 0ul;
      this->ctrl_error_configmask = 0ul;
      this->communication_error_configmask = 0ul;
      this->current_ctrl_bandwidth = 0l;
      this->current_ctrl_mode = 0l;
      this->motor_rs = 0l;
      this->motor_l = 0l;
      this->motor_ke = 0l;
      this->motorside_position = 0l;
      this->linkside_position = 0l;
      this->friction_ctrl_param1 = 0l;
      this->friction_ctrl_param2 = 0l;
      this->friction_ctrl_param3 = 0l;
      this->friction_ctrl_param4 = 0l;
      this->vendor_id = 0l;
      this->robot_product_code = 0l;
      this->robot_version_number = 0l;
      this->robot_serial_number = 0l;
      this->joint_type = 0ul;
      this->joint_version = 0ul;
      this->joint_serial_number = 0ul;
      this->firmware_version = "";
      this->bootloader_version = "";
      this->app_branch_name = "";
      this->app_tag_sha1_id = "";
      this->boot_branch_name = "";
      this->boot_tag_sha1_id = "";
      this->link_encoder_calibrated_data = 0l;
      this->motor_encoder_calibrated_data = 0l;
      this->a_phase_current_offset = 0;
      this->b_phase_current_offset = 0;
      this->c_phase_current_offset = 0;
      this->bus_current_offset = 0;
      this->motor_temperature = 0;
      this->drive_temperature = 0;
      this->estimated_temperature1 = 0;
      this->estimated_temperature2 = 0;
      this->bus_current = 0.0f;
      this->bus_voltage = 0.0f;
      this->flag = 0ul;
      this->developer_command_status = 0l;
    }
  }

  explicit DebugMotorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : firmware_version(_alloc),
    bootloader_version(_alloc),
    app_branch_name(_alloc),
    app_tag_sha1_id(_alloc),
    boot_branch_name(_alloc),
    boot_tag_sha1_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slave_id = 0;
      this->frame_counter = 0;
      this->error_register = 0;
      this->motor_mode = 0;
      this->status_word = 0;
      this->joint_position = 0.0f;
      this->joint_speed = 0.0f;
      this->motor_current = 0.0f;
      this->joint_torque = 0.0f;
      this->tx_object_index = 0;
      this->tx_object_value = 0l;
      this->pos_kp = 0.0f;
      this->vibration_dampratio = 0.0;
      this->min_position = 0.0;
      this->max_position = 0.0;
      this->spd_coefficient = 0.0f;
      this->spd_kp = 0.0f;
      this->spd_ki = 0.0f;
      this->spd_rmax = 0.0f;
      this->spd_rmin = 0.0f;
      this->position_velocity_torque_current_polarity = 0l;
      this->position_ctrl_vibration_controller_bandwidth = 0.0f;
      this->position_feedback_encoder_select = 0l;
      this->align_motor_pos_2_link_pos = 0l;
      this->velocity_ctrl_link_speed_observer_bandwidth = 0l;
      this->deceleration_of_link_side = 0.0f;
      this->spd_bandwidth = 0.0f;
      this->current_coefficient = 0.0f;
      this->max_motor_torque = 0.0f;
      this->max_joint_torque = 0.0f;
      this->torque_a_offset = 0.0f;
      this->torque_b_offset = 0.0f;
      this->torque_kp = 0.0f;
      this->torque_kd = 0.0f;
      this->torque_bfe = 0.0f;
      this->torque_l = 0.0f;
      this->torque_kfc = 0.0f;
      this->current_torque_coefficient = 0.0f;
      this->led_rgb_ctrl = 0ul;
      this->motor_error_configmask = 0ul;
      this->link_error_configmask = 0ul;
      this->board_error_configmask = 0ul;
      this->joint_error_configmask = 0ul;
      this->ctrl_error_configmask = 0ul;
      this->communication_error_configmask = 0ul;
      this->current_ctrl_bandwidth = 0l;
      this->current_ctrl_mode = 0l;
      this->motor_rs = 0l;
      this->motor_l = 0l;
      this->motor_ke = 0l;
      this->motorside_position = 0l;
      this->linkside_position = 0l;
      this->friction_ctrl_param1 = 0l;
      this->friction_ctrl_param2 = 0l;
      this->friction_ctrl_param3 = 0l;
      this->friction_ctrl_param4 = 0l;
      this->vendor_id = 0l;
      this->robot_product_code = 0l;
      this->robot_version_number = 0l;
      this->robot_serial_number = 0l;
      this->joint_type = 0ul;
      this->joint_version = 0ul;
      this->joint_serial_number = 0ul;
      this->firmware_version = "";
      this->bootloader_version = "";
      this->app_branch_name = "";
      this->app_tag_sha1_id = "";
      this->boot_branch_name = "";
      this->boot_tag_sha1_id = "";
      this->link_encoder_calibrated_data = 0l;
      this->motor_encoder_calibrated_data = 0l;
      this->a_phase_current_offset = 0;
      this->b_phase_current_offset = 0;
      this->c_phase_current_offset = 0;
      this->bus_current_offset = 0;
      this->motor_temperature = 0;
      this->drive_temperature = 0;
      this->estimated_temperature1 = 0;
      this->estimated_temperature2 = 0;
      this->bus_current = 0.0f;
      this->bus_voltage = 0.0f;
      this->flag = 0ul;
      this->developer_command_status = 0l;
    }
  }

  // field types and members
  using _slave_id_type =
    uint8_t;
  _slave_id_type slave_id;
  using _frame_counter_type =
    uint8_t;
  _frame_counter_type frame_counter;
  using _error_register_type =
    uint8_t;
  _error_register_type error_register;
  using _motor_mode_type =
    uint8_t;
  _motor_mode_type motor_mode;
  using _status_word_type =
    uint16_t;
  _status_word_type status_word;
  using _joint_position_type =
    float;
  _joint_position_type joint_position;
  using _joint_speed_type =
    float;
  _joint_speed_type joint_speed;
  using _motor_current_type =
    float;
  _motor_current_type motor_current;
  using _joint_torque_type =
    float;
  _joint_torque_type joint_torque;
  using _tx_object_index_type =
    uint16_t;
  _tx_object_index_type tx_object_index;
  using _tx_object_value_type =
    int32_t;
  _tx_object_value_type tx_object_value;
  using _pos_kp_type =
    float;
  _pos_kp_type pos_kp;
  using _vibration_dampratio_type =
    double;
  _vibration_dampratio_type vibration_dampratio;
  using _min_position_type =
    double;
  _min_position_type min_position;
  using _max_position_type =
    double;
  _max_position_type max_position;
  using _spd_coefficient_type =
    float;
  _spd_coefficient_type spd_coefficient;
  using _spd_kp_type =
    float;
  _spd_kp_type spd_kp;
  using _spd_ki_type =
    float;
  _spd_ki_type spd_ki;
  using _spd_rmax_type =
    float;
  _spd_rmax_type spd_rmax;
  using _spd_rmin_type =
    float;
  _spd_rmin_type spd_rmin;
  using _position_velocity_torque_current_polarity_type =
    int32_t;
  _position_velocity_torque_current_polarity_type position_velocity_torque_current_polarity;
  using _position_ctrl_vibration_controller_bandwidth_type =
    float;
  _position_ctrl_vibration_controller_bandwidth_type position_ctrl_vibration_controller_bandwidth;
  using _position_feedback_encoder_select_type =
    int32_t;
  _position_feedback_encoder_select_type position_feedback_encoder_select;
  using _align_motor_pos_2_link_pos_type =
    int32_t;
  _align_motor_pos_2_link_pos_type align_motor_pos_2_link_pos;
  using _velocity_ctrl_link_speed_observer_bandwidth_type =
    int32_t;
  _velocity_ctrl_link_speed_observer_bandwidth_type velocity_ctrl_link_speed_observer_bandwidth;
  using _deceleration_of_link_side_type =
    float;
  _deceleration_of_link_side_type deceleration_of_link_side;
  using _spd_bandwidth_type =
    float;
  _spd_bandwidth_type spd_bandwidth;
  using _current_coefficient_type =
    float;
  _current_coefficient_type current_coefficient;
  using _max_motor_torque_type =
    float;
  _max_motor_torque_type max_motor_torque;
  using _max_joint_torque_type =
    float;
  _max_joint_torque_type max_joint_torque;
  using _torque_a_offset_type =
    float;
  _torque_a_offset_type torque_a_offset;
  using _torque_b_offset_type =
    float;
  _torque_b_offset_type torque_b_offset;
  using _torque_kp_type =
    float;
  _torque_kp_type torque_kp;
  using _torque_kd_type =
    float;
  _torque_kd_type torque_kd;
  using _torque_bfe_type =
    float;
  _torque_bfe_type torque_bfe;
  using _torque_l_type =
    float;
  _torque_l_type torque_l;
  using _torque_kfc_type =
    float;
  _torque_kfc_type torque_kfc;
  using _current_torque_coefficient_type =
    float;
  _current_torque_coefficient_type current_torque_coefficient;
  using _led_rgb_ctrl_type =
    uint32_t;
  _led_rgb_ctrl_type led_rgb_ctrl;
  using _motor_error_configmask_type =
    uint32_t;
  _motor_error_configmask_type motor_error_configmask;
  using _link_error_configmask_type =
    uint32_t;
  _link_error_configmask_type link_error_configmask;
  using _board_error_configmask_type =
    uint32_t;
  _board_error_configmask_type board_error_configmask;
  using _joint_error_configmask_type =
    uint32_t;
  _joint_error_configmask_type joint_error_configmask;
  using _ctrl_error_configmask_type =
    uint32_t;
  _ctrl_error_configmask_type ctrl_error_configmask;
  using _communication_error_configmask_type =
    uint32_t;
  _communication_error_configmask_type communication_error_configmask;
  using _current_ctrl_bandwidth_type =
    int32_t;
  _current_ctrl_bandwidth_type current_ctrl_bandwidth;
  using _current_ctrl_mode_type =
    int32_t;
  _current_ctrl_mode_type current_ctrl_mode;
  using _motor_rs_type =
    int32_t;
  _motor_rs_type motor_rs;
  using _motor_l_type =
    int32_t;
  _motor_l_type motor_l;
  using _motor_ke_type =
    int32_t;
  _motor_ke_type motor_ke;
  using _motorside_position_type =
    int32_t;
  _motorside_position_type motorside_position;
  using _linkside_position_type =
    int32_t;
  _linkside_position_type linkside_position;
  using _friction_ctrl_param1_type =
    int32_t;
  _friction_ctrl_param1_type friction_ctrl_param1;
  using _friction_ctrl_param2_type =
    int32_t;
  _friction_ctrl_param2_type friction_ctrl_param2;
  using _friction_ctrl_param3_type =
    int32_t;
  _friction_ctrl_param3_type friction_ctrl_param3;
  using _friction_ctrl_param4_type =
    int32_t;
  _friction_ctrl_param4_type friction_ctrl_param4;
  using _vendor_id_type =
    int32_t;
  _vendor_id_type vendor_id;
  using _robot_product_code_type =
    int32_t;
  _robot_product_code_type robot_product_code;
  using _robot_version_number_type =
    int32_t;
  _robot_version_number_type robot_version_number;
  using _robot_serial_number_type =
    int32_t;
  _robot_serial_number_type robot_serial_number;
  using _joint_type_type =
    uint32_t;
  _joint_type_type joint_type;
  using _joint_version_type =
    uint32_t;
  _joint_version_type joint_version;
  using _joint_serial_number_type =
    uint32_t;
  _joint_serial_number_type joint_serial_number;
  using _firmware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _firmware_version_type firmware_version;
  using _bootloader_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bootloader_version_type bootloader_version;
  using _app_branch_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _app_branch_name_type app_branch_name;
  using _app_tag_sha1_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _app_tag_sha1_id_type app_tag_sha1_id;
  using _boot_branch_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _boot_branch_name_type boot_branch_name;
  using _boot_tag_sha1_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _boot_tag_sha1_id_type boot_tag_sha1_id;
  using _link_encoder_calibrated_data_type =
    int32_t;
  _link_encoder_calibrated_data_type link_encoder_calibrated_data;
  using _motor_encoder_calibrated_data_type =
    int32_t;
  _motor_encoder_calibrated_data_type motor_encoder_calibrated_data;
  using _a_phase_current_offset_type =
    uint16_t;
  _a_phase_current_offset_type a_phase_current_offset;
  using _b_phase_current_offset_type =
    uint16_t;
  _b_phase_current_offset_type b_phase_current_offset;
  using _c_phase_current_offset_type =
    uint16_t;
  _c_phase_current_offset_type c_phase_current_offset;
  using _bus_current_offset_type =
    uint16_t;
  _bus_current_offset_type bus_current_offset;
  using _motor_temperature_type =
    int16_t;
  _motor_temperature_type motor_temperature;
  using _drive_temperature_type =
    int16_t;
  _drive_temperature_type drive_temperature;
  using _estimated_temperature1_type =
    int16_t;
  _estimated_temperature1_type estimated_temperature1;
  using _estimated_temperature2_type =
    int16_t;
  _estimated_temperature2_type estimated_temperature2;
  using _bus_current_type =
    float;
  _bus_current_type bus_current;
  using _bus_voltage_type =
    float;
  _bus_voltage_type bus_voltage;
  using _flag_type =
    uint32_t;
  _flag_type flag;
  using _developer_command_status_type =
    int32_t;
  _developer_command_status_type developer_command_status;

  // setters for named parameter idiom
  Type & set__slave_id(
    const uint8_t & _arg)
  {
    this->slave_id = _arg;
    return *this;
  }
  Type & set__frame_counter(
    const uint8_t & _arg)
  {
    this->frame_counter = _arg;
    return *this;
  }
  Type & set__error_register(
    const uint8_t & _arg)
  {
    this->error_register = _arg;
    return *this;
  }
  Type & set__motor_mode(
    const uint8_t & _arg)
  {
    this->motor_mode = _arg;
    return *this;
  }
  Type & set__status_word(
    const uint16_t & _arg)
  {
    this->status_word = _arg;
    return *this;
  }
  Type & set__joint_position(
    const float & _arg)
  {
    this->joint_position = _arg;
    return *this;
  }
  Type & set__joint_speed(
    const float & _arg)
  {
    this->joint_speed = _arg;
    return *this;
  }
  Type & set__motor_current(
    const float & _arg)
  {
    this->motor_current = _arg;
    return *this;
  }
  Type & set__joint_torque(
    const float & _arg)
  {
    this->joint_torque = _arg;
    return *this;
  }
  Type & set__tx_object_index(
    const uint16_t & _arg)
  {
    this->tx_object_index = _arg;
    return *this;
  }
  Type & set__tx_object_value(
    const int32_t & _arg)
  {
    this->tx_object_value = _arg;
    return *this;
  }
  Type & set__pos_kp(
    const float & _arg)
  {
    this->pos_kp = _arg;
    return *this;
  }
  Type & set__vibration_dampratio(
    const double & _arg)
  {
    this->vibration_dampratio = _arg;
    return *this;
  }
  Type & set__min_position(
    const double & _arg)
  {
    this->min_position = _arg;
    return *this;
  }
  Type & set__max_position(
    const double & _arg)
  {
    this->max_position = _arg;
    return *this;
  }
  Type & set__spd_coefficient(
    const float & _arg)
  {
    this->spd_coefficient = _arg;
    return *this;
  }
  Type & set__spd_kp(
    const float & _arg)
  {
    this->spd_kp = _arg;
    return *this;
  }
  Type & set__spd_ki(
    const float & _arg)
  {
    this->spd_ki = _arg;
    return *this;
  }
  Type & set__spd_rmax(
    const float & _arg)
  {
    this->spd_rmax = _arg;
    return *this;
  }
  Type & set__spd_rmin(
    const float & _arg)
  {
    this->spd_rmin = _arg;
    return *this;
  }
  Type & set__position_velocity_torque_current_polarity(
    const int32_t & _arg)
  {
    this->position_velocity_torque_current_polarity = _arg;
    return *this;
  }
  Type & set__position_ctrl_vibration_controller_bandwidth(
    const float & _arg)
  {
    this->position_ctrl_vibration_controller_bandwidth = _arg;
    return *this;
  }
  Type & set__position_feedback_encoder_select(
    const int32_t & _arg)
  {
    this->position_feedback_encoder_select = _arg;
    return *this;
  }
  Type & set__align_motor_pos_2_link_pos(
    const int32_t & _arg)
  {
    this->align_motor_pos_2_link_pos = _arg;
    return *this;
  }
  Type & set__velocity_ctrl_link_speed_observer_bandwidth(
    const int32_t & _arg)
  {
    this->velocity_ctrl_link_speed_observer_bandwidth = _arg;
    return *this;
  }
  Type & set__deceleration_of_link_side(
    const float & _arg)
  {
    this->deceleration_of_link_side = _arg;
    return *this;
  }
  Type & set__spd_bandwidth(
    const float & _arg)
  {
    this->spd_bandwidth = _arg;
    return *this;
  }
  Type & set__current_coefficient(
    const float & _arg)
  {
    this->current_coefficient = _arg;
    return *this;
  }
  Type & set__max_motor_torque(
    const float & _arg)
  {
    this->max_motor_torque = _arg;
    return *this;
  }
  Type & set__max_joint_torque(
    const float & _arg)
  {
    this->max_joint_torque = _arg;
    return *this;
  }
  Type & set__torque_a_offset(
    const float & _arg)
  {
    this->torque_a_offset = _arg;
    return *this;
  }
  Type & set__torque_b_offset(
    const float & _arg)
  {
    this->torque_b_offset = _arg;
    return *this;
  }
  Type & set__torque_kp(
    const float & _arg)
  {
    this->torque_kp = _arg;
    return *this;
  }
  Type & set__torque_kd(
    const float & _arg)
  {
    this->torque_kd = _arg;
    return *this;
  }
  Type & set__torque_bfe(
    const float & _arg)
  {
    this->torque_bfe = _arg;
    return *this;
  }
  Type & set__torque_l(
    const float & _arg)
  {
    this->torque_l = _arg;
    return *this;
  }
  Type & set__torque_kfc(
    const float & _arg)
  {
    this->torque_kfc = _arg;
    return *this;
  }
  Type & set__current_torque_coefficient(
    const float & _arg)
  {
    this->current_torque_coefficient = _arg;
    return *this;
  }
  Type & set__led_rgb_ctrl(
    const uint32_t & _arg)
  {
    this->led_rgb_ctrl = _arg;
    return *this;
  }
  Type & set__motor_error_configmask(
    const uint32_t & _arg)
  {
    this->motor_error_configmask = _arg;
    return *this;
  }
  Type & set__link_error_configmask(
    const uint32_t & _arg)
  {
    this->link_error_configmask = _arg;
    return *this;
  }
  Type & set__board_error_configmask(
    const uint32_t & _arg)
  {
    this->board_error_configmask = _arg;
    return *this;
  }
  Type & set__joint_error_configmask(
    const uint32_t & _arg)
  {
    this->joint_error_configmask = _arg;
    return *this;
  }
  Type & set__ctrl_error_configmask(
    const uint32_t & _arg)
  {
    this->ctrl_error_configmask = _arg;
    return *this;
  }
  Type & set__communication_error_configmask(
    const uint32_t & _arg)
  {
    this->communication_error_configmask = _arg;
    return *this;
  }
  Type & set__current_ctrl_bandwidth(
    const int32_t & _arg)
  {
    this->current_ctrl_bandwidth = _arg;
    return *this;
  }
  Type & set__current_ctrl_mode(
    const int32_t & _arg)
  {
    this->current_ctrl_mode = _arg;
    return *this;
  }
  Type & set__motor_rs(
    const int32_t & _arg)
  {
    this->motor_rs = _arg;
    return *this;
  }
  Type & set__motor_l(
    const int32_t & _arg)
  {
    this->motor_l = _arg;
    return *this;
  }
  Type & set__motor_ke(
    const int32_t & _arg)
  {
    this->motor_ke = _arg;
    return *this;
  }
  Type & set__motorside_position(
    const int32_t & _arg)
  {
    this->motorside_position = _arg;
    return *this;
  }
  Type & set__linkside_position(
    const int32_t & _arg)
  {
    this->linkside_position = _arg;
    return *this;
  }
  Type & set__friction_ctrl_param1(
    const int32_t & _arg)
  {
    this->friction_ctrl_param1 = _arg;
    return *this;
  }
  Type & set__friction_ctrl_param2(
    const int32_t & _arg)
  {
    this->friction_ctrl_param2 = _arg;
    return *this;
  }
  Type & set__friction_ctrl_param3(
    const int32_t & _arg)
  {
    this->friction_ctrl_param3 = _arg;
    return *this;
  }
  Type & set__friction_ctrl_param4(
    const int32_t & _arg)
  {
    this->friction_ctrl_param4 = _arg;
    return *this;
  }
  Type & set__vendor_id(
    const int32_t & _arg)
  {
    this->vendor_id = _arg;
    return *this;
  }
  Type & set__robot_product_code(
    const int32_t & _arg)
  {
    this->robot_product_code = _arg;
    return *this;
  }
  Type & set__robot_version_number(
    const int32_t & _arg)
  {
    this->robot_version_number = _arg;
    return *this;
  }
  Type & set__robot_serial_number(
    const int32_t & _arg)
  {
    this->robot_serial_number = _arg;
    return *this;
  }
  Type & set__joint_type(
    const uint32_t & _arg)
  {
    this->joint_type = _arg;
    return *this;
  }
  Type & set__joint_version(
    const uint32_t & _arg)
  {
    this->joint_version = _arg;
    return *this;
  }
  Type & set__joint_serial_number(
    const uint32_t & _arg)
  {
    this->joint_serial_number = _arg;
    return *this;
  }
  Type & set__firmware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->firmware_version = _arg;
    return *this;
  }
  Type & set__bootloader_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bootloader_version = _arg;
    return *this;
  }
  Type & set__app_branch_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->app_branch_name = _arg;
    return *this;
  }
  Type & set__app_tag_sha1_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->app_tag_sha1_id = _arg;
    return *this;
  }
  Type & set__boot_branch_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->boot_branch_name = _arg;
    return *this;
  }
  Type & set__boot_tag_sha1_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->boot_tag_sha1_id = _arg;
    return *this;
  }
  Type & set__link_encoder_calibrated_data(
    const int32_t & _arg)
  {
    this->link_encoder_calibrated_data = _arg;
    return *this;
  }
  Type & set__motor_encoder_calibrated_data(
    const int32_t & _arg)
  {
    this->motor_encoder_calibrated_data = _arg;
    return *this;
  }
  Type & set__a_phase_current_offset(
    const uint16_t & _arg)
  {
    this->a_phase_current_offset = _arg;
    return *this;
  }
  Type & set__b_phase_current_offset(
    const uint16_t & _arg)
  {
    this->b_phase_current_offset = _arg;
    return *this;
  }
  Type & set__c_phase_current_offset(
    const uint16_t & _arg)
  {
    this->c_phase_current_offset = _arg;
    return *this;
  }
  Type & set__bus_current_offset(
    const uint16_t & _arg)
  {
    this->bus_current_offset = _arg;
    return *this;
  }
  Type & set__motor_temperature(
    const int16_t & _arg)
  {
    this->motor_temperature = _arg;
    return *this;
  }
  Type & set__drive_temperature(
    const int16_t & _arg)
  {
    this->drive_temperature = _arg;
    return *this;
  }
  Type & set__estimated_temperature1(
    const int16_t & _arg)
  {
    this->estimated_temperature1 = _arg;
    return *this;
  }
  Type & set__estimated_temperature2(
    const int16_t & _arg)
  {
    this->estimated_temperature2 = _arg;
    return *this;
  }
  Type & set__bus_current(
    const float & _arg)
  {
    this->bus_current = _arg;
    return *this;
  }
  Type & set__bus_voltage(
    const float & _arg)
  {
    this->bus_voltage = _arg;
    return *this;
  }
  Type & set__flag(
    const uint32_t & _arg)
  {
    this->flag = _arg;
    return *this;
  }
  Type & set__developer_command_status(
    const int32_t & _arg)
  {
    this->developer_command_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::DebugMotorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::DebugMotorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::DebugMotorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::DebugMotorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::DebugMotorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::DebugMotorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::DebugMotorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::DebugMotorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::DebugMotorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::DebugMotorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__DebugMotorState
    std::shared_ptr<h2x::msg::DebugMotorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__DebugMotorState
    std::shared_ptr<h2x::msg::DebugMotorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugMotorState_ & other) const
  {
    if (this->slave_id != other.slave_id) {
      return false;
    }
    if (this->frame_counter != other.frame_counter) {
      return false;
    }
    if (this->error_register != other.error_register) {
      return false;
    }
    if (this->motor_mode != other.motor_mode) {
      return false;
    }
    if (this->status_word != other.status_word) {
      return false;
    }
    if (this->joint_position != other.joint_position) {
      return false;
    }
    if (this->joint_speed != other.joint_speed) {
      return false;
    }
    if (this->motor_current != other.motor_current) {
      return false;
    }
    if (this->joint_torque != other.joint_torque) {
      return false;
    }
    if (this->tx_object_index != other.tx_object_index) {
      return false;
    }
    if (this->tx_object_value != other.tx_object_value) {
      return false;
    }
    if (this->pos_kp != other.pos_kp) {
      return false;
    }
    if (this->vibration_dampratio != other.vibration_dampratio) {
      return false;
    }
    if (this->min_position != other.min_position) {
      return false;
    }
    if (this->max_position != other.max_position) {
      return false;
    }
    if (this->spd_coefficient != other.spd_coefficient) {
      return false;
    }
    if (this->spd_kp != other.spd_kp) {
      return false;
    }
    if (this->spd_ki != other.spd_ki) {
      return false;
    }
    if (this->spd_rmax != other.spd_rmax) {
      return false;
    }
    if (this->spd_rmin != other.spd_rmin) {
      return false;
    }
    if (this->position_velocity_torque_current_polarity != other.position_velocity_torque_current_polarity) {
      return false;
    }
    if (this->position_ctrl_vibration_controller_bandwidth != other.position_ctrl_vibration_controller_bandwidth) {
      return false;
    }
    if (this->position_feedback_encoder_select != other.position_feedback_encoder_select) {
      return false;
    }
    if (this->align_motor_pos_2_link_pos != other.align_motor_pos_2_link_pos) {
      return false;
    }
    if (this->velocity_ctrl_link_speed_observer_bandwidth != other.velocity_ctrl_link_speed_observer_bandwidth) {
      return false;
    }
    if (this->deceleration_of_link_side != other.deceleration_of_link_side) {
      return false;
    }
    if (this->spd_bandwidth != other.spd_bandwidth) {
      return false;
    }
    if (this->current_coefficient != other.current_coefficient) {
      return false;
    }
    if (this->max_motor_torque != other.max_motor_torque) {
      return false;
    }
    if (this->max_joint_torque != other.max_joint_torque) {
      return false;
    }
    if (this->torque_a_offset != other.torque_a_offset) {
      return false;
    }
    if (this->torque_b_offset != other.torque_b_offset) {
      return false;
    }
    if (this->torque_kp != other.torque_kp) {
      return false;
    }
    if (this->torque_kd != other.torque_kd) {
      return false;
    }
    if (this->torque_bfe != other.torque_bfe) {
      return false;
    }
    if (this->torque_l != other.torque_l) {
      return false;
    }
    if (this->torque_kfc != other.torque_kfc) {
      return false;
    }
    if (this->current_torque_coefficient != other.current_torque_coefficient) {
      return false;
    }
    if (this->led_rgb_ctrl != other.led_rgb_ctrl) {
      return false;
    }
    if (this->motor_error_configmask != other.motor_error_configmask) {
      return false;
    }
    if (this->link_error_configmask != other.link_error_configmask) {
      return false;
    }
    if (this->board_error_configmask != other.board_error_configmask) {
      return false;
    }
    if (this->joint_error_configmask != other.joint_error_configmask) {
      return false;
    }
    if (this->ctrl_error_configmask != other.ctrl_error_configmask) {
      return false;
    }
    if (this->communication_error_configmask != other.communication_error_configmask) {
      return false;
    }
    if (this->current_ctrl_bandwidth != other.current_ctrl_bandwidth) {
      return false;
    }
    if (this->current_ctrl_mode != other.current_ctrl_mode) {
      return false;
    }
    if (this->motor_rs != other.motor_rs) {
      return false;
    }
    if (this->motor_l != other.motor_l) {
      return false;
    }
    if (this->motor_ke != other.motor_ke) {
      return false;
    }
    if (this->motorside_position != other.motorside_position) {
      return false;
    }
    if (this->linkside_position != other.linkside_position) {
      return false;
    }
    if (this->friction_ctrl_param1 != other.friction_ctrl_param1) {
      return false;
    }
    if (this->friction_ctrl_param2 != other.friction_ctrl_param2) {
      return false;
    }
    if (this->friction_ctrl_param3 != other.friction_ctrl_param3) {
      return false;
    }
    if (this->friction_ctrl_param4 != other.friction_ctrl_param4) {
      return false;
    }
    if (this->vendor_id != other.vendor_id) {
      return false;
    }
    if (this->robot_product_code != other.robot_product_code) {
      return false;
    }
    if (this->robot_version_number != other.robot_version_number) {
      return false;
    }
    if (this->robot_serial_number != other.robot_serial_number) {
      return false;
    }
    if (this->joint_type != other.joint_type) {
      return false;
    }
    if (this->joint_version != other.joint_version) {
      return false;
    }
    if (this->joint_serial_number != other.joint_serial_number) {
      return false;
    }
    if (this->firmware_version != other.firmware_version) {
      return false;
    }
    if (this->bootloader_version != other.bootloader_version) {
      return false;
    }
    if (this->app_branch_name != other.app_branch_name) {
      return false;
    }
    if (this->app_tag_sha1_id != other.app_tag_sha1_id) {
      return false;
    }
    if (this->boot_branch_name != other.boot_branch_name) {
      return false;
    }
    if (this->boot_tag_sha1_id != other.boot_tag_sha1_id) {
      return false;
    }
    if (this->link_encoder_calibrated_data != other.link_encoder_calibrated_data) {
      return false;
    }
    if (this->motor_encoder_calibrated_data != other.motor_encoder_calibrated_data) {
      return false;
    }
    if (this->a_phase_current_offset != other.a_phase_current_offset) {
      return false;
    }
    if (this->b_phase_current_offset != other.b_phase_current_offset) {
      return false;
    }
    if (this->c_phase_current_offset != other.c_phase_current_offset) {
      return false;
    }
    if (this->bus_current_offset != other.bus_current_offset) {
      return false;
    }
    if (this->motor_temperature != other.motor_temperature) {
      return false;
    }
    if (this->drive_temperature != other.drive_temperature) {
      return false;
    }
    if (this->estimated_temperature1 != other.estimated_temperature1) {
      return false;
    }
    if (this->estimated_temperature2 != other.estimated_temperature2) {
      return false;
    }
    if (this->bus_current != other.bus_current) {
      return false;
    }
    if (this->bus_voltage != other.bus_voltage) {
      return false;
    }
    if (this->flag != other.flag) {
      return false;
    }
    if (this->developer_command_status != other.developer_command_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugMotorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugMotorState_

// alias to use template instance with default allocator
using DebugMotorState =
  h2x::msg::DebugMotorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DEBUG_MOTOR_STATE__STRUCT_HPP_
