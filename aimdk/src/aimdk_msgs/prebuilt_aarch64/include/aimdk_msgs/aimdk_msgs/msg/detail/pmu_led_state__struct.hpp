// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/PmuLedState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PMU_LED_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PMU_LED_STATE__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__PmuLedState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__PmuLedState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PmuLedState_
{
  using Type = PmuLedState_<ContainerAllocator>;

  explicit PmuLedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trace_id = "";
      this->led_strip_mode = 0;
      this->r = 0;
      this->g = 0;
      this->b = 0;
      this->priority = 0l;
    }
  }

  explicit PmuLedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    trace_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trace_id = "";
      this->led_strip_mode = 0;
      this->r = 0;
      this->g = 0;
      this->b = 0;
      this->priority = 0l;
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _trace_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _trace_id_type trace_id;
  using _led_strip_mode_type =
    uint8_t;
  _led_strip_mode_type led_strip_mode;
  using _r_type =
    uint8_t;
  _r_type r;
  using _g_type =
    uint8_t;
  _g_type g;
  using _b_type =
    uint8_t;
  _b_type b;
  using _priority_type =
    int32_t;
  _priority_type priority;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__trace_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->trace_id = _arg;
    return *this;
  }
  Type & set__led_strip_mode(
    const uint8_t & _arg)
  {
    this->led_strip_mode = _arg;
    return *this;
  }
  Type & set__r(
    const uint8_t & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const uint8_t & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const uint8_t & _arg)
  {
    this->b = _arg;
    return *this;
  }
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t LED_STRIP_MODE_CONSTANT =
    0u;
  static constexpr uint8_t LED_STRIP_MODE_BREATH =
    1u;
  static constexpr uint8_t LED_STRIP_MODE_FLASH =
    2u;
  static constexpr uint8_t LED_STRIP_MODE_FLOW =
    3u;
  static constexpr uint8_t LED_STRIP_MODE_MAX =
    4u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::PmuLedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::PmuLedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PmuLedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PmuLedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PmuLedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PmuLedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PmuLedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PmuLedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PmuLedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PmuLedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__PmuLedState
    std::shared_ptr<aimdk_msgs::msg::PmuLedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__PmuLedState
    std::shared_ptr<aimdk_msgs::msg::PmuLedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PmuLedState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->trace_id != other.trace_id) {
      return false;
    }
    if (this->led_strip_mode != other.led_strip_mode) {
      return false;
    }
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    return true;
  }
  bool operator!=(const PmuLedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PmuLedState_

// alias to use template instance with default allocator
using PmuLedState =
  aimdk_msgs::msg::PmuLedState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PmuLedState_<ContainerAllocator>::LED_STRIP_MODE_CONSTANT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PmuLedState_<ContainerAllocator>::LED_STRIP_MODE_BREATH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PmuLedState_<ContainerAllocator>::LED_STRIP_MODE_FLASH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PmuLedState_<ContainerAllocator>::LED_STRIP_MODE_FLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PmuLedState_<ContainerAllocator>::LED_STRIP_MODE_MAX;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PMU_LED_STATE__STRUCT_HPP_
