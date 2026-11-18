// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/HdsEventRecord.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__HdsEventRecord __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__HdsEventRecord __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HdsEventRecord_
{
  using Type = HdsEventRecord_<ContainerAllocator>;

  explicit HdsEventRecord_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->diag_code = 0ull;
      this->alert_code = "";
      this->alert_location = "";
      this->first_timestamp = 0ull;
      this->last_timestamp = 0ull;
      this->recover_timestamp = 0ull;
      this->duration_ns = 0ull;
      this->recovered = false;
    }
  }

  explicit HdsEventRecord_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : alert_code(_alloc),
    alert_location(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->diag_code = 0ull;
      this->alert_code = "";
      this->alert_location = "";
      this->first_timestamp = 0ull;
      this->last_timestamp = 0ull;
      this->recover_timestamp = 0ull;
      this->duration_ns = 0ull;
      this->recovered = false;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _diag_code_type =
    uint64_t;
  _diag_code_type diag_code;
  using _alert_code_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _alert_code_type alert_code;
  using _alert_location_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _alert_location_type alert_location;
  using _first_timestamp_type =
    uint64_t;
  _first_timestamp_type first_timestamp;
  using _last_timestamp_type =
    uint64_t;
  _last_timestamp_type last_timestamp;
  using _recover_timestamp_type =
    uint64_t;
  _recover_timestamp_type recover_timestamp;
  using _duration_ns_type =
    uint64_t;
  _duration_ns_type duration_ns;
  using _recovered_type =
    bool;
  _recovered_type recovered;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__diag_code(
    const uint64_t & _arg)
  {
    this->diag_code = _arg;
    return *this;
  }
  Type & set__alert_code(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->alert_code = _arg;
    return *this;
  }
  Type & set__alert_location(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->alert_location = _arg;
    return *this;
  }
  Type & set__first_timestamp(
    const uint64_t & _arg)
  {
    this->first_timestamp = _arg;
    return *this;
  }
  Type & set__last_timestamp(
    const uint64_t & _arg)
  {
    this->last_timestamp = _arg;
    return *this;
  }
  Type & set__recover_timestamp(
    const uint64_t & _arg)
  {
    this->recover_timestamp = _arg;
    return *this;
  }
  Type & set__duration_ns(
    const uint64_t & _arg)
  {
    this->duration_ns = _arg;
    return *this;
  }
  Type & set__recovered(
    const bool & _arg)
  {
    this->recovered = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__HdsEventRecord
    std::shared_ptr<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__HdsEventRecord
    std::shared_ptr<aimdk_msgs::msg::HdsEventRecord_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HdsEventRecord_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->diag_code != other.diag_code) {
      return false;
    }
    if (this->alert_code != other.alert_code) {
      return false;
    }
    if (this->alert_location != other.alert_location) {
      return false;
    }
    if (this->first_timestamp != other.first_timestamp) {
      return false;
    }
    if (this->last_timestamp != other.last_timestamp) {
      return false;
    }
    if (this->recover_timestamp != other.recover_timestamp) {
      return false;
    }
    if (this->duration_ns != other.duration_ns) {
      return false;
    }
    if (this->recovered != other.recovered) {
      return false;
    }
    return true;
  }
  bool operator!=(const HdsEventRecord_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HdsEventRecord_

// alias to use template instance with default allocator
using HdsEventRecord =
  aimdk_msgs::msg::HdsEventRecord_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_RECORD__STRUCT_HPP_
