// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'speed_mode'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_mode__struct.hpp"
// Member 'forward_bounds'
// Member 'lateral_bounds'
// Member 'angular_bounds'
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_bounds__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedStatus __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedStatus __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McLocomotionSpeedStatus_
{
  using Type = McLocomotionSpeedStatus_<ContainerAllocator>;

  explicit McLocomotionSpeedStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : speed_mode(_init),
    forward_bounds(_init),
    lateral_bounds(_init),
    angular_bounds(_init)
  {
    (void)_init;
  }

  explicit McLocomotionSpeedStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : speed_mode(_alloc, _init),
    forward_bounds(_alloc, _init),
    lateral_bounds(_alloc, _init),
    angular_bounds(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _speed_mode_type =
    aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator>;
  _speed_mode_type speed_mode;
  using _forward_bounds_type =
    aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>;
  _forward_bounds_type forward_bounds;
  using _lateral_bounds_type =
    aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>;
  _lateral_bounds_type lateral_bounds;
  using _angular_bounds_type =
    aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator>;
  _angular_bounds_type angular_bounds;

  // setters for named parameter idiom
  Type & set__speed_mode(
    const aimdk_msgs::msg::McLocomotionSpeedMode_<ContainerAllocator> & _arg)
  {
    this->speed_mode = _arg;
    return *this;
  }
  Type & set__forward_bounds(
    const aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> & _arg)
  {
    this->forward_bounds = _arg;
    return *this;
  }
  Type & set__lateral_bounds(
    const aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> & _arg)
  {
    this->lateral_bounds = _arg;
    return *this;
  }
  Type & set__angular_bounds(
    const aimdk_msgs::msg::McLocomotionSpeedBounds_<ContainerAllocator> & _arg)
  {
    this->angular_bounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedStatus
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McLocomotionSpeedStatus
    std::shared_ptr<aimdk_msgs::msg::McLocomotionSpeedStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McLocomotionSpeedStatus_ & other) const
  {
    if (this->speed_mode != other.speed_mode) {
      return false;
    }
    if (this->forward_bounds != other.forward_bounds) {
      return false;
    }
    if (this->lateral_bounds != other.lateral_bounds) {
      return false;
    }
    if (this->angular_bounds != other.angular_bounds) {
      return false;
    }
    return true;
  }
  bool operator!=(const McLocomotionSpeedStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McLocomotionSpeedStatus_

// alias to use template instance with default allocator
using McLocomotionSpeedStatus =
  aimdk_msgs::msg::McLocomotionSpeedStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_LOCOMOTION_SPEED_STATUS__STRUCT_HPP_
