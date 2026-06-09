// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/MotorCmdGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_cmd_gripper.hpp"


#ifndef H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__STRUCT_HPP_
#define H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__MotorCmdGripper __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__MotorCmdGripper __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorCmdGripper_
{
  using Type = MotorCmdGripper_<ContainerAllocator>;

  explicit MotorCmdGripper_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->operation_mode = 0;
      this->q = 0.0f;
      this->dq_percentage = 0;
      this->acc_percentage = 0;
      this->finger_force = 0.0f;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->reserved.begin(), this->reserved.end(), 0ul);
    }
  }

  explicit MotorCmdGripper_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->operation_mode = 0;
      this->q = 0.0f;
      this->dq_percentage = 0;
      this->acc_percentage = 0;
      this->finger_force = 0.0f;
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
  using _q_type =
    float;
  _q_type q;
  using _dq_percentage_type =
    uint16_t;
  _dq_percentage_type dq_percentage;
  using _acc_percentage_type =
    uint16_t;
  _acc_percentage_type acc_percentage;
  using _finger_force_type =
    float;
  _finger_force_type finger_force;
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
  Type & set__q(
    const float & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__dq_percentage(
    const uint16_t & _arg)
  {
    this->dq_percentage = _arg;
    return *this;
  }
  Type & set__acc_percentage(
    const uint16_t & _arg)
  {
    this->acc_percentage = _arg;
    return *this;
  }
  Type & set__finger_force(
    const float & _arg)
  {
    this->finger_force = _arg;
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
    h2x::msg::MotorCmdGripper_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::MotorCmdGripper_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::MotorCmdGripper_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::MotorCmdGripper_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::MotorCmdGripper_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::MotorCmdGripper_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::MotorCmdGripper_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::MotorCmdGripper_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::MotorCmdGripper_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::MotorCmdGripper_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__MotorCmdGripper
    std::shared_ptr<h2x::msg::MotorCmdGripper_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__MotorCmdGripper
    std::shared_ptr<h2x::msg::MotorCmdGripper_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorCmdGripper_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->operation_mode != other.operation_mode) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->dq_percentage != other.dq_percentage) {
      return false;
    }
    if (this->acc_percentage != other.acc_percentage) {
      return false;
    }
    if (this->finger_force != other.finger_force) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorCmdGripper_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorCmdGripper_

// alias to use template instance with default allocator
using MotorCmdGripper =
  h2x::msg::MotorCmdGripper_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__STRUCT_HPP_
