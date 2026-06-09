// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/LowCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/low_cmd.hpp"


#ifndef H2X__MSG__DETAIL__LOW_CMD__STRUCT_HPP_
#define H2X__MSG__DETAIL__LOW_CMD__STRUCT_HPP_

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
#include "h2x/msg/detail/motor_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__h2x__msg__LowCmd __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__LowCmd __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowCmd_
{
  using Type = LowCmd_<ContainerAllocator>;

  explicit LowCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_pr = 0;
      this->motor_cmd.fill(h2x::msg::MotorCmd_<ContainerAllocator>{_init});
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->reserved.begin(), this->reserved.end(), 0ul);
      this->crc = 0ul;
    }
  }

  explicit LowCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motor_cmd(_alloc),
    reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_pr = 0;
      this->motor_cmd.fill(h2x::msg::MotorCmd_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->reserved.begin(), this->reserved.end(), 0ul);
      this->crc = 0ul;
    }
  }

  // field types and members
  using _mode_pr_type =
    uint8_t;
  _mode_pr_type mode_pr;
  using _motor_cmd_type =
    std::array<h2x::msg::MotorCmd_<ContainerAllocator>, 37>;
  _motor_cmd_type motor_cmd;
  using _reserved_type =
    std::array<uint32_t, 4>;
  _reserved_type reserved;
  using _crc_type =
    uint32_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__mode_pr(
    const uint8_t & _arg)
  {
    this->mode_pr = _arg;
    return *this;
  }
  Type & set__motor_cmd(
    const std::array<h2x::msg::MotorCmd_<ContainerAllocator>, 37> & _arg)
  {
    this->motor_cmd = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint32_t, 4> & _arg)
  {
    this->reserved = _arg;
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
    h2x::msg::LowCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::LowCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::LowCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::LowCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::LowCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::LowCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::LowCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::LowCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::LowCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::LowCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__LowCmd
    std::shared_ptr<h2x::msg::LowCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__LowCmd
    std::shared_ptr<h2x::msg::LowCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowCmd_ & other) const
  {
    if (this->mode_pr != other.mode_pr) {
      return false;
    }
    if (this->motor_cmd != other.motor_cmd) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowCmd_

// alias to use template instance with default allocator
using LowCmd =
  h2x::msg::LowCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__LOW_CMD__STRUCT_HPP_
