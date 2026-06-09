// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/SetGripperStrokeRange.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_gripper_stroke_range.hpp"


#ifndef H2X__SRV__DETAIL__SET_GRIPPER_STROKE_RANGE__BUILDER_HPP_
#define H2X__SRV__DETAIL__SET_GRIPPER_STROKE_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/set_gripper_stroke_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetGripperStrokeRange_Request_max_stroke
{
public:
  explicit Init_SetGripperStrokeRange_Request_max_stroke(::h2x::srv::SetGripperStrokeRange_Request & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SetGripperStrokeRange_Request max_stroke(::h2x::srv::SetGripperStrokeRange_Request::_max_stroke_type arg)
  {
    msg_.max_stroke = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetGripperStrokeRange_Request msg_;
};

class Init_SetGripperStrokeRange_Request_min_stroke
{
public:
  explicit Init_SetGripperStrokeRange_Request_min_stroke(::h2x::srv::SetGripperStrokeRange_Request & msg)
  : msg_(msg)
  {}
  Init_SetGripperStrokeRange_Request_max_stroke min_stroke(::h2x::srv::SetGripperStrokeRange_Request::_min_stroke_type arg)
  {
    msg_.min_stroke = std::move(arg);
    return Init_SetGripperStrokeRange_Request_max_stroke(msg_);
  }

private:
  ::h2x::srv::SetGripperStrokeRange_Request msg_;
};

class Init_SetGripperStrokeRange_Request_motor_index
{
public:
  Init_SetGripperStrokeRange_Request_motor_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripperStrokeRange_Request_min_stroke motor_index(::h2x::srv::SetGripperStrokeRange_Request::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return Init_SetGripperStrokeRange_Request_min_stroke(msg_);
  }

private:
  ::h2x::srv::SetGripperStrokeRange_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetGripperStrokeRange_Request>()
{
  return h2x::srv::builder::Init_SetGripperStrokeRange_Request_motor_index();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetGripperStrokeRange_Response_result
{
public:
  Init_SetGripperStrokeRange_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::SetGripperStrokeRange_Response result(::h2x::srv::SetGripperStrokeRange_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetGripperStrokeRange_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetGripperStrokeRange_Response>()
{
  return h2x::srv::builder::Init_SetGripperStrokeRange_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_SetGripperStrokeRange_Event_response
{
public:
  explicit Init_SetGripperStrokeRange_Event_response(::h2x::srv::SetGripperStrokeRange_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::SetGripperStrokeRange_Event response(::h2x::srv::SetGripperStrokeRange_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::SetGripperStrokeRange_Event msg_;
};

class Init_SetGripperStrokeRange_Event_request
{
public:
  explicit Init_SetGripperStrokeRange_Event_request(::h2x::srv::SetGripperStrokeRange_Event & msg)
  : msg_(msg)
  {}
  Init_SetGripperStrokeRange_Event_response request(::h2x::srv::SetGripperStrokeRange_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetGripperStrokeRange_Event_response(msg_);
  }

private:
  ::h2x::srv::SetGripperStrokeRange_Event msg_;
};

class Init_SetGripperStrokeRange_Event_info
{
public:
  Init_SetGripperStrokeRange_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripperStrokeRange_Event_request info(::h2x::srv::SetGripperStrokeRange_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetGripperStrokeRange_Event_request(msg_);
  }

private:
  ::h2x::srv::SetGripperStrokeRange_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::SetGripperStrokeRange_Event>()
{
  return h2x::srv::builder::Init_SetGripperStrokeRange_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__SET_GRIPPER_STROKE_RANGE__BUILDER_HPP_
