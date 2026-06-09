// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/GripperDiagnosticData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_diagnostic_data.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__BUILDER_HPP_
#define H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/gripper_diagnostic_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_GripperDiagnosticData_mode_display
{
public:
  explicit Init_GripperDiagnosticData_mode_display(::h2x::msg::GripperDiagnosticData & msg)
  : msg_(msg)
  {}
  ::h2x::msg::GripperDiagnosticData mode_display(::h2x::msg::GripperDiagnosticData::_mode_display_type arg)
  {
    msg_.mode_display = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::GripperDiagnosticData msg_;
};

class Init_GripperDiagnosticData_mode_of_operation
{
public:
  Init_GripperDiagnosticData_mode_of_operation()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperDiagnosticData_mode_display mode_of_operation(::h2x::msg::GripperDiagnosticData::_mode_of_operation_type arg)
  {
    msg_.mode_of_operation = std::move(arg);
    return Init_GripperDiagnosticData_mode_display(msg_);
  }

private:
  ::h2x::msg::GripperDiagnosticData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::GripperDiagnosticData>()
{
  return h2x::msg::builder::Init_GripperDiagnosticData_mode_of_operation();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__GRIPPER_DIAGNOSTIC_DATA__BUILDER_HPP_
