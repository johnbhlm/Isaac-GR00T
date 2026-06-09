// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/MotorCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_cmd.hpp"


#ifndef H2X__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
#define H2X__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/motor_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_MotorCmd_reserved
{
public:
  explicit Init_MotorCmd_reserved(::h2x::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  ::h2x::msg::MotorCmd reserved(::h2x::msg::MotorCmd::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::MotorCmd msg_;
};

class Init_MotorCmd_kd
{
public:
  explicit Init_MotorCmd_kd(::h2x::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_reserved kd(::h2x::msg::MotorCmd::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_MotorCmd_reserved(msg_);
  }

private:
  ::h2x::msg::MotorCmd msg_;
};

class Init_MotorCmd_kp
{
public:
  explicit Init_MotorCmd_kp(::h2x::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_kd kp(::h2x::msg::MotorCmd::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorCmd_kd(msg_);
  }

private:
  ::h2x::msg::MotorCmd msg_;
};

class Init_MotorCmd_tau
{
public:
  explicit Init_MotorCmd_tau(::h2x::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_kp tau(::h2x::msg::MotorCmd::_tau_type arg)
  {
    msg_.tau = std::move(arg);
    return Init_MotorCmd_kp(msg_);
  }

private:
  ::h2x::msg::MotorCmd msg_;
};

class Init_MotorCmd_dq
{
public:
  explicit Init_MotorCmd_dq(::h2x::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_tau dq(::h2x::msg::MotorCmd::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorCmd_tau(msg_);
  }

private:
  ::h2x::msg::MotorCmd msg_;
};

class Init_MotorCmd_q
{
public:
  explicit Init_MotorCmd_q(::h2x::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_dq q(::h2x::msg::MotorCmd::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorCmd_dq(msg_);
  }

private:
  ::h2x::msg::MotorCmd msg_;
};

class Init_MotorCmd_operation_mode
{
public:
  explicit Init_MotorCmd_operation_mode(::h2x::msg::MotorCmd & msg)
  : msg_(msg)
  {}
  Init_MotorCmd_q operation_mode(::h2x::msg::MotorCmd::_operation_mode_type arg)
  {
    msg_.operation_mode = std::move(arg);
    return Init_MotorCmd_q(msg_);
  }

private:
  ::h2x::msg::MotorCmd msg_;
};

class Init_MotorCmd_mode
{
public:
  Init_MotorCmd_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCmd_operation_mode mode(::h2x::msg::MotorCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCmd_operation_mode(msg_);
  }

private:
  ::h2x::msg::MotorCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::MotorCmd>()
{
  return h2x::msg::builder::Init_MotorCmd_mode();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__MOTOR_CMD__BUILDER_HPP_
