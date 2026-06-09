// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/SetLowBatteryThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_low_battery_threshold.hpp"


#ifndef H2X__SRV__DETAIL__SET_LOW_BATTERY_THRESHOLD__BUILDER_HPP_
#define H2X__SRV__DETAIL__SET_LOW_BATTERY_THRESHOLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/set_low_battery_threshold__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetLowBatteryThreshold_Request_low_battery_threshold
{
public:
  Init_SetLowBatteryThreshold_Request_low_battery_threshold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SetLowBatteryThreshold_Request low_battery_threshold(::h2x::srv::SetLowBatteryThreshold_Request::_low_battery_threshold_type arg)
  {
    msg_.low_battery_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetLowBatteryThreshold_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetLowBatteryThreshold_Request>()
{
  return h2x::srv::builder::Init_SetLowBatteryThreshold_Request_low_battery_threshold();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetLowBatteryThreshold_Response_result
{
public:
  Init_SetLowBatteryThreshold_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SetLowBatteryThreshold_Response result(::h2x::srv::SetLowBatteryThreshold_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetLowBatteryThreshold_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetLowBatteryThreshold_Response>()
{
  return h2x::srv::builder::Init_SetLowBatteryThreshold_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetLowBatteryThreshold_Event_response
{
public:
  explicit Init_SetLowBatteryThreshold_Event_response(::h2x::srv::SetLowBatteryThreshold_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SetLowBatteryThreshold_Event response(::h2x::srv::SetLowBatteryThreshold_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetLowBatteryThreshold_Event msg_;
};

class Init_SetLowBatteryThreshold_Event_request
{
public:
  explicit Init_SetLowBatteryThreshold_Event_request(::h2x::srv::SetLowBatteryThreshold_Event & msg)
  : msg_(msg)
  {}
  Init_SetLowBatteryThreshold_Event_response request(::h2x::srv::SetLowBatteryThreshold_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLowBatteryThreshold_Event_response(msg_);
  }

private:
  ::h2x::srv::SetLowBatteryThreshold_Event msg_;
};

class Init_SetLowBatteryThreshold_Event_info
{
public:
  Init_SetLowBatteryThreshold_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLowBatteryThreshold_Event_request info(::h2x::srv::SetLowBatteryThreshold_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLowBatteryThreshold_Event_request(msg_);
  }

private:
  ::h2x::srv::SetLowBatteryThreshold_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetLowBatteryThreshold_Event>()
{
  return h2x::srv::builder::Init_SetLowBatteryThreshold_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__SET_LOW_BATTERY_THRESHOLD__BUILDER_HPP_
