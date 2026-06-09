// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/LRCUCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/lrcu_cmd.hpp"


#ifndef H2X__MSG__DETAIL__LRCU_CMD__STRUCT_HPP_
#define H2X__MSG__DETAIL__LRCU_CMD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__LRCUCmd __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__LRCUCmd __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LRCUCmd_
{
  using Type = LRCUCmd_<ContainerAllocator>;

  explicit LRCUCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_enable = 0;
      this->led_mode = 0;
      this->led_period_ms = 0;
      this->led_r = 0;
      this->led_g = 0;
      this->led_b = 0;
      this->crc = 0ul;
    }
  }

  explicit LRCUCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_enable = 0;
      this->led_mode = 0;
      this->led_period_ms = 0;
      this->led_r = 0;
      this->led_g = 0;
      this->led_b = 0;
      this->crc = 0ul;
    }
  }

  // field types and members
  using _led_enable_type =
    uint8_t;
  _led_enable_type led_enable;
  using _led_mode_type =
    uint8_t;
  _led_mode_type led_mode;
  using _led_period_ms_type =
    uint16_t;
  _led_period_ms_type led_period_ms;
  using _led_r_type =
    uint8_t;
  _led_r_type led_r;
  using _led_g_type =
    uint8_t;
  _led_g_type led_g;
  using _led_b_type =
    uint8_t;
  _led_b_type led_b;
  using _crc_type =
    uint32_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__led_enable(
    const uint8_t & _arg)
  {
    this->led_enable = _arg;
    return *this;
  }
  Type & set__led_mode(
    const uint8_t & _arg)
  {
    this->led_mode = _arg;
    return *this;
  }
  Type & set__led_period_ms(
    const uint16_t & _arg)
  {
    this->led_period_ms = _arg;
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
  Type & set__crc(
    const uint32_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::LRCUCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::LRCUCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::LRCUCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::LRCUCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::LRCUCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::LRCUCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::LRCUCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::LRCUCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::LRCUCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::LRCUCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__LRCUCmd
    std::shared_ptr<h2x::msg::LRCUCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__LRCUCmd
    std::shared_ptr<h2x::msg::LRCUCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LRCUCmd_ & other) const
  {
    if (this->led_enable != other.led_enable) {
      return false;
    }
    if (this->led_mode != other.led_mode) {
      return false;
    }
    if (this->led_period_ms != other.led_period_ms) {
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
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const LRCUCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LRCUCmd_

// alias to use template instance with default allocator
using LRCUCmd =
  h2x::msg::LRCUCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__LRCU_CMD__STRUCT_HPP_
