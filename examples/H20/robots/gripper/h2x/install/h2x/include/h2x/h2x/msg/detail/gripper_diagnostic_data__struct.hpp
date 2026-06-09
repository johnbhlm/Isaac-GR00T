// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/GripperDiagnosticData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_diagnostic_data.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__STRUCT_HPP_
#define H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__GripperDiagnosticData __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__GripperDiagnosticData __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperDiagnosticData_
{
  using Type = GripperDiagnosticData_<ContainerAllocator>;

  explicit GripperDiagnosticData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_of_operation = 0;
      this->mode_display = 0;
    }
  }

  explicit GripperDiagnosticData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_of_operation = 0;
      this->mode_display = 0;
    }
  }

  // field types and members
  using _mode_of_operation_type =
    int8_t;
  _mode_of_operation_type mode_of_operation;
  using _mode_display_type =
    int8_t;
  _mode_display_type mode_display;

  // setters for named parameter idiom
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

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::GripperDiagnosticData_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::GripperDiagnosticData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::GripperDiagnosticData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::GripperDiagnosticData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::GripperDiagnosticData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::GripperDiagnosticData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::GripperDiagnosticData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::GripperDiagnosticData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::GripperDiagnosticData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::GripperDiagnosticData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__GripperDiagnosticData
    std::shared_ptr<h2x::msg::GripperDiagnosticData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__GripperDiagnosticData
    std::shared_ptr<h2x::msg::GripperDiagnosticData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperDiagnosticData_ & other) const
  {
    if (this->mode_of_operation != other.mode_of_operation) {
      return false;
    }
    if (this->mode_display != other.mode_display) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperDiagnosticData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperDiagnosticData_

// alias to use template instance with default allocator
using GripperDiagnosticData =
  h2x::msg::GripperDiagnosticData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__STRUCT_HPP_
