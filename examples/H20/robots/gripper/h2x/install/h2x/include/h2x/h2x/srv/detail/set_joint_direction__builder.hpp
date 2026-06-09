// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/SetJointDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_joint_direction.hpp"


#ifndef H2X__SRV__DETAIL__SET_JOINT_DIRECTION__BUILDER_HPP_
#define H2X__SRV__DETAIL__SET_JOINT_DIRECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/set_joint_direction__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetJointDirection_Request_direction
{
public:
  explicit Init_SetJointDirection_Request_direction(::h2x::srv::SetJointDirection_Request & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SetJointDirection_Request direction(::h2x::srv::SetJointDirection_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetJointDirection_Request msg_;
};

class Init_SetJointDirection_Request_motor_index
{
public:
  Init_SetJointDirection_Request_motor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointDirection_Request_direction motor_index(::h2x::srv::SetJointDirection_Request::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return Init_SetJointDirection_Request_direction(msg_);
  }

private:
  ::h2x::srv::SetJointDirection_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetJointDirection_Request>()
{
  return h2x::srv::builder::Init_SetJointDirection_Request_motor_index();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetJointDirection_Response_result
{
public:
  Init_SetJointDirection_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SetJointDirection_Response result(::h2x::srv::SetJointDirection_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetJointDirection_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetJointDirection_Response>()
{
  return h2x::srv::builder::Init_SetJointDirection_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetJointDirection_Event_response
{
public:
  explicit Init_SetJointDirection_Event_response(::h2x::srv::SetJointDirection_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SetJointDirection_Event response(::h2x::srv::SetJointDirection_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetJointDirection_Event msg_;
};

class Init_SetJointDirection_Event_request
{
public:
  explicit Init_SetJointDirection_Event_request(::h2x::srv::SetJointDirection_Event & msg)
  : msg_(msg)
  {}
  Init_SetJointDirection_Event_response request(::h2x::srv::SetJointDirection_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetJointDirection_Event_response(msg_);
  }

private:
  ::h2x::srv::SetJointDirection_Event msg_;
};

class Init_SetJointDirection_Event_info
{
public:
  Init_SetJointDirection_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetJointDirection_Event_request info(::h2x::srv::SetJointDirection_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetJointDirection_Event_request(msg_);
  }

private:
  ::h2x::srv::SetJointDirection_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetJointDirection_Event>()
{
  return h2x::srv::builder::Init_SetJointDirection_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__SET_JOINT_DIRECTION__BUILDER_HPP_
