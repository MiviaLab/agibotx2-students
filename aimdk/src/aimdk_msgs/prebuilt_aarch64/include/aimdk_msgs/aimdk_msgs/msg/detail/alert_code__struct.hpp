// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/AlertCode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__AlertCode __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__AlertCode __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AlertCode_
{
  using Type = AlertCode_<ContainerAllocator>;

  explicit AlertCode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->first_timestamp = 0ull;
      this->code = "";
    }
  }

  explicit AlertCode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : code(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->first_timestamp = 0ull;
      this->code = "";
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _first_timestamp_type =
    uint64_t;
  _first_timestamp_type first_timestamp;
  using _code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _code_type code;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__first_timestamp(
    const uint64_t & _arg)
  {
    this->first_timestamp = _arg;
    return *this;
  }
  Type & set__code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->code = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::AlertCode_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::AlertCode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::AlertCode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::AlertCode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__AlertCode
    std::shared_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__AlertCode
    std::shared_ptr<aimdk_msgs::msg::AlertCode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AlertCode_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->first_timestamp != other.first_timestamp) {
      return false;
    }
    if (this->code != other.code) {
      return false;
    }
    return true;
  }
  bool operator!=(const AlertCode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AlertCode_

// alias to use template instance with default allocator
using AlertCode =
  aimdk_msgs::msg::AlertCode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__ALERT_CODE__STRUCT_HPP_
