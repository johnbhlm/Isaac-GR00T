// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from h2x:srv/SetWlanPower.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "h2x/srv/set_wlan_power.hpp"


#ifndef H2X__SRV__DETAIL__SET_WLAN_POWER__STRUCT_HPP_
#define H2X__SRV__DETAIL__SET_WLAN_POWER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__h2x__srv__SetWlanPower_Request __attribute__((deprecated))
#else
# define DEPRECATED__h2x__srv__SetWlanPower_Request __declspec(deprecated)
#endif

namespace h2x
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWlanPower_Request_
{
  using Type = SetWlanPower_Request_<ContainerAllocator>;

  explicit SetWlanPower_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_state = false;
    }
  }

  explicit SetWlanPower_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode_state = false;
    }
  }

  // field types and members
  using _mode_state_type =
    bool;
  _mode_state_type mode_state;

  // setters for named parameter idiom
  Type & set__mode_state(
    const bool & _arg)
  {
    this->mode_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::srv::SetWlanPower_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::srv::SetWlanPower_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::srv::SetWlanPower_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::srv::SetWlanPower_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::srv::SetWlanPower_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::SetWlanPower_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::srv::SetWlanPower_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::SetWlanPower_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::srv::SetWlanPower_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::srv::SetWlanPower_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__srv__SetWlanPower_Request
    std::shared_ptr<h2x::srv::SetWlanPower_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__srv__SetWlanPower_Request
    std::shared_ptr<h2x::srv::SetWlanPower_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWlanPower_Request_ & other) const
  {
    if (this->mode_state != other.mode_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWlanPower_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWlanPower_Request_

// alias to use template instance with default allocator
using SetWlanPower_Request =
  h2x::srv::SetWlanPower_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace h2x


#ifndef _WIN32
# define DEPRECATED__h2x__srv__SetWlanPower_Response __attribute__((deprecated))
#else
# define DEPRECATED__h2x__srv__SetWlanPower_Response __declspec(deprecated)
#endif

namespace h2x
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWlanPower_Response_
{
  using Type = SetWlanPower_Response_<ContainerAllocator>;

  explicit SetWlanPower_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0l;
    }
  }

  explicit SetWlanPower_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    h2x::srv::SetWlanPower_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::srv::SetWlanPower_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::srv::SetWlanPower_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::srv::SetWlanPower_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::srv::SetWlanPower_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::SetWlanPower_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::srv::SetWlanPower_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::SetWlanPower_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::srv::SetWlanPower_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::srv::SetWlanPower_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__srv__SetWlanPower_Response
    std::shared_ptr<h2x::srv::SetWlanPower_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__srv__SetWlanPower_Response
    std::shared_ptr<h2x::srv::SetWlanPower_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWlanPower_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetWlanPower_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWlanPower_Response_

// alias to use template instance with default allocator
using SetWlanPower_Response =
  h2x::srv::SetWlanPower_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace h2x


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__h2x__srv__SetWlanPower_Event __attribute__((deprecated))
#else
# define DEPRECATED__h2x__srv__SetWlanPower_Event __declspec(deprecated)
#endif

namespace h2x
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetWlanPower_Event_
{
  using Type = SetWlanPower_Event_<ContainerAllocator>;

  explicit SetWlanPower_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetWlanPower_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<h2x::srv::SetWlanPower_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<h2x::srv::SetWlanPower_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<h2x::srv::SetWlanPower_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<h2x::srv::SetWlanPower_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<h2x::srv::SetWlanPower_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<h2x::srv::SetWlanPower_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<h2x::srv::SetWlanPower_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<h2x::srv::SetWlanPower_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    h2x::srv::SetWlanPower_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const h2x::srv::SetWlanPower_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<h2x::srv::SetWlanPower_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<h2x::srv::SetWlanPower_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      h2x::srv::SetWlanPower_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::SetWlanPower_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      h2x::srv::SetWlanPower_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<h2x::srv::SetWlanPower_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<h2x::srv::SetWlanPower_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<h2x::srv::SetWlanPower_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__h2x__srv__SetWlanPower_Event
    std::shared_ptr<h2x::srv::SetWlanPower_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__h2x__srv__SetWlanPower_Event
    std::shared_ptr<h2x::srv::SetWlanPower_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetWlanPower_Event_ & other) const
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
  bool operator!=(const SetWlanPower_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetWlanPower_Event_

// alias to use template instance with default allocator
using SetWlanPower_Event =
  h2x::srv::SetWlanPower_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace h2x

namespace h2x
{

namespace srv
{

struct SetWlanPower
{
  using Request = h2x::srv::SetWlanPower_Request;
  using Response = h2x::srv::SetWlanPower_Response;
  using Event = h2x::srv::SetWlanPower_Event;
};

}  // namespace srv

}  // namespace h2x

#endif  // H2X__SRV__DETAIL__SET_WLAN_POWER__STRUCT_HPP_
