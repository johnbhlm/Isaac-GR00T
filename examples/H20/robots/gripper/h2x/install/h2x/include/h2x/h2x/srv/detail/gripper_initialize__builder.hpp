// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/GripperInitialize.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/gripper_initialize.hpp"


#ifndef H2X__SRV__DETAIL__GRIPPER_INITIALIZE__BUILDER_HPP_
#define H2X__SRV__DETAIL__GRIPPER_INITIALIZE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/gripper_initialize__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_GripperInitialize_Request_offset
{
public:
  explicit Init_GripperInitialize_Request_offset(::h2x::srv::GripperInitialize_Request & msg)
  : msg_(msg)
  {}
  ::h2x::srv::GripperInitialize_Request offset(::h2x::srv::GripperInitialize_Request::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::GripperInitialize_Request msg_;
};

class Init_GripperInitialize_Request_index
{
public:
  explicit Init_GripperInitialize_Request_index(::h2x::srv::GripperInitialize_Request & msg)
  : msg_(msg)
  {}
  Init_GripperInitialize_Request_offset index(::h2x::srv::GripperInitialize_Request::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_GripperInitialize_Request_offset(msg_);
  }

private:
  ::h2x::srv::GripperInitialize_Request msg_;
};

class Init_GripperInitialize_Request_motor_index
{
public:
  Init_GripperInitialize_Request_motor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperInitialize_Request_index motor_index(::h2x::srv::GripperInitialize_Request::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return Init_GripperInitialize_Request_index(msg_);
  }

private:
  ::h2x::srv::GripperInitialize_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GripperInitialize_Request>()
{
  return h2x::srv::builder::Init_GripperInitialize_Request_motor_index();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_GripperInitialize_Response_result
{
public:
  Init_GripperInitialize_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::GripperInitialize_Response result(::h2x::srv::GripperInitialize_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::GripperInitialize_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GripperInitialize_Response>()
{
  return h2x::srv::builder::Init_GripperInitialize_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_GripperInitialize_Event_response
{
public:
  explicit Init_GripperInitialize_Event_response(::h2x::srv::GripperInitialize_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::GripperInitialize_Event response(::h2x::srv::GripperInitialize_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::GripperInitialize_Event msg_;
};

class Init_GripperInitialize_Event_request
{
public:
  explicit Init_GripperInitialize_Event_request(::h2x::srv::GripperInitialize_Event & msg)
  : msg_(msg)
  {}
  Init_GripperInitialize_Event_response request(::h2x::srv::GripperInitialize_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GripperInitialize_Event_response(msg_);
  }

private:
  ::h2x::srv::GripperInitialize_Event msg_;
};

class Init_GripperInitialize_Event_info
{
public:
  Init_GripperInitialize_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperInitialize_Event_request info(::h2x::srv::GripperInitialize_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GripperInitialize_Event_request(msg_);
  }

private:
  ::h2x::srv::GripperInitialize_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::GripperInitialize_Event>()
{
  return h2x::srv::builder::Init_GripperInitialize_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__GRIPPER_INITIALIZE__BUILDER_HPP_
