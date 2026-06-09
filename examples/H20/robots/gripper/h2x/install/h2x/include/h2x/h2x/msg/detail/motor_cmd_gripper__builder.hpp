// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/MotorCmdGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/motor_cmd_gripper.hpp"


#ifndef H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__BUILDER_HPP_
#define H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/motor_cmd_gripper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_MotorCmdGripper_reserved
{
public:
  explicit Init_MotorCmdGripper_reserved(::h2x::msg::MotorCmdGripper & msg)
  : msg_(msg)
  {}
  ::h2x::msg::MotorCmdGripper reserved(::h2x::msg::MotorCmdGripper::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::MotorCmdGripper msg_;
};

class Init_MotorCmdGripper_finger_force
{
public:
  explicit Init_MotorCmdGripper_finger_force(::h2x::msg::MotorCmdGripper & msg)
  : msg_(msg)
  {}
  Init_MotorCmdGripper_reserved finger_force(::h2x::msg::MotorCmdGripper::_finger_force_type arg)
  {
    msg_.finger_force = std::move(arg);
    return Init_MotorCmdGripper_reserved(msg_);
  }

private:
  ::h2x::msg::MotorCmdGripper msg_;
};

class Init_MotorCmdGripper_acc_percentage
{
public:
  explicit Init_MotorCmdGripper_acc_percentage(::h2x::msg::MotorCmdGripper & msg)
  : msg_(msg)
  {}
  Init_MotorCmdGripper_finger_force acc_percentage(::h2x::msg::MotorCmdGripper::_acc_percentage_type arg)
  {
    msg_.acc_percentage = std::move(arg);
    return Init_MotorCmdGripper_finger_force(msg_);
  }

private:
  ::h2x::msg::MotorCmdGripper msg_;
};

class Init_MotorCmdGripper_dq_percentage
{
public:
  explicit Init_MotorCmdGripper_dq_percentage(::h2x::msg::MotorCmdGripper & msg)
  : msg_(msg)
  {}
  Init_MotorCmdGripper_acc_percentage dq_percentage(::h2x::msg::MotorCmdGripper::_dq_percentage_type arg)
  {
    msg_.dq_percentage = std::move(arg);
    return Init_MotorCmdGripper_acc_percentage(msg_);
  }

private:
  ::h2x::msg::MotorCmdGripper msg_;
};

class Init_MotorCmdGripper_q
{
public:
  explicit Init_MotorCmdGripper_q(::h2x::msg::MotorCmdGripper & msg)
  : msg_(msg)
  {}
  Init_MotorCmdGripper_dq_percentage q(::h2x::msg::MotorCmdGripper::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_MotorCmdGripper_dq_percentage(msg_);
  }

private:
  ::h2x::msg::MotorCmdGripper msg_;
};

class Init_MotorCmdGripper_operation_mode
{
public:
  explicit Init_MotorCmdGripper_operation_mode(::h2x::msg::MotorCmdGripper & msg)
  : msg_(msg)
  {}
  Init_MotorCmdGripper_q operation_mode(::h2x::msg::MotorCmdGripper::_operation_mode_type arg)
  {
    msg_.operation_mode = std::move(arg);
    return Init_MotorCmdGripper_q(msg_);
  }

private:
  ::h2x::msg::MotorCmdGripper msg_;
};

class Init_MotorCmdGripper_mode
{
public:
  Init_MotorCmdGripper_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCmdGripper_operation_mode mode(::h2x::msg::MotorCmdGripper::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_MotorCmdGripper_operation_mode(msg_);
  }

private:
  ::h2x::msg::MotorCmdGripper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::MotorCmdGripper>()
{
  return h2x::msg::builder::Init_MotorCmdGripper_mode();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__MOTOR_CMD_GRIPPER__BUILDER_HPP_
