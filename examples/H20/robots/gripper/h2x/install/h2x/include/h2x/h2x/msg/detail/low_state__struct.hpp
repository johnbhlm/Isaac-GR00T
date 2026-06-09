// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/LowState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/low_state.hpp"


#ifndef H2X__MSG__DETAIL__LOW_STATE__STRUCT_HPP_
#define H2X__MSG__DETAIL__LOW_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'imu_state'
#include "h2x/msg/detail/imu_state__struct.hpp"
// Member 'motor_state'
#include "h2x/msg/detail/motor_state__struct.hpp"
// Member 'battery_info'
#include "h2x/msg/detail/battery_state__struct.hpp"
// Member 'pcu_state'
#include "h2x/msg/detail/pcu_state__struct.hpp"
// Member 'cdu_state'
#include "h2x/msg/detail/cdu_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__h2x__msg__LowState __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__LowState __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowState_
{
  using Type = LowState_<ContainerAllocator>;

  explicit LowState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : battery_info(_init),
    pcu_state(_init),
    cdu_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->version.begin(), this->version.end(), 0ul);
      this->mode_pr = 0;
      this->tick = 0ul;
      this->imu_state.fill(h2x::msg::IMUState_<ContainerAllocator>{_init});
      this->motor_state.fill(h2x::msg::MotorState_<ContainerAllocator>{_init});
      this->has_battery_info = false;
      this->ground_count = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->ground_signal.begin(), this->ground_signal.end(), 0);
      this->time_seconds = 0l;
      this->is_pcu_valid = 0;
      this->is_cdu_valid = 0;
      this->is_data_valid = 0;
      this->error_code = 0l;
      this->warning_code = 0l;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->reserved.begin(), this->reserved.end(), 0ul);
      this->crc = 0ul;
    }
  }

  explicit LowState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : version(_alloc),
    imu_state(_alloc),
    motor_state(_alloc),
    battery_info(_alloc, _init),
    ground_signal(_alloc),
    pcu_state(_alloc, _init),
    cdu_state(_alloc, _init),
    reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->version.begin(), this->version.end(), 0ul);
      this->mode_pr = 0;
      this->tick = 0ul;
      this->imu_state.fill(h2x::msg::IMUState_<ContainerAllocator>{_alloc, _init});
      this->motor_state.fill(h2x::msg::MotorState_<ContainerAllocator>{_alloc, _init});
      this->has_battery_info = false;
      this->ground_count = 0;
      std::fill<typename std::array<uint8_t, 4>::iterator, uint8_t>(this->ground_signal.begin(), this->ground_signal.end(), 0);
      this->time_seconds = 0l;
      this->is_pcu_valid = 0;
      this->is_cdu_valid = 0;
      this->is_data_valid = 0;
      this->error_code = 0l;
      this->warning_code = 0l;
      std::fill<typename std::array<uint32_t, 4>::iterator, uint32_t>(this->reserved.begin(), this->reserved.end(), 0ul);
      this->crc = 0ul;
    }
  }

  // field types and members
  using _version_type =
    std::array<uint32_t, 2>;
  _version_type version;
  using _mode_pr_type =
    uint8_t;
  _mode_pr_type mode_pr;
  using _tick_type =
    uint32_t;
  _tick_type tick;
  using _imu_state_type =
    std::array<h2x::msg::IMUState_<ContainerAllocator>, 2>;
  _imu_state_type imu_state;
  using _motor_state_type =
    std::array<h2x::msg::MotorState_<ContainerAllocator>, 37>;
  _motor_state_type motor_state;
  using _has_battery_info_type =
    bool;
  _has_battery_info_type has_battery_info;
  using _battery_info_type =
    h2x::msg::BatteryState_<ContainerAllocator>;
  _battery_info_type battery_info;
  using _ground_count_type =
    uint16_t;
  _ground_count_type ground_count;
  using _ground_signal_type =
    std::array<uint8_t, 4>;
  _ground_signal_type ground_signal;
  using _time_seconds_type =
    int32_t;
  _time_seconds_type time_seconds;
  using _is_pcu_valid_type =
    uint8_t;
  _is_pcu_valid_type is_pcu_valid;
  using _pcu_state_type =
    h2x::msg::PCUState_<ContainerAllocator>;
  _pcu_state_type pcu_state;
  using _is_cdu_valid_type =
    uint8_t;
  _is_cdu_valid_type is_cdu_valid;
  using _cdu_state_type =
    h2x::msg::CDUState_<ContainerAllocator>;
  _cdu_state_type cdu_state;
  using _is_data_valid_type =
    uint8_t;
  _is_data_valid_type is_data_valid;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _warning_code_type =
    int32_t;
  _warning_code_type warning_code;
  using _reserved_type =
    std::array<uint32_t, 4>;
  _reserved_type reserved;
  using _crc_type =
    uint32_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__version(
    const std::array<uint32_t, 2> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__mode_pr(
    const uint8_t & _arg)
  {
    this->mode_pr = _arg;
    return *this;
  }
  Type & set__tick(
    const uint32_t & _arg)
  {
    this->tick = _arg;
    return *this;
  }
  Type & set__imu_state(
    const std::array<h2x::msg::IMUState_<ContainerAllocator>, 2> & _arg)
  {
    this->imu_state = _arg;
    return *this;
  }
  Type & set__motor_state(
    const std::array<h2x::msg::MotorState_<ContainerAllocator>, 37> & _arg)
  {
    this->motor_state = _arg;
    return *this;
  }
  Type & set__has_battery_info(
    const bool & _arg)
  {
    this->has_battery_info = _arg;
    return *this;
  }
  Type & set__battery_info(
    const h2x::msg::BatteryState_<ContainerAllocator> & _arg)
  {
    this->battery_info = _arg;
    return *this;
  }
  Type & set__ground_count(
    const uint16_t & _arg)
  {
    this->ground_count = _arg;
    return *this;
  }
  Type & set__ground_signal(
    const std::array<uint8_t, 4> & _arg)
  {
    this->ground_signal = _arg;
    return *this;
  }
  Type & set__time_seconds(
    const int32_t & _arg)
  {
    this->time_seconds = _arg;
    return *this;
  }
  Type & set__is_pcu_valid(
    const uint8_t & _arg)
  {
    this->is_pcu_valid = _arg;
    return *this;
  }
  Type & set__pcu_state(
    const h2x::msg::PCUState_<ContainerAllocator> & _arg)
  {
    this->pcu_state = _arg;
    return *this;
  }
  Type & set__is_cdu_valid(
    const uint8_t & _arg)
  {
    this->is_cdu_valid = _arg;
    return *this;
  }
  Type & set__cdu_state(
    const h2x::msg::CDUState_<ContainerAllocator> & _arg)
  {
    this->cdu_state = _arg;
    return *this;
  }
  Type & set__is_data_valid(
    const uint8_t & _arg)
  {
    this->is_data_valid = _arg;
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
  Type & set__crc(
    const uint32_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::LowState_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::LowState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::LowState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::LowState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::LowState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::LowState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::LowState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::LowState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::LowState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::LowState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__LowState
    std::shared_ptr<h2x::msg::LowState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__LowState
    std::shared_ptr<h2x::msg::LowState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowState_ & other) const
  {
    if (this->version != other.version) {
      return false;
    }
    if (this->mode_pr != other.mode_pr) {
      return false;
    }
    if (this->tick != other.tick) {
      return false;
    }
    if (this->imu_state != other.imu_state) {
      return false;
    }
    if (this->motor_state != other.motor_state) {
      return false;
    }
    if (this->has_battery_info != other.has_battery_info) {
      return false;
    }
    if (this->battery_info != other.battery_info) {
      return false;
    }
    if (this->ground_count != other.ground_count) {
      return false;
    }
    if (this->ground_signal != other.ground_signal) {
      return false;
    }
    if (this->time_seconds != other.time_seconds) {
      return false;
    }
    if (this->is_pcu_valid != other.is_pcu_valid) {
      return false;
    }
    if (this->pcu_state != other.pcu_state) {
      return false;
    }
    if (this->is_cdu_valid != other.is_cdu_valid) {
      return false;
    }
    if (this->cdu_state != other.cdu_state) {
      return false;
    }
    if (this->is_data_valid != other.is_data_valid) {
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
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowState_

// alias to use template instance with default allocator
using LowState =
  h2x::msg::LowState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__LOW_STATE__STRUCT_HPP_
