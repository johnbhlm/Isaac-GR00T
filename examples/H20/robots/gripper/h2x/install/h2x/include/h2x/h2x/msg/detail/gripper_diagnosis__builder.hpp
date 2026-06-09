// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/GripperDiagnosis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/gripper_diagnosis.hpp"


#ifndef H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__BUILDER_HPP_
#define H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/gripper_diagnosis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_GripperDiagnosis_crc
{
public:
  explicit Init_GripperDiagnosis_crc(::h2x::msg::GripperDiagnosis & msg)
  : msg_(msg)
  {}
  ::h2x::msg::GripperDiagnosis crc(::h2x::msg::GripperDiagnosis::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::GripperDiagnosis msg_;
};

class Init_GripperDiagnosis_warning_code
{
public:
  explicit Init_GripperDiagnosis_warning_code(::h2x::msg::GripperDiagnosis & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnosis_crc warning_code(::h2x::msg::GripperDiagnosis::_warning_code_type arg)
  {
    msg_.warning_code = std::move(arg);
    return Init_GripperDiagnosis_crc(msg_);
  }

private:
  ::h2x::msg::GripperDiagnosis msg_;
};

class Init_GripperDiagnosis_error_code
{
public:
  explicit Init_GripperDiagnosis_error_code(::h2x::msg::GripperDiagnosis & msg)
  : msg_(msg)
  {}
  Init_GripperDiagnosis_warning_code error_code(::h2x::msg::GripperDiagnosis::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_GripperDiagnosis_warning_code(msg_);
  }

private:
  ::h2x::msg::GripperDiagnosis msg_;
};

class Init_GripperDiagnosis_ds_data
{
public:
  Init_GripperDiagnosis_ds_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperDiagnosis_error_code ds_data(::h2x::msg::GripperDiagnosis::_ds_data_type arg)
  {
    msg_.ds_data = std::move(arg);
    return Init_GripperDiagnosis_error_code(msg_);
  }

private:
  ::h2x::msg::GripperDiagnosis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::GripperDiagnosis>()
{
  return h2x::msg::builder::Init_GripperDiagnosis_ds_data();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__GRIPPER_DIAGNOSIS__BUILDER_HPP_
