// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/SmSystemState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__struct.hpp"
// Member 'cur_status'
#include "aimdk_msgs/msg/detail/system_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__SmSystemState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__SmSystemState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SmSystemState_
{
  using Type = SmSystemState_<ContainerAllocator>;

  explicit SmSystemState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    cur_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cur_state = "";
    }
  }

  explicit SmSystemState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cur_state(_alloc),
    cur_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cur_state = "";
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _cur_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cur_state_type cur_state;
  using _cur_status_type =
    aimdk_msgs::msg::SystemStatus_<ContainerAllocator>;
  _cur_status_type cur_status;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__cur_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cur_state = _arg;
    return *this;
  }
  Type & set__cur_status(
    const aimdk_msgs::msg::SystemStatus_<ContainerAllocator> & _arg)
  {
    this->cur_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::SmSystemState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::SmSystemState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::SmSystemState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::SmSystemState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::SmSystemState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::SmSystemState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::SmSystemState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::SmSystemState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::SmSystemState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::SmSystemState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__SmSystemState
    std::shared_ptr<aimdk_msgs::msg::SmSystemState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__SmSystemState
    std::shared_ptr<aimdk_msgs::msg::SmSystemState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SmSystemState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->cur_state != other.cur_state) {
      return false;
    }
    if (this->cur_status != other.cur_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const SmSystemState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SmSystemState_

// alias to use template instance with default allocator
using SmSystemState =
  aimdk_msgs::msg::SmSystemState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__SM_SYSTEM_STATE__STRUCT_HPP_
