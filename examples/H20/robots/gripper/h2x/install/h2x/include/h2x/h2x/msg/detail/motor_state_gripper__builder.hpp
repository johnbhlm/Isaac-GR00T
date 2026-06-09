// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/MotorStateGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_state_gripper.hpp"


#ifndef H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__BUILDER_HPP_
#define H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/motor_state_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_MotorStateGripper_reserved
{
public:
  explicit Init_MotorStateGripper_reserved(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  ::h2x::msg::MotorStateGripper reserved(::h2x::msg::MotorStateGripper::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_warning_code
{
public:
  explicit Init_MotorStateGripper_warning_code(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_reserved warning_code(::h2x::msg::MotorStateGripper::_warning_code_type arg)
  {
    msg_.warning_code = std::move(arg);
    return Init_MotorStateGripper_reserved(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_error_code
{
public:
  explicit Init_MotorStateGripper_error_code(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_warning_code error_code(::h2x::msg::MotorStateGripper::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_MotorStateGripper_warning_code(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_cur
{
public:
  explicit Init_MotorStateGripper_cur(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_error_code cur(::h2x::msg::MotorStateGripper::_cur_type arg)
  {
    msg_.cur = std::move(arg);
    return Init_MotorStateGripper_error_code(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_temperature
{
public:
  explicit Init_MotorStateGripper_temperature(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_cur temperature(::h2x::msg::MotorStateGripper::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_MotorStateGripper_cur(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_finger2_force
{
public:
  explicit Init_MotorStateGripper_finger2_force(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_temperature finger2_force(::h2x::msg::MotorStateGripper::_finger2_force_type arg)
  {
    msg_.finger2_force = std::move(arg);
    return Init_MotorStateGripper_temperature(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_finger1_force
{
public:
  explicit Init_MotorStateGripper_finger1_force(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_finger2_force finger1_force(::h2x::msg::MotorStateGripper::_finger1_force_type arg)
  {
    msg_.finger1_force = std::move(arg);
    return Init_MotorStateGripper_finger2_force(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_dq
{
public:
  explicit Init_MotorStateGripper_dq(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_finger1_force dq(::h2x::msg::MotorStateGripper::_dq_type arg)
  {
    msg_.dq = std::move(arg);
    return Init_MotorStateGripper_finger1_force(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_q
{
public:
  explicit Init_MotorStateGripper_q(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_dq q(::h2x::msg::MotorStateGripper::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorStateGripper_dq(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_hold_state
{
public:
  explicit Init_MotorStateGripper_hold_state(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_q hold_state(::h2x::msg::MotorStateGripper::_hold_state_type arg)
  {
    msg_.hold_state = std::move(arg);
    return Init_MotorStateGripper_q(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_state
{
public:
  explicit Init_MotorStateGripper_state(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_hold_state state(::h2x::msg::MotorStateGripper::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_MotorStateGripper_hold_state(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_arrive_signal
{
public:
  explicit Init_MotorStateGripper_arrive_signal(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_state arrive_signal(::h2x::msg::MotorStateGripper::_arrive_signal_type arg)
  {
    msg_.arrive_signal = std::move(arg);
    return Init_MotorStateGripper_state(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_operation_mode
{
public:
  explicit Init_MotorStateGripper_operation_mode(::h2x::msg::MotorStateGripper & msg)
  : msg_(msg)
  {}
  Init_MotorStateGripper_arrive_signal operation_mode(::h2x::msg::MotorStateGripper::_operation_mode_type arg)
  {
    msg_.operation_mode = std::move(arg);
    return Init_MotorStateGripper_arrive_signal(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

class Init_MotorStateGripper_mode
{
public:
  Init_MotorStateGripper_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorStateGripper_operation_mode mode(::h2x::msg::MotorStateGripper::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorStateGripper_operation_mode(msg_);
  }

private:
  ::h2x::msg::MotorStateGripper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::MotorStateGripper>()
{
  return h2x::msg::builder::Init_MotorStateGripper_mode();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__MOTOR_STATE_GRIPPER__BUILDER_HPP_
