// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/SetGripperMaxForce.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_gripper_max_force.hpp"


#ifndef H2X__SRV__DETAIL__SET_GRIPPER_MAX_FORCE__BUILDER_HPP_
#define H2X__SRV__DETAIL__SET_GRIPPER_MAX_FORCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/set_gripper_max_force__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetGripperMaxForce_Request_max_force
{
public:
  explicit Init_SetGripperMaxForce_Request_max_force(::h2x::srv::SetGripperMaxForce_Request & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SetGripperMaxForce_Request max_force(::h2x::srv::SetGripperMaxForce_Request::_max_force_type arg)
  {
    msg_.max_force = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetGripperMaxForce_Request msg_;
};

class Init_SetGripperMaxForce_Request_motor_index
{
public:
  Init_SetGripperMaxForce_Request_motor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripperMaxForce_Request_max_force motor_index(::h2x::srv::SetGripperMaxForce_Request::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return Init_SetGripperMaxForce_Request_max_force(msg_);
  }

private:
  ::h2x::srv::SetGripperMaxForce_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetGripperMaxForce_Request>()
{
  return h2x::srv::builder::Init_SetGripperMaxForce_Request_motor_index();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetGripperMaxForce_Response_result
{
public:
  Init_SetGripperMaxForce_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SetGripperMaxForce_Response result(::h2x::srv::SetGripperMaxForce_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetGripperMaxForce_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetGripperMaxForce_Response>()
{
  return h2x::srv::builder::Init_SetGripperMaxForce_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetGripperMaxForce_Event_response
{
public:
  explicit Init_SetGripperMaxForce_Event_response(::h2x::srv::SetGripperMaxForce_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SetGripperMaxForce_Event response(::h2x::srv::SetGripperMaxForce_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetGripperMaxForce_Event msg_;
};

class Init_SetGripperMaxForce_Event_request
{
public:
  explicit Init_SetGripperMaxForce_Event_request(::h2x::srv::SetGripperMaxForce_Event & msg)
  : msg_(msg)
  {}
  Init_SetGripperMaxForce_Event_response request(::h2x::srv::SetGripperMaxForce_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetGripperMaxForce_Event_response(msg_);
  }

private:
  ::h2x::srv::SetGripperMaxForce_Event msg_;
};

class Init_SetGripperMaxForce_Event_info
{
public:
  Init_SetGripperMaxForce_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripperMaxForce_Event_request info(::h2x::srv::SetGripperMaxForce_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetGripperMaxForce_Event_request(msg_);
  }

private:
  ::h2x::srv::SetGripperMaxForce_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetGripperMaxForce_Event>()
{
  return h2x::srv::builder::Init_SetGripperMaxForce_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__SET_GRIPPER_MAX_FORCE__BUILDER_HPP_
