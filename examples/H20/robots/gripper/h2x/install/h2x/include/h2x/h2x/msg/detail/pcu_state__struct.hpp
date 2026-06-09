// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/PCUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/pcu_state.hpp"


#ifndef H2X__MSG__DETAIL__PCU_STATE__STRUCT_HPP_
#define H2X__MSG__DETAIL__PCU_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__PCUState __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__PCUState __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PCUState_
{
  using Type = PCUState_<ContainerAllocator>;

  explicit PCUState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_stop_state = 0;
      this->control_supply_state = 0;
      this->power_supply_state = 0;
      this->pcu_error_code = 0l;
      this->pcu_warning_code = 0l;
      this->battery_voltage = 0.0f;
      this->motor_bus_voltage = 0.0f;
      this->motor_bus_current = 0.0f;
      this->dcdc_bus_voltage = 0.0f;
      this->voltage_24v = 0.0f;
      this->voltage_12v = 0.0f;
      this->current_24v = 0.0f;
      this->current_12v = 0.0f;
    }
  }

  explicit PCUState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->emergency_stop_state = 0;
      this->control_supply_state = 0;
      this->power_supply_state = 0;
      this->pcu_error_code = 0l;
      this->pcu_warning_code = 0l;
      this->battery_voltage = 0.0f;
      this->motor_bus_voltage = 0.0f;
      this->motor_bus_current = 0.0f;
      this->dcdc_bus_voltage = 0.0f;
      this->voltage_24v = 0.0f;
      this->voltage_12v = 0.0f;
      this->current_24v = 0.0f;
      this->current_12v = 0.0f;
    }
  }

  // field types and members
  using _emergency_stop_state_type =
    uint8_t;
  _emergency_stop_state_type emergency_stop_state;
  using _control_supply_state_type =
    uint8_t;
  _control_supply_state_type control_supply_state;
  using _power_supply_state_type =
    uint8_t;
  _power_supply_state_type power_supply_state;
  using _pcu_error_code_type =
    int32_t;
  _pcu_error_code_type pcu_error_code;
  using _pcu_warning_code_type =
    int32_t;
  _pcu_warning_code_type pcu_warning_code;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _motor_bus_voltage_type =
    float;
  _motor_bus_voltage_type motor_bus_voltage;
  using _motor_bus_current_type =
    float;
  _motor_bus_current_type motor_bus_current;
  using _dcdc_bus_voltage_type =
    float;
  _dcdc_bus_voltage_type dcdc_bus_voltage;
  using _voltage_24v_type =
    float;
  _voltage_24v_type voltage_24v;
  using _voltage_12v_type =
    float;
  _voltage_12v_type voltage_12v;
  using _current_24v_type =
    float;
  _current_24v_type current_24v;
  using _current_12v_type =
    float;
  _current_12v_type current_12v;

  // setters for named parameter idiom
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
  Type & set__pcu_error_code(
    const int32_t & _arg)
  {
    this->pcu_error_code = _arg;
    return *this;
  }
  Type & set__pcu_warning_code(
    const int32_t & _arg)
  {
    this->pcu_warning_code = _arg;
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
  Type & set__motor_bus_current(
    const float & _arg)
  {
    this->motor_bus_current = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::PCUState_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::PCUState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::PCUState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::PCUState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::PCUState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::PCUState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::PCUState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::PCUState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::PCUState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::PCUState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__PCUState
    std::shared_ptr<h2x::msg::PCUState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__PCUState
    std::shared_ptr<h2x::msg::PCUState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PCUState_ & other) const
  {
    if (this->emergency_stop_state != other.emergency_stop_state) {
      return false;
    }
    if (this->control_supply_state != other.control_supply_state) {
      return false;
    }
    if (this->power_supply_state != other.power_supply_state) {
      return false;
    }
    if (this->pcu_error_code != other.pcu_error_code) {
      return false;
    }
    if (this->pcu_warning_code != other.pcu_warning_code) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->motor_bus_voltage != other.motor_bus_voltage) {
      return false;
    }
    if (this->motor_bus_current != other.motor_bus_current) {
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
    if (this->current_24v != other.current_24v) {
      return false;
    }
    if (this->current_12v != other.current_12v) {
      return false;
    }
    return true;
  }
  bool operator!=(const PCUState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PCUState_

// alias to use template instance with default allocator
using PCUState =
  h2x::msg::PCUState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__PCU_STATE__STRUCT_HPP_
