// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/IMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/imu_state.hpp"


#ifndef H2X__MSG__DETAIL__IMU_STATE__STRUCT_HPP_
#define H2X__MSG__DETAIL__IMU_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__IMUState __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__IMUState __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IMUState_
{
  using Type = IMUState_<ContainerAllocator>;

  explicit IMUState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion.begin(), this->quaternion.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyroscope.begin(), this->gyroscope.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelerometer.begin(), this->accelerometer.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->rpy.begin(), this->rpy.end(), 0.0f);
      this->temperature = 0.0f;
      this->error_code = 0l;
      this->warning_code = 0l;
    }
  }

  explicit IMUState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : quaternion(_alloc),
    gyroscope(_alloc),
    accelerometer(_alloc),
    rpy(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<float, 4>::iterator, float>(this->quaternion.begin(), this->quaternion.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->gyroscope.begin(), this->gyroscope.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->accelerometer.begin(), this->accelerometer.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->rpy.begin(), this->rpy.end(), 0.0f);
      this->temperature = 0.0f;
      this->error_code = 0l;
      this->warning_code = 0l;
    }
  }

  // field types and members
  using _quaternion_type =
    std::array<float, 4>;
  _quaternion_type quaternion;
  using _gyroscope_type =
    std::array<float, 3>;
  _gyroscope_type gyroscope;
  using _accelerometer_type =
    std::array<float, 3>;
  _accelerometer_type accelerometer;
  using _rpy_type =
    std::array<float, 3>;
  _rpy_type rpy;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _warning_code_type =
    int32_t;
  _warning_code_type warning_code;

  // setters for named parameter idiom
  Type & set__quaternion(
    const std::array<float, 4> & _arg)
  {
    this->quaternion = _arg;
    return *this;
  }
  Type & set__gyroscope(
    const std::array<float, 3> & _arg)
  {
    this->gyroscope = _arg;
    return *this;
  }
  Type & set__accelerometer(
    const std::array<float, 3> & _arg)
  {
    this->accelerometer = _arg;
    return *this;
  }
  Type & set__rpy(
    const std::array<float, 3> & _arg)
  {
    this->rpy = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::IMUState_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::IMUState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::IMUState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::IMUState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::IMUState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::IMUState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::IMUState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::IMUState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::IMUState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::IMUState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__IMUState
    std::shared_ptr<h2x::msg::IMUState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__IMUState
    std::shared_ptr<h2x::msg::IMUState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUState_ & other) const
  {
    if (this->quaternion != other.quaternion) {
      return false;
    }
    if (this->gyroscope != other.gyroscope) {
      return false;
    }
    if (this->accelerometer != other.accelerometer) {
      return false;
    }
    if (this->rpy != other.rpy) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->warning_code != other.warning_code) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUState_

// alias to use template instance with default allocator
using IMUState =
  h2x::msg::IMUState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__IMU_STATE__STRUCT_HPP_
