// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/DebugCDUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_cdu_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_CDU_STATE__STRUCT_HPP_
#define H2X__MSG__DETAIL__DEBUG_CDU_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__DebugCDUState __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__DebugCDUState __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugCDUState_
{
  using Type = DebugCDUState_<ContainerAllocator>;

  explicit DebugCDUState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_counter = 0;
      this->electrical_status_feedback_id = 0;
      this->slave_online_status = 0;
      this->cdu_fireware_version = "";
      this->peripheral_status_feedback = 0;
      this->emergency_stop_state = 0;
      this->control_supply_state = 0;
      this->power_supply_state = 0;
      this->battery_voltage = 0.0f;
      this->motor_bus_voltage = 0.0f;
      this->dcdc_bus_voltage = 0.0f;
      this->voltage_24v = 0.0f;
      this->voltage_12v = 0.0f;
      this->motor_bus_current = 0.0f;
      this->current_24v = 0.0f;
      this->current_12v = 0.0f;
      this->pcu_firmware_version = "";
      this->low_battery_warning = 0;
      this->battery_warning_status_history_l2 = 0l;
      this->battery_soc = 0;
      this->battery_soh = 0;
      this->nominal_battery_capacity = 0.0f;
      this->current_battery_capacity = 0.0f;
      this->total_battery_voltage = 0.0f;
      this->total_battery_current = 0.0f;
      this->average_battery_temperature = 0.0f;
      this->peak_battery_temperature = 0.0f;
      this->battery_warning_status_l1 = 0l;
      this->battery_warning_status_l2 = 0l;
      this->mosfet_status = 0;
      this->battery_cycle_count = 0;
      this->ntc_count = 0;
      this->series_cell_count = 0;
      this->current_control_source = 0;
      this->led_mode = 0;
      this->led_period = 0;
      this->led_r = 0;
      this->led_g = 0;
      this->led_b = 0;
      this->lrcu_firmware_version = "";
    }
  }

  explicit DebugCDUState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cdu_fireware_version(_alloc),
    pcu_firmware_version(_alloc),
    lrcu_firmware_version(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frame_counter = 0;
      this->electrical_status_feedback_id = 0;
      this->slave_online_status = 0;
      this->cdu_fireware_version = "";
      this->peripheral_status_feedback = 0;
      this->emergency_stop_state = 0;
      this->control_supply_state = 0;
      this->power_supply_state = 0;
      this->battery_voltage = 0.0f;
      this->motor_bus_voltage = 0.0f;
      this->dcdc_bus_voltage = 0.0f;
      this->voltage_24v = 0.0f;
      this->voltage_12v = 0.0f;
      this->motor_bus_current = 0.0f;
      this->current_24v = 0.0f;
      this->current_12v = 0.0f;
      this->pcu_firmware_version = "";
      this->low_battery_warning = 0;
      this->battery_warning_status_history_l2 = 0l;
      this->battery_soc = 0;
      this->battery_soh = 0;
      this->nominal_battery_capacity = 0.0f;
      this->current_battery_capacity = 0.0f;
      this->total_battery_voltage = 0.0f;
      this->total_battery_current = 0.0f;
      this->average_battery_temperature = 0.0f;
      this->peak_battery_temperature = 0.0f;
      this->battery_warning_status_l1 = 0l;
      this->battery_warning_status_l2 = 0l;
      this->mosfet_status = 0;
      this->battery_cycle_count = 0;
      this->ntc_count = 0;
      this->series_cell_count = 0;
      this->current_control_source = 0;
      this->led_mode = 0;
      this->led_period = 0;
      this->led_r = 0;
      this->led_g = 0;
      this->led_b = 0;
      this->lrcu_firmware_version = "";
    }
  }

  // field types and members
  using _frame_counter_type =
    uint8_t;
  _frame_counter_type frame_counter;
  using _electrical_status_feedback_id_type =
    uint8_t;
  _electrical_status_feedback_id_type electrical_status_feedback_id;
  using _slave_online_status_type =
    uint8_t;
  _slave_online_status_type slave_online_status;
  using _cdu_fireware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cdu_fireware_version_type cdu_fireware_version;
  using _peripheral_status_feedback_type =
    uint8_t;
  _peripheral_status_feedback_type peripheral_status_feedback;
  using _emergency_stop_state_type =
    uint8_t;
  _emergency_stop_state_type emergency_stop_state;
  using _control_supply_state_type =
    uint8_t;
  _control_supply_state_type control_supply_state;
  using _power_supply_state_type =
    uint8_t;
  _power_supply_state_type power_supply_state;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _motor_bus_voltage_type =
    float;
  _motor_bus_voltage_type motor_bus_voltage;
  using _dcdc_bus_voltage_type =
    float;
  _dcdc_bus_voltage_type dcdc_bus_voltage;
  using _voltage_24v_type =
    float;
  _voltage_24v_type voltage_24v;
  using _voltage_12v_type =
    float;
  _voltage_12v_type voltage_12v;
  using _motor_bus_current_type =
    float;
  _motor_bus_current_type motor_bus_current;
  using _current_24v_type =
    float;
  _current_24v_type current_24v;
  using _current_12v_type =
    float;
  _current_12v_type current_12v;
  using _pcu_firmware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pcu_firmware_version_type pcu_firmware_version;
  using _low_battery_warning_type =
    uint8_t;
  _low_battery_warning_type low_battery_warning;
  using _battery_warning_status_history_l2_type =
    int32_t;
  _battery_warning_status_history_l2_type battery_warning_status_history_l2;
  using _battery_soc_type =
    uint8_t;
  _battery_soc_type battery_soc;
  using _battery_soh_type =
    uint8_t;
  _battery_soh_type battery_soh;
  using _nominal_battery_capacity_type =
    float;
  _nominal_battery_capacity_type nominal_battery_capacity;
  using _current_battery_capacity_type =
    float;
  _current_battery_capacity_type current_battery_capacity;
  using _total_battery_voltage_type =
    float;
  _total_battery_voltage_type total_battery_voltage;
  using _total_battery_current_type =
    float;
  _total_battery_current_type total_battery_current;
  using _average_battery_temperature_type =
    float;
  _average_battery_temperature_type average_battery_temperature;
  using _peak_battery_temperature_type =
    float;
  _peak_battery_temperature_type peak_battery_temperature;
  using _battery_warning_status_l1_type =
    int32_t;
  _battery_warning_status_l1_type battery_warning_status_l1;
  using _battery_warning_status_l2_type =
    int32_t;
  _battery_warning_status_l2_type battery_warning_status_l2;
  using _mosfet_status_type =
    uint16_t;
  _mosfet_status_type mosfet_status;
  using _battery_cycle_count_type =
    uint16_t;
  _battery_cycle_count_type battery_cycle_count;
  using _ntc_count_type =
    uint8_t;
  _ntc_count_type ntc_count;
  using _series_cell_count_type =
    uint8_t;
  _series_cell_count_type series_cell_count;
  using _current_control_source_type =
    uint8_t;
  _current_control_source_type current_control_source;
  using _led_mode_type =
    uint8_t;
  _led_mode_type led_mode;
  using _led_period_type =
    uint16_t;
  _led_period_type led_period;
  using _led_r_type =
    uint8_t;
  _led_r_type led_r;
  using _led_g_type =
    uint8_t;
  _led_g_type led_g;
  using _led_b_type =
    uint8_t;
  _led_b_type led_b;
  using _lrcu_firmware_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lrcu_firmware_version_type lrcu_firmware_version;

  // setters for named parameter idiom
  Type & set__frame_counter(
    const uint8_t & _arg)
  {
    this->frame_counter = _arg;
    return *this;
  }
  Type & set__electrical_status_feedback_id(
    const uint8_t & _arg)
  {
    this->electrical_status_feedback_id = _arg;
    return *this;
  }
  Type & set__slave_online_status(
    const uint8_t & _arg)
  {
    this->slave_online_status = _arg;
    return *this;
  }
  Type & set__cdu_fireware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cdu_fireware_version = _arg;
    return *this;
  }
  Type & set__peripheral_status_feedback(
    const uint8_t & _arg)
  {
    this->peripheral_status_feedback = _arg;
    return *this;
  }
  Type & set__emergency_stop_state(
    const uint8_t & _arg)
  {
    this->emergency_stop_state = _arg;
    return *this;
  }
  Type & set__control_supply_state(
    const uint8_t & _arg)
  {
    this->control_supply_state = _arg;
    return *this;
  }
  Type & set__power_supply_state(
    const uint8_t & _arg)
  {
    this->power_supply_state = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__motor_bus_voltage(
    const float & _arg)
  {
    this->motor_bus_voltage = _arg;
    return *this;
  }
  Type & set__dcdc_bus_voltage(
    const float & _arg)
  {
    this->dcdc_bus_voltage = _arg;
    return *this;
  }
  Type & set__voltage_24v(
    const float & _arg)
  {
    this->voltage_24v = _arg;
    return *this;
  }
  Type & set__voltage_12v(
    const float & _arg)
  {
    this->voltage_12v = _arg;
    return *this;
  }
  Type & set__motor_bus_current(
    const float & _arg)
  {
    this->motor_bus_current = _arg;
    return *this;
  }
  Type & set__current_24v(
    const float & _arg)
  {
    this->current_24v = _arg;
    return *this;
  }
  Type & set__current_12v(
    const float & _arg)
  {
    this->current_12v = _arg;
    return *this;
  }
  Type & set__pcu_firmware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pcu_firmware_version = _arg;
    return *this;
  }
  Type & set__low_battery_warning(
    const uint8_t & _arg)
  {
    this->low_battery_warning = _arg;
    return *this;
  }
  Type & set__battery_warning_status_history_l2(
    const int32_t & _arg)
  {
    this->battery_warning_status_history_l2 = _arg;
    return *this;
  }
  Type & set__battery_soc(
    const uint8_t & _arg)
  {
    this->battery_soc = _arg;
    return *this;
  }
  Type & set__battery_soh(
    const uint8_t & _arg)
  {
    this->battery_soh = _arg;
    return *this;
  }
  Type & set__nominal_battery_capacity(
    const float & _arg)
  {
    this->nominal_battery_capacity = _arg;
    return *this;
  }
  Type & set__current_battery_capacity(
    const float & _arg)
  {
    this->current_battery_capacity = _arg;
    return *this;
  }
  Type & set__total_battery_voltage(
    const float & _arg)
  {
    this->total_battery_voltage = _arg;
    return *this;
  }
  Type & set__total_battery_current(
    const float & _arg)
  {
    this->total_battery_current = _arg;
    return *this;
  }
  Type & set__average_battery_temperature(
    const float & _arg)
  {
    this->average_battery_temperature = _arg;
    return *this;
  }
  Type & set__peak_battery_temperature(
    const float & _arg)
  {
    this->peak_battery_temperature = _arg;
    return *this;
  }
  Type & set__battery_warning_status_l1(
    const int32_t & _arg)
  {
    this->battery_warning_status_l1 = _arg;
    return *this;
  }
  Type & set__battery_warning_status_l2(
    const int32_t & _arg)
  {
    this->battery_warning_status_l2 = _arg;
    return *this;
  }
  Type & set__mosfet_status(
    const uint16_t & _arg)
  {
    this->mosfet_status = _arg;
    return *this;
  }
  Type & set__battery_cycle_count(
    const uint16_t & _arg)
  {
    this->battery_cycle_count = _arg;
    return *this;
  }
  Type & set__ntc_count(
    const uint8_t & _arg)
  {
    this->ntc_count = _arg;
    return *this;
  }
  Type & set__series_cell_count(
    const uint8_t & _arg)
  {
    this->series_cell_count = _arg;
    return *this;
  }
  Type & set__current_control_source(
    const uint8_t & _arg)
  {
    this->current_control_source = _arg;
    return *this;
  }
  Type & set__led_mode(
    const uint8_t & _arg)
  {
    this->led_mode = _arg;
    return *this;
  }
  Type & set__led_period(
    const uint16_t & _arg)
  {
    this->led_period = _arg;
    return *this;
  }
  Type & set__led_r(
    const uint8_t & _arg)
  {
    this->led_r = _arg;
    return *this;
  }
  Type & set__led_g(
    const uint8_t & _arg)
  {
    this->led_g = _arg;
    return *this;
  }
  Type & set__led_b(
    const uint8_t & _arg)
  {
    this->led_b = _arg;
    return *this;
  }
  Type & set__lrcu_firmware_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lrcu_firmware_version = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::DebugCDUState_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::DebugCDUState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::DebugCDUState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::DebugCDUState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::DebugCDUState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::DebugCDUState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::DebugCDUState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::DebugCDUState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::DebugCDUState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::DebugCDUState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__DebugCDUState
    std::shared_ptr<h2x::msg::DebugCDUState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__DebugCDUState
    std::shared_ptr<h2x::msg::DebugCDUState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugCDUState_ & other) const
  {
    if (this->frame_counter != other.frame_counter) {
      return false;
    }
    if (this->electrical_status_feedback_id != other.electrical_status_feedback_id) {
      return false;
    }
    if (this->slave_online_status != other.slave_online_status) {
      return false;
    }
    if (this->cdu_fireware_version != other.cdu_fireware_version) {
      return false;
    }
    if (this->peripheral_status_feedback != other.peripheral_status_feedback) {
      return false;
    }
    if (this->emergency_stop_state != other.emergency_stop_state) {
      return false;
    }
    if (this->control_supply_state != other.control_supply_state) {
      return false;
    }
    if (this->power_supply_state != other.power_supply_state) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->motor_bus_voltage != other.motor_bus_voltage) {
      return false;
    }
    if (this->dcdc_bus_voltage != other.dcdc_bus_voltage) {
      return false;
    }
    if (this->voltage_24v != other.voltage_24v) {
      return false;
    }
    if (this->voltage_12v != other.voltage_12v) {
      return false;
    }
    if (this->motor_bus_current != other.motor_bus_current) {
      return false;
    }
    if (this->current_24v != other.current_24v) {
      return false;
    }
    if (this->current_12v != other.current_12v) {
      return false;
    }
    if (this->pcu_firmware_version != other.pcu_firmware_version) {
      return false;
    }
    if (this->low_battery_warning != other.low_battery_warning) {
      return false;
    }
    if (this->battery_warning_status_history_l2 != other.battery_warning_status_history_l2) {
      return false;
    }
    if (this->battery_soc != other.battery_soc) {
      return false;
    }
    if (this->battery_soh != other.battery_soh) {
      return false;
    }
    if (this->nominal_battery_capacity != other.nominal_battery_capacity) {
      return false;
    }
    if (this->current_battery_capacity != other.current_battery_capacity) {
      return false;
    }
    if (this->total_battery_voltage != other.total_battery_voltage) {
      return false;
    }
    if (this->total_battery_current != other.total_battery_current) {
      return false;
    }
    if (this->average_battery_temperature != other.average_battery_temperature) {
      return false;
    }
    if (this->peak_battery_temperature != other.peak_battery_temperature) {
      return false;
    }
    if (this->battery_warning_status_l1 != other.battery_warning_status_l1) {
      return false;
    }
    if (this->battery_warning_status_l2 != other.battery_warning_status_l2) {
      return false;
    }
    if (this->mosfet_status != other.mosfet_status) {
      return false;
    }
    if (this->battery_cycle_count != other.battery_cycle_count) {
      return false;
    }
    if (this->ntc_count != other.ntc_count) {
      return false;
    }
    if (this->series_cell_count != other.series_cell_count) {
      return false;
    }
    if (this->current_control_source != other.current_control_source) {
      return false;
    }
    if (this->led_mode != other.led_mode) {
      return false;
    }
    if (this->led_period != other.led_period) {
      return false;
    }
    if (this->led_r != other.led_r) {
      return false;
    }
    if (this->led_g != other.led_g) {
      return false;
    }
    if (this->led_b != other.led_b) {
      return false;
    }
    if (this->lrcu_firmware_version != other.lrcu_firmware_version) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugCDUState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugCDUState_

// alias to use template instance with default allocator
using DebugCDUState =
  h2x::msg::DebugCDUState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DEBUG_CDU_STATE__STRUCT_HPP_
