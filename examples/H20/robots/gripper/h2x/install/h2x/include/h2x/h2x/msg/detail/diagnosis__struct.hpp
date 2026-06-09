// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/Diagnosis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/diagnosis.hpp"


#ifndef H2X__MSG__DETAIL__DIAGNOSIS__STRUCT_HPP_
#define H2X__MSG__DETAIL__DIAGNOSIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'ds402_data'
#include "h2x/msg/detail/diagnostic_data__struct.hpp"
// Member 'debug_imu_state'
#include "h2x/msg/detail/debug_imu_state__struct.hpp"
// Member 'debug_cdu_state'
#include "h2x/msg/detail/debug_cdu_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__h2x__msg__Diagnosis __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__Diagnosis __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Diagnosis_
{
  using Type = Diagnosis_<ContainerAllocator>;

  explicit Diagnosis_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : debug_cdu_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 37>::iterator, bool>(this->is_ds402.begin(), this->is_ds402.end(), false);
      this->ds402_data.fill(h2x::msg::DiagnosticData_<ContainerAllocator>{_init});
      this->debug_imu_state.fill(h2x::msg::DebugIMUState_<ContainerAllocator>{_init});
      std::fill<typename std::array<int32_t, 37>::iterator, int32_t>(this->error_code.begin(), this->error_code.end(), 0l);
      std::fill<typename std::array<int32_t, 37>::iterator, int32_t>(this->warning_code.begin(), this->warning_code.end(), 0l);
      this->cdu_error_code = 0l;
      this->cdu_warning_code = 0l;
      this->pcu_error_code = 0l;
      this->pcu_warning_code = 0l;
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->imu_error_code.begin(), this->imu_error_code.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->imu_warning_code.begin(), this->imu_warning_code.end(), 0l);
      this->battery_error_code = 0l;
      this->battery_warning_code = 0l;
      this->crc = 0ul;
    }
  }

  explicit Diagnosis_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : is_ds402(_alloc),
    ds402_data(_alloc),
    debug_imu_state(_alloc),
    debug_cdu_state(_alloc, _init),
    error_code(_alloc),
    warning_code(_alloc),
    imu_error_code(_alloc),
    imu_warning_code(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<bool, 37>::iterator, bool>(this->is_ds402.begin(), this->is_ds402.end(), false);
      this->ds402_data.fill(h2x::msg::DiagnosticData_<ContainerAllocator>{_alloc, _init});
      this->debug_imu_state.fill(h2x::msg::DebugIMUState_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<int32_t, 37>::iterator, int32_t>(this->error_code.begin(), this->error_code.end(), 0l);
      std::fill<typename std::array<int32_t, 37>::iterator, int32_t>(this->warning_code.begin(), this->warning_code.end(), 0l);
      this->cdu_error_code = 0l;
      this->cdu_warning_code = 0l;
      this->pcu_error_code = 0l;
      this->pcu_warning_code = 0l;
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->imu_error_code.begin(), this->imu_error_code.end(), 0l);
      std::fill<typename std::array<int32_t, 2>::iterator, int32_t>(this->imu_warning_code.begin(), this->imu_warning_code.end(), 0l);
      this->battery_error_code = 0l;
      this->battery_warning_code = 0l;
      this->crc = 0ul;
    }
  }

  // field types and members
  using _is_ds402_type =
    std::array<bool, 37>;
  _is_ds402_type is_ds402;
  using _ds402_data_type =
    std::array<h2x::msg::DiagnosticData_<ContainerAllocator>, 37>;
  _ds402_data_type ds402_data;
  using _debug_imu_state_type =
    std::array<h2x::msg::DebugIMUState_<ContainerAllocator>, 2>;
  _debug_imu_state_type debug_imu_state;
  using _debug_cdu_state_type =
    h2x::msg::DebugCDUState_<ContainerAllocator>;
  _debug_cdu_state_type debug_cdu_state;
  using _error_code_type =
    std::array<int32_t, 37>;
  _error_code_type error_code;
  using _warning_code_type =
    std::array<int32_t, 37>;
  _warning_code_type warning_code;
  using _cdu_error_code_type =
    int32_t;
  _cdu_error_code_type cdu_error_code;
  using _cdu_warning_code_type =
    int32_t;
  _cdu_warning_code_type cdu_warning_code;
  using _pcu_error_code_type =
    int32_t;
  _pcu_error_code_type pcu_error_code;
  using _pcu_warning_code_type =
    int32_t;
  _pcu_warning_code_type pcu_warning_code;
  using _imu_error_code_type =
    std::array<int32_t, 2>;
  _imu_error_code_type imu_error_code;
  using _imu_warning_code_type =
    std::array<int32_t, 2>;
  _imu_warning_code_type imu_warning_code;
  using _battery_error_code_type =
    int32_t;
  _battery_error_code_type battery_error_code;
  using _battery_warning_code_type =
    int32_t;
  _battery_warning_code_type battery_warning_code;
  using _crc_type =
    uint32_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__is_ds402(
    const std::array<bool, 37> & _arg)
  {
    this->is_ds402 = _arg;
    return *this;
  }
  Type & set__ds402_data(
    const std::array<h2x::msg::DiagnosticData_<ContainerAllocator>, 37> & _arg)
  {
    this->ds402_data = _arg;
    return *this;
  }
  Type & set__debug_imu_state(
    const std::array<h2x::msg::DebugIMUState_<ContainerAllocator>, 2> & _arg)
  {
    this->debug_imu_state = _arg;
    return *this;
  }
  Type & set__debug_cdu_state(
    const h2x::msg::DebugCDUState_<ContainerAllocator> & _arg)
  {
    this->debug_cdu_state = _arg;
    return *this;
  }
  Type & set__error_code(
    const std::array<int32_t, 37> & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__warning_code(
    const std::array<int32_t, 37> & _arg)
  {
    this->warning_code = _arg;
    return *this;
  }
  Type & set__cdu_error_code(
    const int32_t & _arg)
  {
    this->cdu_error_code = _arg;
    return *this;
  }
  Type & set__cdu_warning_code(
    const int32_t & _arg)
  {
    this->cdu_warning_code = _arg;
    return *this;
  }
  Type & set__pcu_error_code(
    const int32_t & _arg)
  {
    this->pcu_error_code = _arg;
    return *this;
  }
  Type & set__pcu_warning_code(
    const int32_t & _arg)
  {
    this->pcu_warning_code = _arg;
    return *this;
  }
  Type & set__imu_error_code(
    const std::array<int32_t, 2> & _arg)
  {
    this->imu_error_code = _arg;
    return *this;
  }
  Type & set__imu_warning_code(
    const std::array<int32_t, 2> & _arg)
  {
    this->imu_warning_code = _arg;
    return *this;
  }
  Type & set__battery_error_code(
    const int32_t & _arg)
  {
    this->battery_error_code = _arg;
    return *this;
  }
  Type & set__battery_warning_code(
    const int32_t & _arg)
  {
    this->battery_warning_code = _arg;
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
    h2x::msg::Diagnosis_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::Diagnosis_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::Diagnosis_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::Diagnosis_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::Diagnosis_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::Diagnosis_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::Diagnosis_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::Diagnosis_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::Diagnosis_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::Diagnosis_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__Diagnosis
    std::shared_ptr<h2x::msg::Diagnosis_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__Diagnosis
    std::shared_ptr<h2x::msg::Diagnosis_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Diagnosis_ & other) const
  {
    if (this->is_ds402 != other.is_ds402) {
      return false;
    }
    if (this->ds402_data != other.ds402_data) {
      return false;
    }
    if (this->debug_imu_state != other.debug_imu_state) {
      return false;
    }
    if (this->debug_cdu_state != other.debug_cdu_state) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->warning_code != other.warning_code) {
      return false;
    }
    if (this->cdu_error_code != other.cdu_error_code) {
      return false;
    }
    if (this->cdu_warning_code != other.cdu_warning_code) {
      return false;
    }
    if (this->pcu_error_code != other.pcu_error_code) {
      return false;
    }
    if (this->pcu_warning_code != other.pcu_warning_code) {
      return false;
    }
    if (this->imu_error_code != other.imu_error_code) {
      return false;
    }
    if (this->imu_warning_code != other.imu_warning_code) {
      return false;
    }
    if (this->battery_error_code != other.battery_error_code) {
      return false;
    }
    if (this->battery_warning_code != other.battery_warning_code) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const Diagnosis_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Diagnosis_

// alias to use template instance with default allocator
using Diagnosis =
  h2x::msg::Diagnosis_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DIAGNOSIS__STRUCT_HPP_
