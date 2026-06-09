// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/GripperBrakeControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/gripper_brake_control.hpp"


#ifndef H2X__SRV__DETAIL__GRIPPER_BRAKE_CONTROL__BUILDER_HPP_
#define H2X__SRV__DETAIL__GRIPPER_BRAKE_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/gripper_brake_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_GripperBrakeControl_Request_auto_clear_error
{
public:
  explicit Init_GripperBrakeControl_Request_auto_clear_error(::h2x::srv::GripperBrakeControl_Request & msg)
  : msg_(msg)
  {}
  ::h2x::srv::GripperBrakeControl_Request auto_clear_error(::h2x::srv::GripperBrakeControl_Request::_auto_clear_error_type arg)
  {
    msg_.auto_clear_error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::GripperBrakeControl_Request msg_;
};

class Init_GripperBrakeControl_Request_request_state
{
public:
  explicit Init_GripperBrakeControl_Request_request_state(::h2x::srv::GripperBrakeControl_Request & msg)
  : msg_(msg)
  {}
  Init_GripperBrakeControl_Request_auto_clear_error request_state(::h2x::srv::GripperBrakeControl_Request::_request_state_type arg)
  {
    msg_.request_state = std::move(arg);
    return Init_GripperBrakeControl_Request_auto_clear_error(msg_);
  }

private:
  ::h2x::srv::GripperBrakeControl_Request msg_;
};

class Init_GripperBrakeControl_Request_motor_index
{
public:
  Init_GripperBrakeControl_Request_motor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperBrakeControl_Request_request_state motor_index(::h2x::srv::GripperBrakeControl_Request::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return Init_GripperBrakeControl_Request_request_state(msg_);
  }

private:
  ::h2x::srv::GripperBrakeControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GripperBrakeControl_Request>()
{
  return h2x::srv::builder::Init_GripperBrakeControl_Request_motor_index();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_GripperBrakeControl_Response_result
{
public:
  Init_GripperBrakeControl_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::GripperBrakeControl_Response result(::h2x::srv::GripperBrakeControl_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::GripperBrakeControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GripperBrakeControl_Response>()
{
  return h2x::srv::builder::Init_GripperBrakeControl_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_GripperBrakeControl_Event_response
{
public:
  explicit Init_GripperBrakeControl_Event_response(::h2x::srv::GripperBrakeControl_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::GripperBrakeControl_Event response(::h2x::srv::GripperBrakeControl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::GripperBrakeControl_Event msg_;
};

class Init_GripperBrakeControl_Event_request
{
public:
  explicit Init_GripperBrakeControl_Event_request(::h2x::srv::GripperBrakeControl_Event & msg)
  : msg_(msg)
  {}
  Init_GripperBrakeControl_Event_response request(::h2x::srv::GripperBrakeControl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GripperBrakeControl_Event_response(msg_);
  }

private:
  ::h2x::srv::GripperBrakeControl_Event msg_;
};

class Init_GripperBrakeControl_Event_info
{
public:
  Init_GripperBrakeControl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperBrakeControl_Event_request info(::h2x::srv::GripperBrakeControl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GripperBrakeControl_Event_request(msg_);
  }

private:
  ::h2x::srv::GripperBrakeControl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GripperBrakeControl_Event>()
{
  return h2x::srv::builder::Init_GripperBrakeControl_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__GRIPPER_BRAKE_CONTROL__BUILDER_HPP_
