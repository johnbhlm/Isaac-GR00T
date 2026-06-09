// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/GripperCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_cmd.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_CMD__BUILDER_HPP_
#define H2X__MSG__DETAIL__GRIPPER_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/gripper_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_GripperCmd_crc
{
public:
  explicit Init_GripperCmd_crc(::h2x::msg::GripperCmd & msg)
  : msg_(msg)
  {}
  ::h2x::msg::GripperCmd crc(::h2x::msg::GripperCmd::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::GripperCmd msg_;
};

class Init_GripperCmd_motor_cmd
{
public:
  Init_GripperCmd_motor_cmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCmd_crc motor_cmd(::h2x::msg::GripperCmd::_motor_cmd_type arg)
  {
    msg_.motor_cmd = std::move(arg);
    return Init_GripperCmd_crc(msg_);
  }

private:
  ::h2x::msg::GripperCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::GripperCmd>()
{
  return h2x::msg::builder::Init_GripperCmd_motor_cmd();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__GRIPPER_CMD__BUILDER_HPP_
