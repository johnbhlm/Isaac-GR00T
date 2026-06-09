// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/BatteryState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/battery_state.hpp"


#ifndef H2X__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_BatteryState_warning_code
{
public:
  explicit Init_BatteryState_warning_code(::h2x::msg::BatteryState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::BatteryState warning_code(::h2x::msg::BatteryState::_warning_code_type arg)
  {
    msg_.warning_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::BatteryState msg_;
};

class Init_BatteryState_error_code
{
public:
  explicit Init_BatteryState_error_code(::h2x::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_warning_code error_code(::h2x::msg::BatteryState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_BatteryState_warning_code(msg_);
  }

private:
  ::h2x::msg::BatteryState msg_;
};

class Init_BatteryState_battery_low_warning
{
public:
  explicit Init_BatteryState_battery_low_warning(::h2x::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_error_code battery_low_warning(::h2x::msg::BatteryState::_battery_low_warning_type arg)
  {
    msg_.battery_low_warning = std::move(arg);
    return Init_BatteryState_error_code(msg_);
  }

private:
  ::h2x::msg::BatteryState msg_;
};

class Init_BatteryState_battery_state
{
public:
  explicit Init_BatteryState_battery_state(::h2x::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_battery_low_warning battery_state(::h2x::msg::BatteryState::_battery_state_type arg)
  {
    msg_.battery_state = std::move(arg);
    return Init_BatteryState_battery_low_warning(msg_);
  }

private:
  ::h2x::msg::BatteryState msg_;
};

class Init_BatteryState_battery_percentage
{
public:
  Init_BatteryState_battery_percentage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryState_battery_state battery_percentage(::h2x::msg::BatteryState::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_BatteryState_battery_state(msg_);
  }

private:
  ::h2x::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::BatteryState>()
{
  return h2x::msg::builder::Init_BatteryState_battery_percentage();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
