// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/Set5GAirplane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set5_g_airplane.hpp"


#ifndef H2X__SRV__DETAIL__SET5_G_AIRPLANE__BUILDER_HPP_
#define H2X__SRV__DETAIL__SET5_G_AIRPLANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/set5_g_airplane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_Set5GAirplane_Request_mode_state
{
public:
  Init_Set5GAirplane_Request_mode_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::Set5GAirplane_Request mode_state(::h2x::srv::Set5GAirplane_Request::_mode_state_type arg)
  {
    msg_.mode_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::Set5GAirplane_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::Set5GAirplane_Request>()
{
  return h2x::srv::builder::Init_Set5GAirplane_Request_mode_state();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_Set5GAirplane_Response_result
{
public:
  Init_Set5GAirplane_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::Set5GAirplane_Response result(::h2x::srv::Set5GAirplane_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::Set5GAirplane_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::Set5GAirplane_Response>()
{
  return h2x::srv::builder::Init_Set5GAirplane_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_Set5GAirplane_Event_response
{
public:
  explicit Init_Set5GAirplane_Event_response(::h2x::srv::Set5GAirplane_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::Set5GAirplane_Event response(::h2x::srv::Set5GAirplane_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::Set5GAirplane_Event msg_;
};

class Init_Set5GAirplane_Event_request
{
public:
  explicit Init_Set5GAirplane_Event_request(::h2x::srv::Set5GAirplane_Event & msg)
  : msg_(msg)
  {}
  Init_Set5GAirplane_Event_response request(::h2x::srv::Set5GAirplane_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Set5GAirplane_Event_response(msg_);
  }

private:
  ::h2x::srv::Set5GAirplane_Event msg_;
};

class Init_Set5GAirplane_Event_info
{
public:
  Init_Set5GAirplane_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Set5GAirplane_Event_request info(::h2x::srv::Set5GAirplane_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Set5GAirplane_Event_request(msg_);
  }

private:
  ::h2x::srv::Set5GAirplane_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::Set5GAirplane_Event>()
{
  return h2x::srv::builder::Init_Set5GAirplane_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__SET5_G_AIRPLANE__BUILDER_HPP_
