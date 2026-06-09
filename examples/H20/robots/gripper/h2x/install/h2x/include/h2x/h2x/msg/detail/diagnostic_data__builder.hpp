// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/DiagnosticData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/diagnostic_data.hpp"


#ifndef H2X__MSG__DETAIL__DIAGNOSTIC_DATA__BUILDER_HPP_
#define H2X__MSG__DETAIL__DIAGNOSTIC_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/diagnostic_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_DiagnosticData_debug_motor_state
{
public:
  explicit Init_DiagnosticData_debug_motor_state(::h2x::msg::DiagnosticData & msg)
  : msg_(msg)
  {}
  ::h2x::msg::DiagnosticData debug_motor_state(::h2x::msg::DiagnosticData::_debug_motor_state_type arg)
  {
    msg_.debug_motor_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::DiagnosticData msg_;
};

class Init_DiagnosticData_mode_display
{
public:
  explicit Init_DiagnosticData_mode_display(::h2x::msg::DiagnosticData & msg)
  : msg_(msg)
  {}
  Init_DiagnosticData_debug_motor_state mode_display(::h2x::msg::DiagnosticData::_mode_display_type arg)
  {
    msg_.mode_display = std::move(arg);
    return Init_DiagnosticData_debug_motor_state(msg_);
  }

private:
  ::h2x::msg::DiagnosticData msg_;
};

class Init_DiagnosticData_mode_of_operation
{
public:
  explicit Init_DiagnosticData_mode_of_operation(::h2x::msg::DiagnosticData & msg)
  : msg_(msg)
  {}
  Init_DiagnosticData_mode_display mode_of_operation(::h2x::msg::DiagnosticData::_mode_of_operation_type arg)
  {
    msg_.mode_of_operation = std::move(arg);
    return Init_DiagnosticData_mode_display(msg_);
  }

private:
  ::h2x::msg::DiagnosticData msg_;
};

class Init_DiagnosticData_error_register
{
public:
  explicit Init_DiagnosticData_error_register(::h2x::msg::DiagnosticData & msg)
  : msg_(msg)
  {}
  Init_DiagnosticData_mode_of_operation error_register(::h2x::msg::DiagnosticData::_error_register_type arg)
  {
    msg_.error_register = std::move(arg);
    return Init_DiagnosticData_mode_of_operation(msg_);
  }

private:
  ::h2x::msg::DiagnosticData msg_;
};

class Init_DiagnosticData_status_word
{
public:
  explicit Init_DiagnosticData_status_word(::h2x::msg::DiagnosticData & msg)
  : msg_(msg)
  {}
  Init_DiagnosticData_error_register status_word(::h2x::msg::DiagnosticData::_status_word_type arg)
  {
    msg_.status_word = std::move(arg);
    return Init_DiagnosticData_error_register(msg_);
  }

private:
  ::h2x::msg::DiagnosticData msg_;
};

class Init_DiagnosticData_control_word
{
public:
  Init_DiagnosticData_control_word()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagnosticData_status_word control_word(::h2x::msg::DiagnosticData::_control_word_type arg)
  {
    msg_.control_word = std::move(arg);
    return Init_DiagnosticData_status_word(msg_);
  }

private:
  ::h2x::msg::DiagnosticData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::DiagnosticData>()
{
  return h2x::msg::builder::Init_DiagnosticData_control_word();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DIAGNOSTIC_DATA__BUILDER_HPP_
