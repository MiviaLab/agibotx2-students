// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:srv/GetHdsEventHistory.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__STRUCT_HPP_
#define AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/request_header__struct.hpp"
// Member 'query'
#include "aimdk_msgs/msg/detail/hds_event_query__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GetHdsEventHistory_Request __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GetHdsEventHistory_Request __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetHdsEventHistory_Request_
{
  using Type = GetHdsEventHistory_Request_<ContainerAllocator>;

  explicit GetHdsEventHistory_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    query(_init)
  {
    (void)_init;
  }

  explicit GetHdsEventHistory_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    query(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::RequestHeader_<ContainerAllocator>;
  _header_type header;
  using _query_type =
    aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator>;
  _query_type query;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::RequestHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__query(
    const aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator> & _arg)
  {
    this->query = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GetHdsEventHistory_Request
    std::shared_ptr<aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GetHdsEventHistory_Request
    std::shared_ptr<aimdk_msgs::srv::GetHdsEventHistory_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetHdsEventHistory_Request_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->query != other.query) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetHdsEventHistory_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetHdsEventHistory_Request_

// alias to use template instance with default allocator
using GetHdsEventHistory_Request =
  aimdk_msgs::srv::GetHdsEventHistory_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/response_header__struct.hpp"
// Member 'records'
#include "aimdk_msgs/msg/detail/hds_event_record__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__srv__GetHdsEventHistory_Response __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__srv__GetHdsEventHistory_Response __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetHdsEventHistory_Response_
{
  using Type = GetHdsEventHistory_Response_<ContainerAllocator>;

  explicit GetHdsEventHistory_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_count = 0ul;
      this->has_more = false;
    }
  }

  explicit GetHdsEventHistory_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->total_count = 0ul;
      this->has_more = false;
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::ResponseHeader_<ContainerAllocator>;
  _header_type header;
  using _records_type =
    std::vector<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>>>;
  _records_type records;
  using _total_count_type =
    uint32_t;
  _total_count_type total_count;
  using _has_more_type =
    bool;
  _has_more_type has_more;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::ResponseHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__records(
    const std::vector<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>>> & _arg)
  {
    this->records = _arg;
    return *this;
  }
  Type & set__total_count(
    const uint32_t & _arg)
  {
    this->total_count = _arg;
    return *this;
  }
  Type & set__has_more(
    const bool & _arg)
  {
    this->has_more = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__srv__GetHdsEventHistory_Response
    std::shared_ptr<aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__srv__GetHdsEventHistory_Response
    std::shared_ptr<aimdk_msgs::srv::GetHdsEventHistory_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetHdsEventHistory_Response_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->records != other.records) {
      return false;
    }
    if (this->total_count != other.total_count) {
      return false;
    }
    if (this->has_more != other.has_more) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetHdsEventHistory_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetHdsEventHistory_Response_

// alias to use template instance with default allocator
using GetHdsEventHistory_Response =
  aimdk_msgs::srv::GetHdsEventHistory_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace aimdk_msgs

namespace aimdk_msgs
{

namespace srv
{

struct GetHdsEventHistory
{
  using Request = aimdk_msgs::srv::GetHdsEventHistory_Request;
  using Response = aimdk_msgs::srv::GetHdsEventHistory_Response;
};

}  // namespace srv

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__SRV__DETAIL__GET_HDS_EVENT_HISTORY__STRUCT_HPP_
