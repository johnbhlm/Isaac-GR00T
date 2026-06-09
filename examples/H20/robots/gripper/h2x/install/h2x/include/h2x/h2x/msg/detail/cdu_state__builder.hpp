// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/CDUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/cdu_state.hpp"


#ifndef H2X__MSG__DETAIL__CDU_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__CDU_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/cdu_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_CDUState_warning_code
{
public:
  explicit Init_CDUState_warning_code(::h2x::msg::CDUState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::CDUState warning_code(::h2x::msg::CDUState::_warning_code_type arg)
  {
    msg_.warning_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::CDUState msg_;
};

class Init_CDUState_error_code
{
public:
  Init_CDUState_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CDUState_warning_code error_code(::h2x::msg::CDUState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_CDUState_warning_code(msg_);
  }

private:
  ::h2x::msg::CDUState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::CDUState>()
{
  return h2x::msg::builder::Init_CDUState_error_code();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__CDU_STATE__BUILDER_HPP_
