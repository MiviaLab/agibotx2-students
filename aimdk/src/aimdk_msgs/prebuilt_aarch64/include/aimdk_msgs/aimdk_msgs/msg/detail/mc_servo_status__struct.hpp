// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/McServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__McServoStatus __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__McServoStatus __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct McServoStatus_
{
  using Type = McServoStatus_<ContainerAllocator>;

  explicit McServoStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->squat_enable = false;
      this->squat_offset = 0.0;
      this->squat_limit = 0ul;
      this->head_yaw_offset = 0.0;
      this->head_pitch_offset = 0.0;
      this->waist_yaw_offset = 0.0;
      this->waist_pitch_offset = 0.0;
      this->waist_roll_offset = 0.0;
    }
  }

  explicit McServoStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->squat_enable = false;
      this->squat_offset = 0.0;
      this->squat_limit = 0ul;
      this->head_yaw_offset = 0.0;
      this->head_pitch_offset = 0.0;
      this->waist_yaw_offset = 0.0;
      this->waist_pitch_offset = 0.0;
      this->waist_roll_offset = 0.0;
    }
  }

  // field types and members
  using _squat_enable_type =
    bool;
  _squat_enable_type squat_enable;
  using _squat_offset_type =
    double;
  _squat_offset_type squat_offset;
  using _squat_limit_type =
    uint32_t;
  _squat_limit_type squat_limit;
  using _head_yaw_offset_type =
    double;
  _head_yaw_offset_type head_yaw_offset;
  using _head_pitch_offset_type =
    double;
  _head_pitch_offset_type head_pitch_offset;
  using _waist_yaw_offset_type =
    double;
  _waist_yaw_offset_type waist_yaw_offset;
  using _waist_pitch_offset_type =
    double;
  _waist_pitch_offset_type waist_pitch_offset;
  using _waist_roll_offset_type =
    double;
  _waist_roll_offset_type waist_roll_offset;

  // setters for named parameter idiom
  Type & set__squat_enable(
    const bool & _arg)
  {
    this->squat_enable = _arg;
    return *this;
  }
  Type & set__squat_offset(
    const double & _arg)
  {
    this->squat_offset = _arg;
    return *this;
  }
  Type & set__squat_limit(
    const uint32_t & _arg)
  {
    this->squat_limit = _arg;
    return *this;
  }
  Type & set__head_yaw_offset(
    const double & _arg)
  {
    this->head_yaw_offset = _arg;
    return *this;
  }
  Type & set__head_pitch_offset(
    const double & _arg)
  {
    this->head_pitch_offset = _arg;
    return *this;
  }
  Type & set__waist_yaw_offset(
    const double & _arg)
  {
    this->waist_yaw_offset = _arg;
    return *this;
  }
  Type & set__waist_pitch_offset(
    const double & _arg)
  {
    this->waist_pitch_offset = _arg;
    return *this;
  }
  Type & set__waist_roll_offset(
    const double & _arg)
  {
    this->waist_roll_offset = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t BEFORE_LIMIT =
    0u;
  static constexpr uint32_t LOWER_LIMIT =
    1u;
  static constexpr uint32_t UPPER_LIMIT =
    2u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::McServoStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::McServoStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McServoStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::McServoStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McServoStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McServoStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::McServoStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::McServoStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McServoStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::McServoStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__McServoStatus
    std::shared_ptr<aimdk_msgs::msg::McServoStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__McServoStatus
    std::shared_ptr<aimdk_msgs::msg::McServoStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const McServoStatus_ & other) const
  {
    if (this->squat_enable != other.squat_enable) {
      return false;
    }
    if (this->squat_offset != other.squat_offset) {
      return false;
    }
    if (this->squat_limit != other.squat_limit) {
      return false;
    }
    if (this->head_yaw_offset != other.head_yaw_offset) {
      return false;
    }
    if (this->head_pitch_offset != other.head_pitch_offset) {
      return false;
    }
    if (this->waist_yaw_offset != other.waist_yaw_offset) {
      return false;
    }
    if (this->waist_pitch_offset != other.waist_pitch_offset) {
      return false;
    }
    if (this->waist_roll_offset != other.waist_roll_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const McServoStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct McServoStatus_

// alias to use template instance with default allocator
using McServoStatus =
  aimdk_msgs::msg::McServoStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t McServoStatus_<ContainerAllocator>::BEFORE_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t McServoStatus_<ContainerAllocator>::LOWER_LIMIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t McServoStatus_<ContainerAllocator>::UPPER_LIMIT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__MC_SERVO_STATUS__STRUCT_HPP_
