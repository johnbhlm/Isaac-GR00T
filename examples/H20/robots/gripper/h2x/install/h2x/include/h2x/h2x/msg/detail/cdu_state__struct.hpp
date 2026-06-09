// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/CDUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/cdu_state.hpp"


#ifndef H2X__MSG__DETAIL__CDU_STATE__STRUCT_HPP_
#define H2X__MSG__DETAIL__CDU_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__CDUState __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__CDUState __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CDUState_
{
  using Type = CDUState_<ContainerAllocator>;

  explicit CDUState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->warning_code = 0l;
    }
  }

  explicit CDUState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->warning_code = 0l;
    }
  }

  // field types and members
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _warning_code_type =
    int32_t;
  _warning_code_type warning_code;

  // setters for named parameter idiom
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
    h2x::msg::CDUState_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::CDUState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::CDUState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::CDUState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::CDUState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::CDUState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::CDUState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::CDUState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::CDUState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::CDUState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__CDUState
    std::shared_ptr<h2x::msg::CDUState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__CDUState
    std::shared_ptr<h2x::msg::CDUState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CDUState_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->warning_code != other.warning_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const CDUState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CDUState_

// alias to use template instance with default allocator
using CDUState =
  h2x::msg::CDUState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__CDU_STATE__STRUCT_HPP_
