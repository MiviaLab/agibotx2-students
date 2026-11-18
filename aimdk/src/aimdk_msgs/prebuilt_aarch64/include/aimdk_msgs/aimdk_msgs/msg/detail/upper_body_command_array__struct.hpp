// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/UpperBodyCommandArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__msg__UpperBodyCommandArray __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__UpperBodyCommandArray __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UpperBodyCommandArray_
{
  using Type = UpperBodyCommandArray_<ContainerAllocator>;

  explicit UpperBodyCommandArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->hand_sub_mode = 0;
      std::fill<typename std::array<double, 2>::iterator, double>(this->head_pos.begin(), this->head_pos.end(), 0.0);
      std::fill<typename std::array<double, 14>::iterator, double>(this->arm_pos.begin(), this->arm_pos.end(), 0.0);
    }
  }

  explicit UpperBodyCommandArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    source(_alloc),
    head_pos(_alloc),
    arm_pos(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = "";
      this->hand_sub_mode = 0;
      std::fill<typename std::array<double, 2>::iterator, double>(this->head_pos.begin(), this->head_pos.end(), 0.0);
      std::fill<typename std::array<double, 14>::iterator, double>(this->arm_pos.begin(), this->arm_pos.end(), 0.0);
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _source_type source;
  using _hand_sub_mode_type =
    uint8_t;
  _hand_sub_mode_type hand_sub_mode;
  using _head_pos_type =
    std::array<double, 2>;
  _head_pos_type head_pos;
  using _arm_pos_type =
    std::array<double, 14>;
  _arm_pos_type arm_pos;
  using _hand_pos_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _hand_pos_type hand_pos;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__hand_sub_mode(
    const uint8_t & _arg)
  {
    this->hand_sub_mode = _arg;
    return *this;
  }
  Type & set__head_pos(
    const std::array<double, 2> & _arg)
  {
    this->head_pos = _arg;
    return *this;
  }
  Type & set__arm_pos(
    const std::array<double, 14> & _arg)
  {
    this->arm_pos = _arg;
    return *this;
  }
  Type & set__hand_pos(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->hand_pos = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t HAND_CLAW_OPEN_CLOSE =
    1u;
  static constexpr uint8_t HAND_DEXTEROUS_JOINT =
    2u;
  static constexpr uint8_t HAND_DEXTEROUS_GESTURE =
    3u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__UpperBodyCommandArray
    std::shared_ptr<aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__UpperBodyCommandArray
    std::shared_ptr<aimdk_msgs::msg::UpperBodyCommandArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpperBodyCommandArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    if (this->hand_sub_mode != other.hand_sub_mode) {
      return false;
    }
    if (this->head_pos != other.head_pos) {
      return false;
    }
    if (this->arm_pos != other.arm_pos) {
      return false;
    }
    if (this->hand_pos != other.hand_pos) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpperBodyCommandArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpperBodyCommandArray_

// alias to use template instance with default allocator
using UpperBodyCommandArray =
  aimdk_msgs::msg::UpperBodyCommandArray_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UpperBodyCommandArray_<ContainerAllocator>::HAND_CLAW_OPEN_CLOSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UpperBodyCommandArray_<ContainerAllocator>::HAND_DEXTEROUS_JOINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t UpperBodyCommandArray_<ContainerAllocator>::HAND_DEXTEROUS_GESTURE;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__UPPER_BODY_COMMAND_ARRAY__STRUCT_HPP_
