// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/MotorStateGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_state_gripper.hpp"


#ifndef H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__STRUCT_HPP_
#define H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__MotorStateGripper __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__MotorStateGripper __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorStateGripper_
{
  using Type = MotorStateGripper_<ContainerAllocator>;

  explicit MotorStateGripper_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->operation_mode = 0;
      this->arrive_signal = 0;
      this->state = 0l;
      this->hold_state = 0l;
      this->q = 0.0f;
      this->dq = 0.0f;
      this->finger1_force = 0.0f;
      this->finger2_force = 0.0f;
      this->temperature = 0.0f;
      this->cur = 0.0f;
      this->error_code = 0l;
      this->warning_code = 0l;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->reserved.begin(), this->reserved.end(), 0ul);
    }
  }

  explicit MotorStateGripper_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->operation_mode = 0;
      this->arrive_signal = 0;
      this->state = 0l;
      this->hold_state = 0l;
      this->q = 0.0f;
      this->dq = 0.0f;
      this->finger1_force = 0.0f;
      this->finger2_force = 0.0f;
      this->temperature = 0.0f;
      this->cur = 0.0f;
      this->error_code = 0l;
      this->warning_code = 0l;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->reserved.begin(), this->reserved.end(), 0ul);
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _operation_mode_type =
    uint8_t;
  _operation_mode_type operation_mode;
  using _arrive_signal_type =
    uint8_t;
  _arrive_signal_type arrive_signal;
  using _state_type =
    int32_t;
  _state_type state;
  using _hold_state_type =
    int32_t;
  _hold_state_type hold_state;
  using _q_type =
    float;
  _q_type q;
  using _dq_type =
    float;
  _dq_type dq;
  using _finger1_force_type =
    float;
  _finger1_force_type finger1_force;
  using _finger2_force_type =
    float;
  _finger2_force_type finger2_force;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _cur_type =
    float;
  _cur_type cur;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _warning_code_type =
    int32_t;
  _warning_code_type warning_code;
  using _reserved_type =
    std::array<uint32_t, 4>;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__operation_mode(
    const uint8_t & _arg)
  {
    this->operation_mode = _arg;
    return *this;
  }
  Type & set__arrive_signal(
    const uint8_t & _arg)
  {
    this->arrive_signal = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__hold_state(
    const int32_t & _arg)
  {
    this->hold_state = _arg;
    return *this;
  }
  Type & set__q(
    const float & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__dq(
    const float & _arg)
  {
    this->dq = _arg;
    return *this;
  }
  Type & set__finger1_force(
    const float & _arg)
  {
    this->finger1_force = _arg;
    return *this;
  }
  Type & set__finger2_force(
    const float & _arg)
  {
    this->finger2_force = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__cur(
    const float & _arg)
  {
    this->cur = _arg;
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
  Type & set__reserved(
    const std::array<uint32_t, 4> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::MotorStateGripper_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::MotorStateGripper_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::MotorStateGripper_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::MotorStateGripper_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::MotorStateGripper_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::MotorStateGripper_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::MotorStateGripper_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::MotorStateGripper_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::MotorStateGripper_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::MotorStateGripper_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__MotorStateGripper
    std::shared_ptr<h2x::msg::MotorStateGripper_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__MotorStateGripper
    std::shared_ptr<h2x::msg::MotorStateGripper_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorStateGripper_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->operation_mode != other.operation_mode) {
      return false;
    }
    if (this->arrive_signal != other.arrive_signal) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->hold_state != other.hold_state) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->dq != other.dq) {
      return false;
    }
    if (this->finger1_force != other.finger1_force) {
      return false;
    }
    if (this->finger2_force != other.finger2_force) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->cur != other.cur) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->warning_code != other.warning_code) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorStateGripper_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorStateGripper_

// alias to use template instance with default allocator
using MotorStateGripper =
  h2x::msg::MotorStateGripper_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__STRUCT_HPP_
