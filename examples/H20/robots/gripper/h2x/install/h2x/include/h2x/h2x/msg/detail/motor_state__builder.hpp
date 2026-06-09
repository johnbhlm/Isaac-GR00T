// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/MotorState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_state.hpp"


#ifndef H2X__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_MotorState_reserved
{
public:
  explicit Init_MotorState_reserved(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::MotorState reserved(::h2x::msg::MotorState::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_warning_code
{
public:
  explicit Init_MotorState_warning_code(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_reserved warning_code(::h2x::msg::MotorState::_warning_code_type arg)
  {
    msg_.warning_code = std::move(arg);
    return Init_MotorState_reserved(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_error_code
{
public:
  explicit Init_MotorState_error_code(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_warning_code error_code(::h2x::msg::MotorState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_MotorState_warning_code(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_kd
{
public:
  explicit Init_MotorState_kd(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_error_code kd(::h2x::msg::MotorState::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_MotorState_error_code(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_kp
{
public:
  explicit Init_MotorState_kp(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_kd kp(::h2x::msg::MotorState::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_MotorState_kd(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_temperature
{
public:
  explicit Init_MotorState_temperature(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_kp temperature(::h2x::msg::MotorState::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorState_kp(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_tau_est
{
public:
  explicit Init_MotorState_tau_est(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_temperature tau_est(::h2x::msg::MotorState::_tau_est_type arg)
  {
    msg_.tau_est = std::move(arg);
    return Init_MotorState_temperature(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_cur
{
public:
  explicit Init_MotorState_cur(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_tau_est cur(::h2x::msg::MotorState::_cur_type arg)
  {
    msg_.cur = std::move(arg);
    return Init_MotorState_tau_est(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_ddq
{
public:
  explicit Init_MotorState_ddq(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_cur ddq(::h2x::msg::MotorState::_ddq_type arg)
  {
    msg_.ddq = std::move(arg);
    return Init_MotorState_cur(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_dq
{
public:
  explicit Init_MotorState_dq(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_ddq dq(::h2x::msg::MotorState::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorState_ddq(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_q
{
public:
  explicit Init_MotorState_q(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_dq q(::h2x::msg::MotorState::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorState_dq(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_operation_mode
{
public:
  explicit Init_MotorState_operation_mode(::h2x::msg::MotorState & msg)
  : msg_(msg)
  {}
  Init_MotorState_q operation_mode(::h2x::msg::MotorState::_operation_mode_type arg)
  {
    msg_.operation_mode = std::move(arg);
    return Init_MotorState_q(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

class Init_MotorState_mode
{
public:
  Init_MotorState_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorState_operation_mode mode(::h2x::msg::MotorState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorState_operation_mode(msg_);
  }

private:
  ::h2x::msg::MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::MotorState>()
{
  return h2x::msg::builder::Init_MotorState_mode();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__MOTOR_STATE__BUILDER_HPP_
