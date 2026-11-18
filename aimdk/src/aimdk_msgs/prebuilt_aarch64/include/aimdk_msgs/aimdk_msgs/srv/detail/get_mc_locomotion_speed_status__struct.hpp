// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/GetMcLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'request'
#include "aimdk_msgs/msg/detail/common_request__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMcLocomotionSpeedStatus_Request_
{
  using Type = GetMcLocomotionSpeedStatus_Request_<ContainerAllocator>;

  explicit GetMcLocomotionSpeedStatus_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_init)
  {
    (void)_init;
  }

  explicit GetMcLocomotionSpeedStatus_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _request_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request
    std::shared_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request
    std::shared_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMcLocomotionSpeedStatus_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMcLocomotionSpeedStatus_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMcLocomotionSpeedStatus_Request_

// alias to use template instance with default allocator
using GetMcLocomotionSpeedStatus_Request =
  aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/response_header__struct.hpp"
// Member 'current_speed_status'
// Member 'none_speed_status'
// Member 'low_speed_status'
// Member 'medium_speed_status'
// Member 'high_speed_status'
// Member 'step_speed_status'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetMcLocomotionSpeedStatus_Response_
{
  using Type = GetMcLocomotionSpeedStatus_Response_<ContainerAllocator>;

  explicit GetMcLocomotionSpeedStatus_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    current_speed_status(_init),
    none_speed_status(_init),
    low_speed_status(_init),
    medium_speed_status(_init),
    high_speed_status(_init),
    step_speed_status(_init)
  {
    (void)_init;
  }

  explicit GetMcLocomotionSpeedStatus_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    current_speed_status(_alloc, _init),
    none_speed_status(_alloc, _init),
    low_speed_status(_alloc, _init),
    medium_speed_status(_alloc, _init),
    high_speed_status(_alloc, _init),
    step_speed_status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _current_speed_status_type =
    aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>;
  _current_speed_status_type current_speed_status;
  using _none_speed_status_type =
    aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>;
  _none_speed_status_type none_speed_status;
  using _low_speed_status_type =
    aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>;
  _low_speed_status_type low_speed_status;
  using _medium_speed_status_type =
    aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>;
  _medium_speed_status_type medium_speed_status;
  using _high_speed_status_type =
    aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>;
  _high_speed_status_type high_speed_status;
  using _step_speed_status_type =
    aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>;
  _step_speed_status_type step_speed_status;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_speed_status(
    const aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> & _arg)
  {
    this->current_speed_status = _arg;
    return *this;
  }
  Type & set__none_speed_status(
    const aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> & _arg)
  {
    this->none_speed_status = _arg;
    return *this;
  }
  Type & set__low_speed_status(
    const aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> & _arg)
  {
    this->low_speed_status = _arg;
    return *this;
  }
  Type & set__medium_speed_status(
    const aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> & _arg)
  {
    this->medium_speed_status = _arg;
    return *this;
  }
  Type & set__high_speed_status(
    const aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> & _arg)
  {
    this->high_speed_status = _arg;
    return *this;
  }
  Type & set__step_speed_status(
    const aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> & _arg)
  {
    this->step_speed_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response
    std::shared_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response
    std::shared_ptr<aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetMcLocomotionSpeedStatus_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_speed_status != other.current_speed_status) {
      return false;
    }
    if (this->none_speed_status != other.none_speed_status) {
      return false;
    }
    if (this->low_speed_status != other.low_speed_status) {
      return false;
    }
    if (this->medium_speed_status != other.medium_speed_status) {
      return false;
    }
    if (this->high_speed_status != other.high_speed_status) {
      return false;
    }
    if (this->step_speed_status != other.step_speed_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetMcLocomotionSpeedStatus_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetMcLocomotionSpeedStatus_Response_

// alias to use template instance with default allocator
using GetMcLocomotionSpeedStatus_Response =
  aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct GetMcLocomotionSpeedStatus
{
  using Request = aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Request;
  using Response = aimdk_msgs::srv::GetMcLocomotionSpeedStatus_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_MC_LOCOMOTION_SPEED_STATUS__STRUCT_HPP_
