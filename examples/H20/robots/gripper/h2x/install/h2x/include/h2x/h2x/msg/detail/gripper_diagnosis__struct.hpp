// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/GripperDiagnosis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_diagnosis.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__STRUCT_HPP_
#define H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ds_data'
#include "h2x/msg/detail/gripper_diagnostic_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__h2x__msg__GripperDiagnosis __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__GripperDiagnosis __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GripperDiagnosis_
{
  using Type = GripperDiagnosis_<ContainerAllocator>;

  explicit GripperDiagnosis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ds_data.fill(h2x::msg::GripperDiagnosticData_<ContainerAllocator>{_init});
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->error_code.begin(), this->error_code.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->warning_code.begin(), this->warning_code.end(), 0l);
      this->crc = 0ul;
    }
  }

  explicit GripperDiagnosis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ds_data(_alloc),
    error_code(_alloc),
    warning_code(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ds_data.fill(h2x::msg::GripperDiagnosticData_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->error_code.begin(), this->error_code.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->warning_code.begin(), this->warning_code.end(), 0l);
      this->crc = 0ul;
    }
  }

  // field types and members
  using _ds_data_type =
    std::array<h2x::msg::GripperDiagnosticData_<ContainerAllocator>, 2>;
  _ds_data_type ds_data;
  using _error_code_type =
    std::array<int32_t, 2>;
  _error_code_type error_code;
  using _warning_code_type =
    std::array<int32_t, 2>;
  _warning_code_type warning_code;
  using _crc_type =
    uint32_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__ds_data(
    const std::array<h2x::msg::GripperDiagnosticData_<ContainerAllocator>, 2> & _arg)
  {
    this->ds_data = _arg;
    return *this;
  }
  Type & set__error_code(
    const std::array<int32_t, 2> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__warning_code(
    const std::array<int32_t, 2> & _arg)
  {
    this->warning_code = _arg;
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
    h2x::msg::GripperDiagnosis_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::GripperDiagnosis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::GripperDiagnosis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::GripperDiagnosis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::GripperDiagnosis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::GripperDiagnosis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::GripperDiagnosis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::GripperDiagnosis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::GripperDiagnosis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::GripperDiagnosis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__GripperDiagnosis
    std::shared_ptr<h2x::msg::GripperDiagnosis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__GripperDiagnosis
    std::shared_ptr<h2x::msg::GripperDiagnosis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GripperDiagnosis_ & other) const
  {
    if (this->ds_data != other.ds_data) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->warning_code != other.warning_code) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const GripperDiagnosis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GripperDiagnosis_

// alias to use template instance with default allocator
using GripperDiagnosis =
  h2x::msg::GripperDiagnosis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__STRUCT_HPP_
