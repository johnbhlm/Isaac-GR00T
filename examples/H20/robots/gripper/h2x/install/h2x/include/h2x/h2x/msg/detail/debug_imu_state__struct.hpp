// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:msg/DebugIMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_imu_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_IMU_STATE__STRUCT_HPP_
#define H2X__MSG__DETAIL__DEBUG_IMU_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__msg__DebugIMUState __attribute__((deprecated))
#else
# define DEPRECATED__h2x__msg__DebugIMUState __declspec(deprecated)
#endif

namespace h2x
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DebugIMUState_
{
  using Type = DebugIMUState_<ContainerAllocator>;

  explicit DebugIMUState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slave_id = 0;
      this->frame_counter = 0;
      this->status_word = 0;
      this->temperature = 0.0f;
      this->euler_angle_roll = 0.0f;
      this->eluer_angle_pitch = 0.0f;
      this->eluer_angle_yaw = 0.0f;
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
      this->q4 = 0.0f;
      this->accx = 0.0f;
      this->accy = 0.0f;
      this->accz = 0.0f;
      this->angular_vel_x = 0.0f;
      this->angular_vel_y = 0.0f;
      this->angular_vel_z = 0.0f;
      this->mag_x = 0;
      this->mag_y = 0;
      this->mag_z = 0;
      this->txobject_index = 0l;
      this->txobject_data = 0l;
    }
  }

  explicit DebugIMUState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->slave_id = 0;
      this->frame_counter = 0;
      this->status_word = 0;
      this->temperature = 0.0f;
      this->euler_angle_roll = 0.0f;
      this->eluer_angle_pitch = 0.0f;
      this->eluer_angle_yaw = 0.0f;
      this->q1 = 0.0f;
      this->q2 = 0.0f;
      this->q3 = 0.0f;
      this->q4 = 0.0f;
      this->accx = 0.0f;
      this->accy = 0.0f;
      this->accz = 0.0f;
      this->angular_vel_x = 0.0f;
      this->angular_vel_y = 0.0f;
      this->angular_vel_z = 0.0f;
      this->mag_x = 0;
      this->mag_y = 0;
      this->mag_z = 0;
      this->txobject_index = 0l;
      this->txobject_data = 0l;
    }
  }

  // field types and members
  using _slave_id_type =
    uint8_t;
  _slave_id_type slave_id;
  using _frame_counter_type =
    uint8_t;
  _frame_counter_type frame_counter;
  using _status_word_type =
    uint16_t;
  _status_word_type status_word;
  using _temperature_type =
    float;
  _temperature_type temperature;
  using _euler_angle_roll_type =
    float;
  _euler_angle_roll_type euler_angle_roll;
  using _eluer_angle_pitch_type =
    float;
  _eluer_angle_pitch_type eluer_angle_pitch;
  using _eluer_angle_yaw_type =
    float;
  _eluer_angle_yaw_type eluer_angle_yaw;
  using _q1_type =
    float;
  _q1_type q1;
  using _q2_type =
    float;
  _q2_type q2;
  using _q3_type =
    float;
  _q3_type q3;
  using _q4_type =
    float;
  _q4_type q4;
  using _accx_type =
    float;
  _accx_type accx;
  using _accy_type =
    float;
  _accy_type accy;
  using _accz_type =
    float;
  _accz_type accz;
  using _angular_vel_x_type =
    float;
  _angular_vel_x_type angular_vel_x;
  using _angular_vel_y_type =
    float;
  _angular_vel_y_type angular_vel_y;
  using _angular_vel_z_type =
    float;
  _angular_vel_z_type angular_vel_z;
  using _mag_x_type =
    int16_t;
  _mag_x_type mag_x;
  using _mag_y_type =
    int16_t;
  _mag_y_type mag_y;
  using _mag_z_type =
    int16_t;
  _mag_z_type mag_z;
  using _txobject_index_type =
    int32_t;
  _txobject_index_type txobject_index;
  using _txobject_data_type =
    int32_t;
  _txobject_data_type txobject_data;

  // setters for named parameter idiom
  Type & set__slave_id(
    const uint8_t & _arg)
  {
    this->slave_id = _arg;
    return *this;
  }
  Type & set__frame_counter(
    const uint8_t & _arg)
  {
    this->frame_counter = _arg;
    return *this;
  }
  Type & set__status_word(
    const uint16_t & _arg)
  {
    this->status_word = _arg;
    return *this;
  }
  Type & set__temperature(
    const float & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__euler_angle_roll(
    const float & _arg)
  {
    this->euler_angle_roll = _arg;
    return *this;
  }
  Type & set__eluer_angle_pitch(
    const float & _arg)
  {
    this->eluer_angle_pitch = _arg;
    return *this;
  }
  Type & set__eluer_angle_yaw(
    const float & _arg)
  {
    this->eluer_angle_yaw = _arg;
    return *this;
  }
  Type & set__q1(
    const float & _arg)
  {
    this->q1 = _arg;
    return *this;
  }
  Type & set__q2(
    const float & _arg)
  {
    this->q2 = _arg;
    return *this;
  }
  Type & set__q3(
    const float & _arg)
  {
    this->q3 = _arg;
    return *this;
  }
  Type & set__q4(
    const float & _arg)
  {
    this->q4 = _arg;
    return *this;
  }
  Type & set__accx(
    const float & _arg)
  {
    this->accx = _arg;
    return *this;
  }
  Type & set__accy(
    const float & _arg)
  {
    this->accy = _arg;
    return *this;
  }
  Type & set__accz(
    const float & _arg)
  {
    this->accz = _arg;
    return *this;
  }
  Type & set__angular_vel_x(
    const float & _arg)
  {
    this->angular_vel_x = _arg;
    return *this;
  }
  Type & set__angular_vel_y(
    const float & _arg)
  {
    this->angular_vel_y = _arg;
    return *this;
  }
  Type & set__angular_vel_z(
    const float & _arg)
  {
    this->angular_vel_z = _arg;
    return *this;
  }
  Type & set__mag_x(
    const int16_t & _arg)
  {
    this->mag_x = _arg;
    return *this;
  }
  Type & set__mag_y(
    const int16_t & _arg)
  {
    this->mag_y = _arg;
    return *this;
  }
  Type & set__mag_z(
    const int16_t & _arg)
  {
    this->mag_z = _arg;
    return *this;
  }
  Type & set__txobject_index(
    const int32_t & _arg)
  {
    this->txobject_index = _arg;
    return *this;
  }
  Type & set__txobject_data(
    const int32_t & _arg)
  {
    this->txobject_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::msg::DebugIMUState_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::msg::DebugIMUState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::msg::DebugIMUState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::msg::DebugIMUState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::msg::DebugIMUState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::DebugIMUState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::msg::DebugIMUState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::msg::DebugIMUState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::msg::DebugIMUState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::msg::DebugIMUState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__msg__DebugIMUState
    std::shared_ptr<h2x::msg::DebugIMUState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__msg__DebugIMUState
    std::shared_ptr<h2x::msg::DebugIMUState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DebugIMUState_ & other) const
  {
    if (this->slave_id != other.slave_id) {
      return false;
    }
    if (this->frame_counter != other.frame_counter) {
      return false;
    }
    if (this->status_word != other.status_word) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->euler_angle_roll != other.euler_angle_roll) {
      return false;
    }
    if (this->eluer_angle_pitch != other.eluer_angle_pitch) {
      return false;
    }
    if (this->eluer_angle_yaw != other.eluer_angle_yaw) {
      return false;
    }
    if (this->q1 != other.q1) {
      return false;
    }
    if (this->q2 != other.q2) {
      return false;
    }
    if (this->q3 != other.q3) {
      return false;
    }
    if (this->q4 != other.q4) {
      return false;
    }
    if (this->accx != other.accx) {
      return false;
    }
    if (this->accy != other.accy) {
      return false;
    }
    if (this->accz != other.accz) {
      return false;
    }
    if (this->angular_vel_x != other.angular_vel_x) {
      return false;
    }
    if (this->angular_vel_y != other.angular_vel_y) {
      return false;
    }
    if (this->angular_vel_z != other.angular_vel_z) {
      return false;
    }
    if (this->mag_x != other.mag_x) {
      return false;
    }
    if (this->mag_y != other.mag_y) {
      return false;
    }
    if (this->mag_z != other.mag_z) {
      return false;
    }
    if (this->txobject_index != other.txobject_index) {
      return false;
    }
    if (this->txobject_data != other.txobject_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const DebugIMUState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DebugIMUState_

// alias to use template instance with default allocator
using DebugIMUState =
  h2x::msg::DebugIMUState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DEBUG_IMU_STATE__STRUCT_HPP_
