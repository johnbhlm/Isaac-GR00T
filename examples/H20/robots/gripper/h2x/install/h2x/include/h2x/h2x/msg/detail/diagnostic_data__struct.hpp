// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/DiagnosticData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/diagnostic_data.hpp"


#ifndef H2X__MSG__DETAIL__DIAGNOSTIC_DATA__STRUCT_HPP_
#define H2X__MSG__DETAIL__DIAGNOSTIC_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'debug_motor_state'
#include "h2x/msg/detail/debug_motor_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__h2x__msg__DiagnosticData __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__DiagnosticData __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagnosticData_
{
  using Type = DiagnosticData_<ContainerAllocator>;

  explicit DiagnosticData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_motor_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_word = 0;
      this->status_word = 0;
      this->error_register = 0;
      this->mode_of_operation = 0;
      this->mode_display = 0;
    }
  }

  explicit DiagnosticData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_motor_state(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->control_word = 0;
      this->status_word = 0;
      this->error_register = 0;
      this->mode_of_operation = 0;
      this->mode_display = 0;
    }
  }

  // field types and members
  using _control_word_type =
    uint16_t;
  _control_word_type control_word;
  using _status_word_type =
    uint16_t;
  _status_word_type status_word;
  using _error_register_type =
    uint8_t;
  _error_register_type error_register;
  using _mode_of_operation_type =
    int8_t;
  _mode_of_operation_type mode_of_operation;
  using _mode_display_type =
    int8_t;
  _mode_display_type mode_display;
  using _debug_motor_state_type =
    h2x::msg::DebugMotorState_<ContainerAllocator>;
  _debug_motor_state_type debug_motor_state;

  // setters for named parameter idiom
  Type & set__control_word(
    const uint16_t & _arg)
  {
    this->control_word = _arg;
    return *this;
  }
  Type & set__status_word(
    const uint16_t & _arg)
  {
    this->status_word = _arg;
    return *this;
  }
  Type & set__error_register(
    const uint8_t & _arg)
  {
    this->error_register = _arg;
    return *this;
  }
  Type & set__mode_of_operation(
    const int8_t & _arg)
  {
    this->mode_of_operation = _arg;
    return *this;
  }
  Type & set__mode_display(
    const int8_t & _arg)
  {
    this->mode_display = _arg;
    return *this;
  }
  Type & set__debug_motor_state(
    const h2x::msg::DebugMotorState_<ContainerAllocator> & _arg)
  {
    this->debug_motor_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::DiagnosticData_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::DiagnosticData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::DiagnosticData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::DiagnosticData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::DiagnosticData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::DiagnosticData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::DiagnosticData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::DiagnosticData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::DiagnosticData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::DiagnosticData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__DiagnosticData
    std::shared_ptr<h2x::msg::DiagnosticData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__DiagnosticData
    std::shared_ptr<h2x::msg::DiagnosticData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagnosticData_ & other) const
  {
    if (this->control_word != other.control_word) {
      return false;
    }
    if (this->status_word != other.status_word) {
      return false;
    }
    if (this->error_register != other.error_register) {
      return false;
    }
    if (this->mode_of_operation != other.mode_of_operation) {
      return false;
    }
    if (this->mode_display != other.mode_display) {
      return false;
    }
    if (this->debug_motor_state != other.debug_motor_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagnosticData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagnosticData_

// alias to use template instance with default allocator
using DiagnosticData =
  h2x::msg::DiagnosticData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DIAGNOSTIC_DATA__STRUCT_HPP_
