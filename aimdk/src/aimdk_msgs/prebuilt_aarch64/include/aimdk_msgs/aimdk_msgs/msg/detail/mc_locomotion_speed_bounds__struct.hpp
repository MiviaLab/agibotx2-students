// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McLocomotionSpeedBounds.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedBounds __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedBounds __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McLocomotionSpeedBounds_
{
  using Type = McLocomotionSpeedBounds_<ContainerAllocator>;

  explicit McLocomotionSpeedBounds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_value = 0.0;
      this->max_value = 0.0;
    }
  }

  explicit McLocomotionSpeedBounds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_value = 0.0;
      this->max_value = 0.0;
    }
  }

  // field types and members
  using _min_value_type =
    double;
  _min_value_type min_value;
  using _max_value_type =
    double;
  _max_value_type max_value;

  // setters for named parameter idiom
  Type & set__min_value(
    const double & _arg)
  {
    this->min_value = _arg;
    return *this;
  }
  Type & set__max_value(
    const double & _arg)
  {
    this->max_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedBounds
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedBounds
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McLocomotionSpeedBounds_ & other) const
  {
    if (this->min_value != other.min_value) {
      return false;
    }
    if (this->max_value != other.max_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const McLocomotionSpeedBounds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McLocomotionSpeedBounds_

// alias to use template instance with default allocator
using McLocomotionSpeedBounds =
  aimdk_msgs::msg::McLocomotionSpeedBounds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_BOUNDS__STRUCT_HPP_
