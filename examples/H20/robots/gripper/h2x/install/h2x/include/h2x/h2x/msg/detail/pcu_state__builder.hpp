// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:msg/PCUState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/msg/pcu_state.hpp"


#ifndef H2X__MSG__DETAIL__PCU_STATE__BUILDER_HPP_
#define H2X__MSG__DETAIL__PCU_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/msg/detail/pcu_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace msg
{

namespace builder
{

class Init_PCUState_current_12v
{
public:
  explicit Init_PCUState_current_12v(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  ::h2x::msg::PCUState current_12v(::h2x::msg::PCUState::_current_12v_type arg)
  {
    msg_.current_12v = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_current_24v
{
public:
  explicit Init_PCUState_current_24v(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_current_12v current_24v(::h2x::msg::PCUState::_current_24v_type arg)
  {
    msg_.current_24v = std::move(arg);
    return Init_PCUState_current_12v(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_voltage_12v
{
public:
  explicit Init_PCUState_voltage_12v(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_current_24v voltage_12v(::h2x::msg::PCUState::_voltage_12v_type arg)
  {
    msg_.voltage_12v = std::move(arg);
    return Init_PCUState_current_24v(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_voltage_24v
{
public:
  explicit Init_PCUState_voltage_24v(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_voltage_12v voltage_24v(::h2x::msg::PCUState::_voltage_24v_type arg)
  {
    msg_.voltage_24v = std::move(arg);
    return Init_PCUState_voltage_12v(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_dcdc_bus_voltage
{
public:
  explicit Init_PCUState_dcdc_bus_voltage(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_voltage_24v dcdc_bus_voltage(::h2x::msg::PCUState::_dcdc_bus_voltage_type arg)
  {
    msg_.dcdc_bus_voltage = std::move(arg);
    return Init_PCUState_voltage_24v(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_motor_bus_current
{
public:
  explicit Init_PCUState_motor_bus_current(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_dcdc_bus_voltage motor_bus_current(::h2x::msg::PCUState::_motor_bus_current_type arg)
  {
    msg_.motor_bus_current = std::move(arg);
    return Init_PCUState_dcdc_bus_voltage(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_motor_bus_voltage
{
public:
  explicit Init_PCUState_motor_bus_voltage(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_motor_bus_current motor_bus_voltage(::h2x::msg::PCUState::_motor_bus_voltage_type arg)
  {
    msg_.motor_bus_voltage = std::move(arg);
    return Init_PCUState_motor_bus_current(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_battery_voltage
{
public:
  explicit Init_PCUState_battery_voltage(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_motor_bus_voltage battery_voltage(::h2x::msg::PCUState::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_PCUState_motor_bus_voltage(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_pcu_warning_code
{
public:
  explicit Init_PCUState_pcu_warning_code(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_battery_voltage pcu_warning_code(::h2x::msg::PCUState::_pcu_warning_code_type arg)
  {
    msg_.pcu_warning_code = std::move(arg);
    return Init_PCUState_battery_voltage(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_pcu_error_code
{
public:
  explicit Init_PCUState_pcu_error_code(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_pcu_warning_code pcu_error_code(::h2x::msg::PCUState::_pcu_error_code_type arg)
  {
    msg_.pcu_error_code = std::move(arg);
    return Init_PCUState_pcu_warning_code(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_power_supply_state
{
public:
  explicit Init_PCUState_power_supply_state(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_pcu_error_code power_supply_state(::h2x::msg::PCUState::_power_supply_state_type arg)
  {
    msg_.power_supply_state = std::move(arg);
    return Init_PCUState_pcu_error_code(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_control_supply_state
{
public:
  explicit Init_PCUState_control_supply_state(::h2x::msg::PCUState & msg)
  : msg_(msg)
  {}
  Init_PCUState_power_supply_state control_supply_state(::h2x::msg::PCUState::_control_supply_state_type arg)
  {
    msg_.control_supply_state = std::move(arg);
    return Init_PCUState_power_supply_state(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

class Init_PCUState_emergency_stop_state
{
public:
  Init_PCUState_emergency_stop_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PCUState_control_supply_state emergency_stop_state(::h2x::msg::PCUState::_emergency_stop_state_type arg)
  {
    msg_.emergency_stop_state = std::move(arg);
    return Init_PCUState_control_supply_state(msg_);
  }

private:
  ::h2x::msg::PCUState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::msg::PCUState>()
{
  return h2x::msg::builder::Init_PCUState_emergency_stop_state();
}

}  // namespace h2x

#endif  // H2X__MSG__DETAIL__PCU_STATE__BUILDER_HPP_
