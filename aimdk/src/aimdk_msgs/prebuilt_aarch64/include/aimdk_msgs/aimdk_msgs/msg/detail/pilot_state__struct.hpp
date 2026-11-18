// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/PilotState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__PilotState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__PilotState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PilotState_
{
  using Type = PilotState_<ContainerAllocator>;

  explicit PilotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_name = "";
      this->target_id = 0ull;
      this->intro_task_name = "";
      this->intro_task_id = 0ull;
      this->map_name = "";
      this->map_id = 0ull;
      this->pilot_state = 0;
    }
  }

  explicit PilotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : target_name(_alloc),
    intro_task_name(_alloc),
    map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->target_name = "";
      this->target_id = 0ull;
      this->intro_task_name = "";
      this->intro_task_id = 0ull;
      this->map_name = "";
      this->map_id = 0ull;
      this->pilot_state = 0;
    }
  }

  // field types and members
  using _target_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _target_name_type target_name;
  using _target_id_type =
    uint64_t;
  _target_id_type target_id;
  using _intro_task_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _intro_task_name_type intro_task_name;
  using _intro_task_id_type =
    uint64_t;
  _intro_task_id_type intro_task_id;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _map_id_type =
    uint64_t;
  _map_id_type map_id;
  using _pilot_state_type =
    uint8_t;
  _pilot_state_type pilot_state;

  // setters for named parameter idiom
  Type & set__target_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->target_name = _arg;
    return *this;
  }
  Type & set__target_id(
    const uint64_t & _arg)
  {
    this->target_id = _arg;
    return *this;
  }
  Type & set__intro_task_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->intro_task_name = _arg;
    return *this;
  }
  Type & set__intro_task_id(
    const uint64_t & _arg)
  {
    this->intro_task_id = _arg;
    return *this;
  }
  Type & set__map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_name = _arg;
    return *this;
  }
  Type & set__map_id(
    const uint64_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__pilot_state(
    const uint8_t & _arg)
  {
    this->pilot_state = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TM_PILOT_STATE_NAVI_TO_TARGET =
    0u;
  static constexpr uint8_t TM_PILOT_STATE_TARGET_ACTIONS =
    1u;
  static constexpr uint8_t TM_PILOT_STATE_NAVI_RETURN =
    2u;
  static constexpr uint8_t TM_PILOT_STATE_STANDBY_ACTIONS =
    3u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::PilotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::PilotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PilotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PilotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PilotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PilotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PilotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PilotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PilotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PilotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__PilotState
    std::shared_ptr<aimdk_msgs::msg::PilotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__PilotState
    std::shared_ptr<aimdk_msgs::msg::PilotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PilotState_ & other) const
  {
    if (this->target_name != other.target_name) {
      return false;
    }
    if (this->target_id != other.target_id) {
      return false;
    }
    if (this->intro_task_name != other.intro_task_name) {
      return false;
    }
    if (this->intro_task_id != other.intro_task_id) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->pilot_state != other.pilot_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const PilotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PilotState_

// alias to use template instance with default allocator
using PilotState =
  aimdk_msgs::msg::PilotState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PilotState_<ContainerAllocator>::TM_PILOT_STATE_NAVI_TO_TARGET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PilotState_<ContainerAllocator>::TM_PILOT_STATE_TARGET_ACTIONS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PilotState_<ContainerAllocator>::TM_PILOT_STATE_NAVI_RETURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PilotState_<ContainerAllocator>::TM_PILOT_STATE_STANDBY_ACTIONS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PILOT_STATE__STRUCT_HPP_
