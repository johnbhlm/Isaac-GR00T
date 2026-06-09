// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/IMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/imu_state.hpp"


#ifndef H2X__MSG__DETAIL__IMU_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__IMU_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/imu_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_IMUState_warning_code
{
public:
  explicit Init_IMUState_warning_code(::h2x::msg::IMUState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::IMUState warning_code(::h2x::msg::IMUState::_warning_code_type arg)
  {
    msg_.warning_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::IMUState msg_;
};

class Init_IMUState_error_code
{
public:
  explicit Init_IMUState_error_code(::h2x::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_warning_code error_code(::h2x::msg::IMUState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_IMUState_warning_code(msg_);
  }

private:
  ::h2x::msg::IMUState msg_;
};

class Init_IMUState_temperature
{
public:
  explicit Init_IMUState_temperature(::h2x::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_error_code temperature(::h2x::msg::IMUState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_IMUState_error_code(msg_);
  }

private:
  ::h2x::msg::IMUState msg_;
};

class Init_IMUState_rpy
{
public:
  explicit Init_IMUState_rpy(::h2x::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_temperature rpy(::h2x::msg::IMUState::_rpy_type arg)
  {
    msg_.rpy = std::move(arg);
    return Init_IMUState_temperature(msg_);
  }

private:
  ::h2x::msg::IMUState msg_;
};

class Init_IMUState_accelerometer
{
public:
  explicit Init_IMUState_accelerometer(::h2x::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_rpy accelerometer(::h2x::msg::IMUState::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return Init_IMUState_rpy(msg_);
  }

private:
  ::h2x::msg::IMUState msg_;
};

class Init_IMUState_gyroscope
{
public:
  explicit Init_IMUState_gyroscope(::h2x::msg::IMUState & msg)
  : msg_(msg)
  {}
  Init_IMUState_accelerometer gyroscope(::h2x::msg::IMUState::_gyroscope_type arg)
  {
    msg_.gyroscope = std::move(arg);
    return Init_IMUState_accelerometer(msg_);
  }

private:
  ::h2x::msg::IMUState msg_;
};

class Init_IMUState_quaternion
{
public:
  Init_IMUState_quaternion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUState_gyroscope quaternion(::h2x::msg::IMUState::_quaternion_type arg)
  {
    msg_.quaternion = std::move(arg);
    return Init_IMUState_gyroscope(msg_);
  }

private:
  ::h2x::msg::IMUState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::IMUState>()
{
  return h2x::msg::builder::Init_IMUState_quaternion();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__IMU_STATE__BUILDER_HPP_
