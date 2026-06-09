// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/GripperState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_state.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/gripper_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_GripperState_crc
{
public:
  explicit Init_GripperState_crc(::h2x::msg::GripperState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::GripperState crc(::h2x::msg::GripperState::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::GripperState msg_;
};

class Init_GripperState_is_data_valid
{
public:
  explicit Init_GripperState_is_data_valid(::h2x::msg::GripperState & msg)
  : msg_(msg)
  {}
  Init_GripperState_crc is_data_valid(::h2x::msg::GripperState::_is_data_valid_type arg)
  {
    msg_.is_data_valid = std::move(arg);
    return Init_GripperState_crc(msg_);
  }

private:
  ::h2x::msg::GripperState msg_;
};

class Init_GripperState_motor_state
{
public:
  explicit Init_GripperState_motor_state(::h2x::msg::GripperState & msg)
  : msg_(msg)
  {}
  Init_GripperState_is_data_valid motor_state(::h2x::msg::GripperState::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return Init_GripperState_is_data_valid(msg_);
  }

private:
  ::h2x::msg::GripperState msg_;
};

class Init_GripperState_tick
{
public:
  Init_GripperState_tick()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperState_motor_state tick(::h2x::msg::GripperState::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_GripperState_motor_state(msg_);
  }

private:
  ::h2x::msg::GripperState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::GripperState>()
{
  return h2x::msg::builder::Init_GripperState_tick();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__GRIPPER_STATE__BUILDER_HPP_
