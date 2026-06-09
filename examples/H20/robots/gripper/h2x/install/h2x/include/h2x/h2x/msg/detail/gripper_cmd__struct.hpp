// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/GripperCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_cmd.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_CMD__STRUCT_HPP_
#define H2X__MSG__DETAIL__GRIPPER_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'motor_cmd'
#include "h2x/msg/detail/motor_cmd_gripper__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__h2x__msg__GripperCmd __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__GripperCmd __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperCmd_
{
  using Type = GripperCmd_<ContainerAllocator>;

  explicit GripperCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_cmd.fill(h2x::msg::MotorCmdGripper_<ContainerAllocator>{_init});
      this->crc = 0ul;
    }
  }

  explicit GripperCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_cmd.fill(h2x::msg::MotorCmdGripper_<ContainerAllocator>{_alloc, _init});
      this->crc = 0ul;
    }
  }

  // field types and members
  using _motor_cmd_type =
    std::array<h2x::msg::MotorCmdGripper_<ContainerAllocator>, 2>;
  _motor_cmd_type motor_cmd;
  using _crc_type =
    uint32_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__motor_cmd(
    const std::array<h2x::msg::MotorCmdGripper_<ContainerAllocator>, 2> & _arg)
  {
    this->motor_cmd = _arg;
    return *this;
  }
  Type & set__crc(
    const uint32_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::GripperCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::GripperCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::GripperCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::GripperCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::GripperCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::GripperCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::GripperCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::GripperCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::GripperCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::GripperCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__GripperCmd
    std::shared_ptr<h2x::msg::GripperCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__GripperCmd
    std::shared_ptr<h2x::msg::GripperCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperCmd_ & other) const
  {
    if (this->motor_cmd != other.motor_cmd) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperCmd_

// alias to use template instance with default allocator
using GripperCmd =
  h2x::msg::GripperCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__GRIPPER_CMD__STRUCT_HPP_
