// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/HdsEventQuery.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__HdsEventQuery __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__HdsEventQuery __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HdsEventQuery_
{
  using Type = HdsEventQuery_<ContainerAllocator>;

  explicit HdsEventQuery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_time = 0ull;
      this->end_time = 0ull;
      this->state = 0;
      this->order_desc = false;
      this->offset = 0ul;
      this->limit = 0ul;
    }
  }

  explicit HdsEventQuery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_time = 0ull;
      this->end_time = 0ull;
      this->state = 0;
      this->order_desc = false;
      this->offset = 0ul;
      this->limit = 0ul;
    }
  }

  // field types and members
  using _start_time_type =
    uint64_t;
  _start_time_type start_time;
  using _end_time_type =
    uint64_t;
  _end_time_type end_time;
  using _diag_codes_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _diag_codes_type diag_codes;
  using _alert_codes_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _alert_codes_type alert_codes;
  using _alert_locations_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _alert_locations_type alert_locations;
  using _state_type =
    uint8_t;
  _state_type state;
  using _order_desc_type =
    bool;
  _order_desc_type order_desc;
  using _offset_type =
    uint32_t;
  _offset_type offset;
  using _limit_type =
    uint32_t;
  _limit_type limit;

  // setters for named parameter idiom
  Type & set__start_time(
    const uint64_t & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__end_time(
    const uint64_t & _arg)
  {
    this->end_time = _arg;
    return *this;
  }
  Type & set__diag_codes(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->diag_codes = _arg;
    return *this;
  }
  Type & set__alert_codes(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->alert_codes = _arg;
    return *this;
  }
  Type & set__alert_locations(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->alert_locations = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__order_desc(
    const bool & _arg)
  {
    this->order_desc = _arg;
    return *this;
  }
  Type & set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__limit(
    const uint32_t & _arg)
  {
    this->limit = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_ALL =
    0u;
  static constexpr uint8_t STATE_ACTIVE =
    1u;
  static constexpr uint8_t STATE_RECOVERED =
    2u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__HdsEventQuery
    std::shared_ptr<aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__HdsEventQuery
    std::shared_ptr<aimdk_msgs::msg::HdsEventQuery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HdsEventQuery_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    if (this->diag_codes != other.diag_codes) {
      return false;
    }
    if (this->alert_codes != other.alert_codes) {
      return false;
    }
    if (this->alert_locations != other.alert_locations) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->order_desc != other.order_desc) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->limit != other.limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const HdsEventQuery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HdsEventQuery_

// alias to use template instance with default allocator
using HdsEventQuery =
  aimdk_msgs::msg::HdsEventQuery_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HdsEventQuery_<ContainerAllocator>::STATE_ALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HdsEventQuery_<ContainerAllocator>::STATE_ACTIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t HdsEventQuery_<ContainerAllocator>::STATE_RECOVERED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__HDS_EVENT_QUERY__STRUCT_HPP_
