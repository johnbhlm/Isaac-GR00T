// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/BatteryState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/battery_state.hpp"


#ifndef H2X__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
#define H2X__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__BatteryState __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__BatteryState __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryState_
{
  using Type = BatteryState_<ContainerAllocator>;

  explicit BatteryState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_percentage = 0;
      this->battery_state = 0;
      this->battery_low_warning = 0;
      this->error_code = 0l;
      this->warning_code = 0l;
    }
  }

  explicit BatteryState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->battery_percentage = 0;
      this->battery_state = 0;
      this->battery_low_warning = 0;
      this->error_code = 0l;
      this->warning_code = 0l;
    }
  }

  // field types and members
  using _battery_percentage_type =
    uint8_t;
  _battery_percentage_type battery_percentage;
  using _battery_state_type =
    uint8_t;
  _battery_state_type battery_state;
  using _battery_low_warning_type =
    uint8_t;
  _battery_low_warning_type battery_low_warning;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _warning_code_type =
    int32_t;
  _warning_code_type warning_code;

  // setters for named parameter idiom
  Type & set__battery_percentage(
    const uint8_t & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__battery_state(
    const uint8_t & _arg)
  {
    this->battery_state = _arg;
    return *this;
  }
  Type & set__battery_low_warning(
    const uint8_t & _arg)
  {
    this->battery_low_warning = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__warning_code(
    const int32_t & _arg)
  {
    this->warning_code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::BatteryState_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::BatteryState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::BatteryState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::BatteryState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::BatteryState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::BatteryState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::BatteryState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::BatteryState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::BatteryState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::BatteryState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__BatteryState
    std::shared_ptr<h2x::msg::BatteryState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__BatteryState
    std::shared_ptr<h2x::msg::BatteryState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryState_ & other) const
  {
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->battery_state != other.battery_state) {
      return false;
    }
    if (this->battery_low_warning != other.battery_low_warning) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->warning_code != other.warning_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryState_

// alias to use template instance with default allocator
using BatteryState =
  h2x::msg::BatteryState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__BATTERY_STATE__STRUCT_HPP_
