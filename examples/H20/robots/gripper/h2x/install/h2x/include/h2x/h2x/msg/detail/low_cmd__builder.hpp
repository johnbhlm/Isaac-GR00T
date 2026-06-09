// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/LowCmd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/low_cmd.hpp"


#ifndef H2X__MSG__DETAIL__LOW_CMD__BUILDER_HPP_
#define H2X__MSG__DETAIL__LOW_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/low_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_LowCmd_crc
{
public:
  explicit Init_LowCmd_crc(::h2x::msg::LowCmd & msg)
  : msg_(msg)
  {}
  ::h2x::msg::LowCmd crc(::h2x::msg::LowCmd::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::LowCmd msg_;
};

class Init_LowCmd_reserved
{
public:
  explicit Init_LowCmd_reserved(::h2x::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_crc reserved(::h2x::msg::LowCmd::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_LowCmd_crc(msg_);
  }

private:
  ::h2x::msg::LowCmd msg_;
};

class Init_LowCmd_motor_cmd
{
public:
  explicit Init_LowCmd_motor_cmd(::h2x::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_reserved motor_cmd(::h2x::msg::LowCmd::_motor_cmd_type arg)
  {
    msg_.motor_cmd = std::move(arg);
    return Init_LowCmd_reserved(msg_);
  }

private:
  ::h2x::msg::LowCmd msg_;
};

class Init_LowCmd_mode_pr
{
public:
  Init_LowCmd_mode_pr()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowCmd_motor_cmd mode_pr(::h2x::msg::LowCmd::_mode_pr_type arg)
  {
    msg_.mode_pr = std::move(arg);
    return Init_LowCmd_motor_cmd(msg_);
  }

private:
  ::h2x::msg::LowCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::LowCmd>()
{
  return h2x::msg::builder::Init_LowCmd_mode_pr();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__LOW_CMD__BUILDER_HPP_
