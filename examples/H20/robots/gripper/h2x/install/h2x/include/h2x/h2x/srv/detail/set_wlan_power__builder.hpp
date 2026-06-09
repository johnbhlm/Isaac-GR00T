// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/SetWlanPower.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_wlan_power.hpp"


#ifndef H2X__SRV__DETAIL__SET_WLAN_POWER__BUILDER_HPP_
#define H2X__SRV__DETAIL__SET_WLAN_POWER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/set_wlan_power__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetWlanPower_Request_mode_state
{
public:
  Init_SetWlanPower_Request_mode_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SetWlanPower_Request mode_state(::h2x::srv::SetWlanPower_Request::_mode_state_type arg)
  {
    msg_.mode_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetWlanPower_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetWlanPower_Request>()
{
  return h2x::srv::builder::Init_SetWlanPower_Request_mode_state();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetWlanPower_Response_result
{
public:
  Init_SetWlanPower_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SetWlanPower_Response result(::h2x::srv::SetWlanPower_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetWlanPower_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetWlanPower_Response>()
{
  return h2x::srv::builder::Init_SetWlanPower_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetWlanPower_Event_response
{
public:
  explicit Init_SetWlanPower_Event_response(::h2x::srv::SetWlanPower_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SetWlanPower_Event response(::h2x::srv::SetWlanPower_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetWlanPower_Event msg_;
};

class Init_SetWlanPower_Event_request
{
public:
  explicit Init_SetWlanPower_Event_request(::h2x::srv::SetWlanPower_Event & msg)
  : msg_(msg)
  {}
  Init_SetWlanPower_Event_response request(::h2x::srv::SetWlanPower_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetWlanPower_Event_response(msg_);
  }

private:
  ::h2x::srv::SetWlanPower_Event msg_;
};

class Init_SetWlanPower_Event_info
{
public:
  Init_SetWlanPower_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetWlanPower_Event_request info(::h2x::srv::SetWlanPower_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetWlanPower_Event_request(msg_);
  }

private:
  ::h2x::srv::SetWlanPower_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetWlanPower_Event>()
{
  return h2x::srv::builder::Init_SetWlanPower_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__SET_WLAN_POWER__BUILDER_HPP_
