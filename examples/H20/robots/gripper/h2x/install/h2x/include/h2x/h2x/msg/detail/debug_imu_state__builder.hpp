// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/DebugIMUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/debug_imu_state.hpp"


#ifndef H2X__MSG__DETAIL__DEBUG_IMU_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__DEBUG_IMU_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/debug_imu_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_DebugIMUState_txobject_data
{
public:
  explicit Init_DebugIMUState_txobject_data(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::DebugIMUState txobject_data(::h2x::msg::DebugIMUState::_txobject_data_type arg)
  {
    msg_.txobject_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_txobject_index
{
public:
  explicit Init_DebugIMUState_txobject_index(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_txobject_data txobject_index(::h2x::msg::DebugIMUState::_txobject_index_type arg)
  {
    msg_.txobject_index = std::move(arg);
    return Init_DebugIMUState_txobject_data(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_mag_z
{
public:
  explicit Init_DebugIMUState_mag_z(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_txobject_index mag_z(::h2x::msg::DebugIMUState::_mag_z_type arg)
  {
    msg_.mag_z = std::move(arg);
    return Init_DebugIMUState_txobject_index(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_mag_y
{
public:
  explicit Init_DebugIMUState_mag_y(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_mag_z mag_y(::h2x::msg::DebugIMUState::_mag_y_type arg)
  {
    msg_.mag_y = std::move(arg);
    return Init_DebugIMUState_mag_z(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_mag_x
{
public:
  explicit Init_DebugIMUState_mag_x(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_mag_y mag_x(::h2x::msg::DebugIMUState::_mag_x_type arg)
  {
    msg_.mag_x = std::move(arg);
    return Init_DebugIMUState_mag_y(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_angular_vel_z
{
public:
  explicit Init_DebugIMUState_angular_vel_z(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_mag_x angular_vel_z(::h2x::msg::DebugIMUState::_angular_vel_z_type arg)
  {
    msg_.angular_vel_z = std::move(arg);
    return Init_DebugIMUState_mag_x(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_angular_vel_y
{
public:
  explicit Init_DebugIMUState_angular_vel_y(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_angular_vel_z angular_vel_y(::h2x::msg::DebugIMUState::_angular_vel_y_type arg)
  {
    msg_.angular_vel_y = std::move(arg);
    return Init_DebugIMUState_angular_vel_z(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_angular_vel_x
{
public:
  explicit Init_DebugIMUState_angular_vel_x(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_angular_vel_y angular_vel_x(::h2x::msg::DebugIMUState::_angular_vel_x_type arg)
  {
    msg_.angular_vel_x = std::move(arg);
    return Init_DebugIMUState_angular_vel_y(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_accz
{
public:
  explicit Init_DebugIMUState_accz(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_angular_vel_x accz(::h2x::msg::DebugIMUState::_accz_type arg)
  {
    msg_.accz = std::move(arg);
    return Init_DebugIMUState_angular_vel_x(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_accy
{
public:
  explicit Init_DebugIMUState_accy(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_accz accy(::h2x::msg::DebugIMUState::_accy_type arg)
  {
    msg_.accy = std::move(arg);
    return Init_DebugIMUState_accz(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_accx
{
public:
  explicit Init_DebugIMUState_accx(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_accy accx(::h2x::msg::DebugIMUState::_accx_type arg)
  {
    msg_.accx = std::move(arg);
    return Init_DebugIMUState_accy(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_q4
{
public:
  explicit Init_DebugIMUState_q4(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_accx q4(::h2x::msg::DebugIMUState::_q4_type arg)
  {
    msg_.q4 = std::move(arg);
    return Init_DebugIMUState_accx(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_q3
{
public:
  explicit Init_DebugIMUState_q3(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_q4 q3(::h2x::msg::DebugIMUState::_q3_type arg)
  {
    msg_.q3 = std::move(arg);
    return Init_DebugIMUState_q4(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_q2
{
public:
  explicit Init_DebugIMUState_q2(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_q3 q2(::h2x::msg::DebugIMUState::_q2_type arg)
  {
    msg_.q2 = std::move(arg);
    return Init_DebugIMUState_q3(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_q1
{
public:
  explicit Init_DebugIMUState_q1(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_q2 q1(::h2x::msg::DebugIMUState::_q1_type arg)
  {
    msg_.q1 = std::move(arg);
    return Init_DebugIMUState_q2(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_eluer_angle_yaw
{
public:
  explicit Init_DebugIMUState_eluer_angle_yaw(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_q1 eluer_angle_yaw(::h2x::msg::DebugIMUState::_eluer_angle_yaw_type arg)
  {
    msg_.eluer_angle_yaw = std::move(arg);
    return Init_DebugIMUState_q1(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_eluer_angle_pitch
{
public:
  explicit Init_DebugIMUState_eluer_angle_pitch(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_eluer_angle_yaw eluer_angle_pitch(::h2x::msg::DebugIMUState::_eluer_angle_pitch_type arg)
  {
    msg_.eluer_angle_pitch = std::move(arg);
    return Init_DebugIMUState_eluer_angle_yaw(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_euler_angle_roll
{
public:
  explicit Init_DebugIMUState_euler_angle_roll(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_eluer_angle_pitch euler_angle_roll(::h2x::msg::DebugIMUState::_euler_angle_roll_type arg)
  {
    msg_.euler_angle_roll = std::move(arg);
    return Init_DebugIMUState_eluer_angle_pitch(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_temperature
{
public:
  explicit Init_DebugIMUState_temperature(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_euler_angle_roll temperature(::h2x::msg::DebugIMUState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_DebugIMUState_euler_angle_roll(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_status_word
{
public:
  explicit Init_DebugIMUState_status_word(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_temperature status_word(::h2x::msg::DebugIMUState::_status_word_type arg)
  {
    msg_.status_word = std::move(arg);
    return Init_DebugIMUState_temperature(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_frame_counter
{
public:
  explicit Init_DebugIMUState_frame_counter(::h2x::msg::DebugIMUState & msg)
  : msg_(msg)
  {}
  Init_DebugIMUState_status_word frame_counter(::h2x::msg::DebugIMUState::_frame_counter_type arg)
  {
    msg_.frame_counter = std::move(arg);
    return Init_DebugIMUState_status_word(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

class Init_DebugIMUState_slave_id
{
public:
  Init_DebugIMUState_slave_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DebugIMUState_frame_counter slave_id(::h2x::msg::DebugIMUState::_slave_id_type arg)
  {
    msg_.slave_id = std::move(arg);
    return Init_DebugIMUState_frame_counter(msg_);
  }

private:
  ::h2x::msg::DebugIMUState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::DebugIMUState>()
{
  return h2x::msg::builder::Init_DebugIMUState_slave_id();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DEBUG_IMU_STATE__BUILDER_HPP_
