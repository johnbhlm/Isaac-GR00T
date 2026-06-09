// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/Diagnosis.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/diagnosis.hpp"


#ifndef H2X__MSG__DETAIL__DIAGNOSIS__BUILDER_HPP_
#define H2X__MSG__DETAIL__DIAGNOSIS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/diagnosis__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_Diagnosis_crc
{
public:
  explicit Init_Diagnosis_crc(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  ::h2x::msg::Diagnosis crc(::h2x::msg::Diagnosis::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_battery_warning_code
{
public:
  explicit Init_Diagnosis_battery_warning_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_crc battery_warning_code(::h2x::msg::Diagnosis::_battery_warning_code_type arg)
  {
    msg_.battery_warning_code = std::move(arg);
    return Init_Diagnosis_crc(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_battery_error_code
{
public:
  explicit Init_Diagnosis_battery_error_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_battery_warning_code battery_error_code(::h2x::msg::Diagnosis::_battery_error_code_type arg)
  {
    msg_.battery_error_code = std::move(arg);
    return Init_Diagnosis_battery_warning_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_imu_warning_code
{
public:
  explicit Init_Diagnosis_imu_warning_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_battery_error_code imu_warning_code(::h2x::msg::Diagnosis::_imu_warning_code_type arg)
  {
    msg_.imu_warning_code = std::move(arg);
    return Init_Diagnosis_battery_error_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_imu_error_code
{
public:
  explicit Init_Diagnosis_imu_error_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_imu_warning_code imu_error_code(::h2x::msg::Diagnosis::_imu_error_code_type arg)
  {
    msg_.imu_error_code = std::move(arg);
    return Init_Diagnosis_imu_warning_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_pcu_warning_code
{
public:
  explicit Init_Diagnosis_pcu_warning_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_imu_error_code pcu_warning_code(::h2x::msg::Diagnosis::_pcu_warning_code_type arg)
  {
    msg_.pcu_warning_code = std::move(arg);
    return Init_Diagnosis_imu_error_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_pcu_error_code
{
public:
  explicit Init_Diagnosis_pcu_error_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_pcu_warning_code pcu_error_code(::h2x::msg::Diagnosis::_pcu_error_code_type arg)
  {
    msg_.pcu_error_code = std::move(arg);
    return Init_Diagnosis_pcu_warning_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_cdu_warning_code
{
public:
  explicit Init_Diagnosis_cdu_warning_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_pcu_error_code cdu_warning_code(::h2x::msg::Diagnosis::_cdu_warning_code_type arg)
  {
    msg_.cdu_warning_code = std::move(arg);
    return Init_Diagnosis_pcu_error_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_cdu_error_code
{
public:
  explicit Init_Diagnosis_cdu_error_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_cdu_warning_code cdu_error_code(::h2x::msg::Diagnosis::_cdu_error_code_type arg)
  {
    msg_.cdu_error_code = std::move(arg);
    return Init_Diagnosis_cdu_warning_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_warning_code
{
public:
  explicit Init_Diagnosis_warning_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_cdu_error_code warning_code(::h2x::msg::Diagnosis::_warning_code_type arg)
  {
    msg_.warning_code = std::move(arg);
    return Init_Diagnosis_cdu_error_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_error_code
{
public:
  explicit Init_Diagnosis_error_code(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_warning_code error_code(::h2x::msg::Diagnosis::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_Diagnosis_warning_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_debug_cdu_state
{
public:
  explicit Init_Diagnosis_debug_cdu_state(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_error_code debug_cdu_state(::h2x::msg::Diagnosis::_debug_cdu_state_type arg)
  {
    msg_.debug_cdu_state = std::move(arg);
    return Init_Diagnosis_error_code(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_debug_imu_state
{
public:
  explicit Init_Diagnosis_debug_imu_state(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_debug_cdu_state debug_imu_state(::h2x::msg::Diagnosis::_debug_imu_state_type arg)
  {
    msg_.debug_imu_state = std::move(arg);
    return Init_Diagnosis_debug_cdu_state(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_ds402_data
{
public:
  explicit Init_Diagnosis_ds402_data(::h2x::msg::Diagnosis & msg)
  : msg_(msg)
  {}
  Init_Diagnosis_debug_imu_state ds402_data(::h2x::msg::Diagnosis::_ds402_data_type arg)
  {
    msg_.ds402_data = std::move(arg);
    return Init_Diagnosis_debug_imu_state(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

class Init_Diagnosis_is_ds402
{
public:
  Init_Diagnosis_is_ds402()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Diagnosis_ds402_data is_ds402(::h2x::msg::Diagnosis::_is_ds402_type arg)
  {
    msg_.is_ds402 = std::move(arg);
    return Init_Diagnosis_ds402_data(msg_);
  }

private:
  ::h2x::msg::Diagnosis msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::Diagnosis>()
{
  return h2x::msg::builder::Init_Diagnosis_is_ds402();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__DIAGNOSIS__BUILDER_HPP_
