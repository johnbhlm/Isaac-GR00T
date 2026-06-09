// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from h2x:srv/IMUAccModuleCalibrtion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/imu_acc_module_calibrtion.hpp"


#ifndef H2X__SRV__DETAIL__IMU_ACC_MODULE_CALIBRTION__BUILDER_HPP_
#define H2X__SRV__DETAIL__IMU_ACC_MODULE_CALIBRTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "h2x/srv/detail/imu_acc_module_calibrtion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_IMUAccModuleCalibrtion_Request_imu_index
{
public:
  Init_IMUAccModuleCalibrtion_Request_imu_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::IMUAccModuleCalibrtion_Request imu_index(::h2x::srv::IMUAccModuleCalibrtion_Request::_imu_index_type arg)
  {
    msg_.imu_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::IMUAccModuleCalibrtion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::IMUAccModuleCalibrtion_Request>()
{
  return h2x::srv::builder::Init_IMUAccModuleCalibrtion_Request_imu_index();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_IMUAccModuleCalibrtion_Response_result
{
public:
  Init_IMUAccModuleCalibrtion_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::h2x::srv::IMUAccModuleCalibrtion_Response result(::h2x::srv::IMUAccModuleCalibrtion_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::IMUAccModuleCalibrtion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::IMUAccModuleCalibrtion_Response>()
{
  return h2x::srv::builder::Init_IMUAccModuleCalibrtion_Response_result();
}

}  // namespace h2x


namespace h2x
{

namespace srv
{

namespace builder
{

class Init_IMUAccModuleCalibrtion_Event_response
{
public:
  explicit Init_IMUAccModuleCalibrtion_Event_response(::h2x::srv::IMUAccModuleCalibrtion_Event & msg)
  : msg_(msg)
  {}
  ::h2x::srv::IMUAccModuleCalibrtion_Event response(::h2x::srv::IMUAccModuleCalibrtion_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::h2x::srv::IMUAccModuleCalibrtion_Event msg_;
};

class Init_IMUAccModuleCalibrtion_Event_request
{
public:
  explicit Init_IMUAccModuleCalibrtion_Event_request(::h2x::srv::IMUAccModuleCalibrtion_Event & msg)
  : msg_(msg)
  {}
  Init_IMUAccModuleCalibrtion_Event_response request(::h2x::srv::IMUAccModuleCalibrtion_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_IMUAccModuleCalibrtion_Event_response(msg_);
  }

private:
  ::h2x::srv::IMUAccModuleCalibrtion_Event msg_;
};

class Init_IMUAccModuleCalibrtion_Event_info
{
public:
  Init_IMUAccModuleCalibrtion_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IMUAccModuleCalibrtion_Event_request info(::h2x::srv::IMUAccModuleCalibrtion_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_IMUAccModuleCalibrtion_Event_request(msg_);
  }

private:
  ::h2x::srv::IMUAccModuleCalibrtion_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::h2x::srv::IMUAccModuleCalibrtion_Event>()
{
  return h2x::srv::builder::Init_IMUAccModuleCalibrtion_Event_info();
}

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__IMU_ACC_MODULE_CALIBRTION__BUILDER_HPP_
