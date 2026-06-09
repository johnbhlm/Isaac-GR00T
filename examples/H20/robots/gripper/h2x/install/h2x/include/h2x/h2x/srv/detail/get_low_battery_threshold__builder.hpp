// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/GetLowBatteryThreshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/get_low_battery_threshold.hpp"


#ifndef H2X__SRV__DETAIL__GET_LOW_BATTERY_THRESHOLD__BUILDER_HPP_
#define H2X__SRV__DETAIL__GET_LOW_BATTERY_THRESHOLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/get_low_battery_threshold__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GetLowBatteryThreshold_Request>()
{
  return ::h2x::srv::GetLowBatteryThreshold_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_GetLowBatteryThreshold_Response_low_battery_threshold
{
public:
  explicit Init_GetLowBatteryThreshold_Response_low_battery_threshold(::h2x::srv::GetLowBatteryThreshold_Response & msg)
  : msg_(msg)
  {}
  ::h2x::srv::GetLowBatteryThreshold_Response low_battery_threshold(::h2x::srv::GetLowBatteryThreshold_Response::_low_battery_threshold_type arg)
  {
    msg_.low_battery_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::GetLowBatteryThreshold_Response msg_;
};

class Init_GetLowBatteryThreshold_Response_result
{
public:
  Init_GetLowBatteryThreshold_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLowBatteryThreshold_Response_low_battery_threshold result(::h2x::srv::GetLowBatteryThreshold_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_GetLowBatteryThreshold_Response_low_battery_threshold(msg_);
  }

private:
  ::h2x::srv::GetLowBatteryThreshold_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GetLowBatteryThreshold_Response>()
{
  return h2x::srv::builder::Init_GetLowBatteryThreshold_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_GetLowBatteryThreshold_Event_response
{
public:
  explicit Init_GetLowBatteryThreshold_Event_response(::h2x::srv::GetLowBatteryThreshold_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::GetLowBatteryThreshold_Event response(::h2x::srv::GetLowBatteryThreshold_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::GetLowBatteryThreshold_Event msg_;
};

class Init_GetLowBatteryThreshold_Event_request
{
public:
  explicit Init_GetLowBatteryThreshold_Event_request(::h2x::srv::GetLowBatteryThreshold_Event & msg)
  : msg_(msg)
  {}
  Init_GetLowBatteryThreshold_Event_response request(::h2x::srv::GetLowBatteryThreshold_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetLowBatteryThreshold_Event_response(msg_);
  }

private:
  ::h2x::srv::GetLowBatteryThreshold_Event msg_;
};

class Init_GetLowBatteryThreshold_Event_info
{
public:
  Init_GetLowBatteryThreshold_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLowBatteryThreshold_Event_request info(::h2x::srv::GetLowBatteryThreshold_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetLowBatteryThreshold_Event_request(msg_);
  }

private:
  ::h2x::srv::GetLowBatteryThreshold_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GetLowBatteryThreshold_Event>()
{
  return h2x::srv::builder::Init_GetLowBatteryThreshold_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__GET_LOW_BATTERY_THRESHOLD__BUILDER_HPP_
