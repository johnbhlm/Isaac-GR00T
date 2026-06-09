// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/SaveJointParameters.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/save_joint_parameters.hpp"


#ifndef H2X__SRV__DETAIL__SAVE_JOINT_PARAMETERS__BUILDER_HPP_
#define H2X__SRV__DETAIL__SAVE_JOINT_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/save_joint_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SaveJointParameters_Request_motor_index
{
public:
  Init_SaveJointParameters_Request_motor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SaveJointParameters_Request motor_index(::h2x::srv::SaveJointParameters_Request::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SaveJointParameters_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SaveJointParameters_Request>()
{
  return h2x::srv::builder::Init_SaveJointParameters_Request_motor_index();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SaveJointParameters_Response_result
{
public:
  Init_SaveJointParameters_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SaveJointParameters_Response result(::h2x::srv::SaveJointParameters_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SaveJointParameters_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SaveJointParameters_Response>()
{
  return h2x::srv::builder::Init_SaveJointParameters_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SaveJointParameters_Event_response
{
public:
  explicit Init_SaveJointParameters_Event_response(::h2x::srv::SaveJointParameters_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SaveJointParameters_Event response(::h2x::srv::SaveJointParameters_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SaveJointParameters_Event msg_;
};

class Init_SaveJointParameters_Event_request
{
public:
  explicit Init_SaveJointParameters_Event_request(::h2x::srv::SaveJointParameters_Event & msg)
  : msg_(msg)
  {}
  Init_SaveJointParameters_Event_response request(::h2x::srv::SaveJointParameters_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SaveJointParameters_Event_response(msg_);
  }

private:
  ::h2x::srv::SaveJointParameters_Event msg_;
};

class Init_SaveJointParameters_Event_info
{
public:
  Init_SaveJointParameters_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveJointParameters_Event_request info(::h2x::srv::SaveJointParameters_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SaveJointParameters_Event_request(msg_);
  }

private:
  ::h2x::srv::SaveJointParameters_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SaveJointParameters_Event>()
{
  return h2x::srv::builder::Init_SaveJointParameters_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__SAVE_JOINT_PARAMETERS__BUILDER_HPP_
