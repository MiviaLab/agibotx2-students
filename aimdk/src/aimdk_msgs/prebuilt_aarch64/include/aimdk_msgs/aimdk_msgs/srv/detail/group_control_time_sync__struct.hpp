// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/GroupControlTimeSync.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_request__struct.hpp"
// Member 'slaves'
#include "aimdk_msgs/msg/detail/slave_device__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GroupControlTimeSync_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GroupControlTimeSync_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GroupControlTimeSync_Request_
{
  using Type = GroupControlTimeSync_Request_<ContainerAllocator>;

  explicit GroupControlTimeSync_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit GroupControlTimeSync_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::CommonRequest_<ContainerAllocator>;
  _header_type header;
  using _slaves_type =
    std::vector<aimdk_msgs::msg::SlaveDevice_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::SlaveDevice_<ContainerAllocator>>>;
  _slaves_type slaves;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::CommonRequest_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__slaves(
    const std::vector<aimdk_msgs::msg::SlaveDevice_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::SlaveDevice_<ContainerAllocator>>> & _arg)
  {
    this->slaves = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GroupControlTimeSync_Request
    std::shared_ptr<aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GroupControlTimeSync_Request
    std::shared_ptr<aimdk_msgs::srv::GroupControlTimeSync_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupControlTimeSync_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->slaves != other.slaves) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupControlTimeSync_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupControlTimeSync_Request_

// alias to use template instance with default allocator
using GroupControlTimeSync_Request =
  aimdk_msgs::srv::GroupControlTimeSync_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/common_response__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GroupControlTimeSync_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GroupControlTimeSync_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GroupControlTimeSync_Response_
{
  using Type = GroupControlTimeSync_Response_<ContainerAllocator>;

  explicit GroupControlTimeSync_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->error_msg = "";
    }
  }

  explicit GroupControlTimeSync_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    error_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0l;
      this->error_msg = "";
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::CommonResponse_<ContainerAllocator>;
  _header_type header;
  using _error_code_type =
    int32_t;
  _error_code_type error_code;
  using _error_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_msg_type error_msg;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::CommonResponse_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__error_code(
    const int32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GroupControlTimeSync_Response
    std::shared_ptr<aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GroupControlTimeSync_Response
    std::shared_ptr<aimdk_msgs::srv::GroupControlTimeSync_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupControlTimeSync_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_msg != other.error_msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupControlTimeSync_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupControlTimeSync_Response_

// alias to use template instance with default allocator
using GroupControlTimeSync_Response =
  aimdk_msgs::srv::GroupControlTimeSync_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct GroupControlTimeSync
{
  using Request = aimdk_msgs::srv::GroupControlTimeSync_Request;
  using Response = aimdk_msgs::srv::GroupControlTimeSync_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GROUP_CONTROL_TIME_SYNC__STRUCT_HPP_
