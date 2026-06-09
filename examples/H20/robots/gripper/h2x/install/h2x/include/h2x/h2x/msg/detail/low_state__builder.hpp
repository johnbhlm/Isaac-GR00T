// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/LowState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/low_state.hpp"


#ifndef H2X__MSG__DETAIL__LOW_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__LOW_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/low_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_LowState_crc
{
public:
  explicit Init_LowState_crc(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::LowState crc(::h2x::msg::LowState::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_reserved
{
public:
  explicit Init_LowState_reserved(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_crc reserved(::h2x::msg::LowState::_reserved_type arg)
  {
    msg_.reserved = std::move(arg);
    return Init_LowState_crc(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_warning_code
{
public:
  explicit Init_LowState_warning_code(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_reserved warning_code(::h2x::msg::LowState::_warning_code_type arg)
  {
    msg_.warning_code = std::move(arg);
    return Init_LowState_reserved(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_error_code
{
public:
  explicit Init_LowState_error_code(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_warning_code error_code(::h2x::msg::LowState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_LowState_warning_code(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_is_data_valid
{
public:
  explicit Init_LowState_is_data_valid(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_error_code is_data_valid(::h2x::msg::LowState::_is_data_valid_type arg)
  {
    msg_.is_data_valid = std::move(arg);
    return Init_LowState_error_code(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_cdu_state
{
public:
  explicit Init_LowState_cdu_state(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_is_data_valid cdu_state(::h2x::msg::LowState::_cdu_state_type arg)
  {
    msg_.cdu_state = std::move(arg);
    return Init_LowState_is_data_valid(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_is_cdu_valid
{
public:
  explicit Init_LowState_is_cdu_valid(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_cdu_state is_cdu_valid(::h2x::msg::LowState::_is_cdu_valid_type arg)
  {
    msg_.is_cdu_valid = std::move(arg);
    return Init_LowState_cdu_state(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_pcu_state
{
public:
  explicit Init_LowState_pcu_state(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_is_cdu_valid pcu_state(::h2x::msg::LowState::_pcu_state_type arg)
  {
    msg_.pcu_state = std::move(arg);
    return Init_LowState_is_cdu_valid(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_is_pcu_valid
{
public:
  explicit Init_LowState_is_pcu_valid(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_pcu_state is_pcu_valid(::h2x::msg::LowState::_is_pcu_valid_type arg)
  {
    msg_.is_pcu_valid = std::move(arg);
    return Init_LowState_pcu_state(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_time_seconds
{
public:
  explicit Init_LowState_time_seconds(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_is_pcu_valid time_seconds(::h2x::msg::LowState::_time_seconds_type arg)
  {
    msg_.time_seconds = std::move(arg);
    return Init_LowState_is_pcu_valid(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_ground_signal
{
public:
  explicit Init_LowState_ground_signal(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_time_seconds ground_signal(::h2x::msg::LowState::_ground_signal_type arg)
  {
    msg_.ground_signal = std::move(arg);
    return Init_LowState_time_seconds(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_ground_count
{
public:
  explicit Init_LowState_ground_count(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_ground_signal ground_count(::h2x::msg::LowState::_ground_count_type arg)
  {
    msg_.ground_count = std::move(arg);
    return Init_LowState_ground_signal(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_battery_info
{
public:
  explicit Init_LowState_battery_info(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_ground_count battery_info(::h2x::msg::LowState::_battery_info_type arg)
  {
    msg_.battery_info = std::move(arg);
    return Init_LowState_ground_count(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_has_battery_info
{
public:
  explicit Init_LowState_has_battery_info(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_battery_info has_battery_info(::h2x::msg::LowState::_has_battery_info_type arg)
  {
    msg_.has_battery_info = std::move(arg);
    return Init_LowState_battery_info(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_motor_state
{
public:
  explicit Init_LowState_motor_state(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_has_battery_info motor_state(::h2x::msg::LowState::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return Init_LowState_has_battery_info(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_imu_state
{
public:
  explicit Init_LowState_imu_state(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_motor_state imu_state(::h2x::msg::LowState::_imu_state_type arg)
  {
    msg_.imu_state = std::move(arg);
    return Init_LowState_motor_state(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_tick
{
public:
  explicit Init_LowState_tick(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_imu_state tick(::h2x::msg::LowState::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_LowState_imu_state(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_mode_pr
{
public:
  explicit Init_LowState_mode_pr(::h2x::msg::LowState & msg)
  : msg_(msg)
  {}
  Init_LowState_tick mode_pr(::h2x::msg::LowState::_mode_pr_type arg)
  {
    msg_.mode_pr = std::move(arg);
    return Init_LowState_tick(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

class Init_LowState_version
{
public:
  Init_LowState_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowState_mode_pr version(::h2x::msg::LowState::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_LowState_mode_pr(msg_);
  }

private:
  ::h2x::msg::LowState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::LowState>()
{
  return h2x::msg::builder::Init_LowState_version();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__LOW_STATE__BUILDER_HPP_
