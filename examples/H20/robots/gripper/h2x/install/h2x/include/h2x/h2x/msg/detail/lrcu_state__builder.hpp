// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/LRCUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/lrcu_state.hpp"


#ifndef H2X__MSG__DETAIL__LRCU_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__LRCU_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/lrcu_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_LRCUState_crc
{
public:
  explicit Init_LRCUState_crc(::h2x::msg::LRCUState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::LRCUState crc(::h2x::msg::LRCUState::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::LRCUState msg_;
};

class Init_LRCUState_led_b
{
public:
  explicit Init_LRCUState_led_b(::h2x::msg::LRCUState & msg)
  : msg_(msg)
  {}
  Init_LRCUState_crc led_b(::h2x::msg::LRCUState::_led_b_type arg)
  {
    msg_.led_b = std::move(arg);
    return Init_LRCUState_crc(msg_);
  }

private:
  ::h2x::msg::LRCUState msg_;
};

class Init_LRCUState_led_g
{
public:
  explicit Init_LRCUState_led_g(::h2x::msg::LRCUState & msg)
  : msg_(msg)
  {}
  Init_LRCUState_led_b led_g(::h2x::msg::LRCUState::_led_g_type arg)
  {
    msg_.led_g = std::move(arg);
    return Init_LRCUState_led_b(msg_);
  }

private:
  ::h2x::msg::LRCUState msg_;
};

class Init_LRCUState_led_r
{
public:
  explicit Init_LRCUState_led_r(::h2x::msg::LRCUState & msg)
  : msg_(msg)
  {}
  Init_LRCUState_led_g led_r(::h2x::msg::LRCUState::_led_r_type arg)
  {
    msg_.led_r = std::move(arg);
    return Init_LRCUState_led_g(msg_);
  }

private:
  ::h2x::msg::LRCUState msg_;
};

class Init_LRCUState_led_period_ms
{
public:
  explicit Init_LRCUState_led_period_ms(::h2x::msg::LRCUState & msg)
  : msg_(msg)
  {}
  Init_LRCUState_led_r led_period_ms(::h2x::msg::LRCUState::_led_period_ms_type arg)
  {
    msg_.led_period_ms = std::move(arg);
    return Init_LRCUState_led_r(msg_);
  }

private:
  ::h2x::msg::LRCUState msg_;
};

class Init_LRCUState_led_mode
{
public:
  explicit Init_LRCUState_led_mode(::h2x::msg::LRCUState & msg)
  : msg_(msg)
  {}
  Init_LRCUState_led_period_ms led_mode(::h2x::msg::LRCUState::_led_mode_type arg)
  {
    msg_.led_mode = std::move(arg);
    return Init_LRCUState_led_period_ms(msg_);
  }

private:
  ::h2x::msg::LRCUState msg_;
};

class Init_LRCUState_led_enable
{
public:
  Init_LRCUState_led_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LRCUState_led_mode led_enable(::h2x::msg::LRCUState::_led_enable_type arg)
  {
    msg_.led_enable = std::move(arg);
    return Init_LRCUState_led_mode(msg_);
  }

private:
  ::h2x::msg::LRCUState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::LRCUState>()
{
  return h2x::msg::builder::Init_LRCUState_led_enable();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__LRCU_STATE__BUILDER_HPP_
