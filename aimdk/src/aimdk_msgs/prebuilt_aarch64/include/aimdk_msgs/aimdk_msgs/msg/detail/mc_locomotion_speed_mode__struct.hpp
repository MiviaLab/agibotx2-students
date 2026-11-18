// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McLocomotionSpeedMode.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedMode __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedMode __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McLocomotionSpeedMode_
{
  using Type = McLocomotionSpeedMode_<ContainerAllocator>;

  explicit McLocomotionSpeedMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  explicit McLocomotionSpeedMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0l;
    }
  }

  // field types and members
  using _value_type =
    int32_t;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value(
    const int32_t & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int32_t MC_LOCOMOTION_NONE_SPEED =
    0;
  static constexpr int32_t MC_LOCOMOTION_LOW_SPEED =
    1;
  static constexpr int32_t MC_LOCOMOTION_MEIDUM_SPEED =
    2;
  static constexpr int32_t MC_LOCOMOTION_HIGH_SPEED =
    3;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedMode
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedMode
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McLocomotionSpeedMode_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const McLocomotionSpeedMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McLocomotionSpeedMode_

// alias to use template instance with default allocator
using McLocomotionSpeedMode =
  aimdk_msgs::msg::McLocomotionSpeedMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McLocomotionSpeedMode_<ContainerAllocator>::MC_LOCOMOTION_NONE_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McLocomotionSpeedMode_<ContainerAllocator>::MC_LOCOMOTION_LOW_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McLocomotionSpeedMode_<ContainerAllocator>::MC_LOCOMOTION_MEIDUM_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int32_t McLocomotionSpeedMode_<ContainerAllocator>::MC_LOCOMOTION_HIGH_SPEED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_MODE__STRUCT_HPP_
