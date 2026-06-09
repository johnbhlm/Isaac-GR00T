// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:srv/IMUAccModuleCalibrtion.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/imu_acc_module_calibrtion.hpp"


#ifndef H2X__SRV__DETAIL__IMU_ACC_MODULE_CALIBRTION__STRUCT_HPP_
#define H2X__SRV__DETAIL__IMU_ACC_MODULE_CALIBRTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Request __attribute__((deprecated))
#else
# define DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Request __declspec(deprecated)
#endif

namespace h2x
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IMUAccModuleCalibrtion_Request_
{
  using Type = IMUAccModuleCalibrtion_Request_<ContainerAllocator>;

  explicit IMUAccModuleCalibrtion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_index = 0ul;
    }
  }

  explicit IMUAccModuleCalibrtion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imu_index = 0ul;
    }
  }

  // field types and members
  using _imu_index_type =
    uint32_t;
  _imu_index_type imu_index;

  // setters for named parameter idiom
  Type & set__imu_index(
    const uint32_t & _arg)
  {
    this->imu_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Request
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Request
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUAccModuleCalibrtion_Request_ & other) const
  {
    if (this->imu_index != other.imu_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUAccModuleCalibrtion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUAccModuleCalibrtion_Request_

// alias to use template instance with default allocator
using IMUAccModuleCalibrtion_Request =
  h2x::srv::IMUAccModuleCalibrtion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace h2x


#ifndef _WIN32
# define DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Response __attribute__((deprecated))
#else
# define DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Response __declspec(deprecated)
#endif

namespace h2x
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IMUAccModuleCalibrtion_Response_
{
  using Type = IMUAccModuleCalibrtion_Response_<ContainerAllocator>;

  explicit IMUAccModuleCalibrtion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit IMUAccModuleCalibrtion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  // field types and members
  using _result_type =
    int32_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int32_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Response
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Response
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUAccModuleCalibrtion_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUAccModuleCalibrtion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUAccModuleCalibrtion_Response_

// alias to use template instance with default allocator
using IMUAccModuleCalibrtion_Response =
  h2x::srv::IMUAccModuleCalibrtion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace h2x


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Event __attribute__((deprecated))
#else
# define DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Event __declspec(deprecated)
#endif

namespace h2x
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IMUAccModuleCalibrtion_Event_
{
  using Type = IMUAccModuleCalibrtion_Event_<ContainerAllocator>;

  explicit IMUAccModuleCalibrtion_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit IMUAccModuleCalibrtion_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<h2x::srv::IMUAccModuleCalibrtion_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<h2x::srv::IMUAccModuleCalibrtion_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Event
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__srv__IMUAccModuleCalibrtion_Event
    std::shared_ptr<h2x::srv::IMUAccModuleCalibrtion_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IMUAccModuleCalibrtion_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const IMUAccModuleCalibrtion_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IMUAccModuleCalibrtion_Event_

// alias to use template instance with default allocator
using IMUAccModuleCalibrtion_Event =
  h2x::srv::IMUAccModuleCalibrtion_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace h2x

namespace h2x
{

namespace srv
{

struct IMUAccModuleCalibrtion
{
  using Request = h2x::srv::IMUAccModuleCalibrtion_Request;
  using Response = h2x::srv::IMUAccModuleCalibrtion_Response;
  using Event = h2x::srv::IMUAccModuleCalibrtion_Event;
};

}  // namespace srv

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__IMU_ACC_MODULE_CALIBRTION__STRUCT_HPP_
