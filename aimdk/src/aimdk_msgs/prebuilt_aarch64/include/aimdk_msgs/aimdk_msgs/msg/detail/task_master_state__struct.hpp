// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/TaskMasterState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fix_line_intro_state'
#include "aimdk_msgs/msg/detail/fix_line_intro_state__struct.hpp"
// Member 'pilot_state'
#include "aimdk_msgs/msg/detail/pilot_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__TaskMasterState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__TaskMasterState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TaskMasterState_
{
  using Type = TaskMasterState_<ContainerAllocator>;

  explicit TaskMasterState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : fix_line_intro_state(_init),
    pilot_state(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->main_state = 0;
      this->sub_state = 0;
      this->slam_state = 0;
      this->loc_map_id = 0ull;
      this->loc_map_name = "";
      this->reserve_info = "";
    }
  }

  explicit TaskMasterState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : loc_map_name(_alloc),
    fix_line_intro_state(_alloc, _init),
    pilot_state(_alloc, _init),
    reserve_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->main_state = 0;
      this->sub_state = 0;
      this->slam_state = 0;
      this->loc_map_id = 0ull;
      this->loc_map_name = "";
      this->reserve_info = "";
    }
  }

  // field types and members
  using _main_state_type =
    uint8_t;
  _main_state_type main_state;
  using _sub_state_type =
    uint8_t;
  _sub_state_type sub_state;
  using _slam_state_type =
    uint8_t;
  _slam_state_type slam_state;
  using _loc_map_id_type =
    uint64_t;
  _loc_map_id_type loc_map_id;
  using _loc_map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _loc_map_name_type loc_map_name;
  using _fix_line_intro_state_type =
    aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator>;
  _fix_line_intro_state_type fix_line_intro_state;
  using _pilot_state_type =
    aimdk_msgs::msg::PilotState_<ContainerAllocator>;
  _pilot_state_type pilot_state;
  using _reserve_info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reserve_info_type reserve_info;

  // setters for named parameter idiom
  Type & set__main_state(
    const uint8_t & _arg)
  {
    this->main_state = _arg;
    return *this;
  }
  Type & set__sub_state(
    const uint8_t & _arg)
  {
    this->sub_state = _arg;
    return *this;
  }
  Type & set__slam_state(
    const uint8_t & _arg)
  {
    this->slam_state = _arg;
    return *this;
  }
  Type & set__loc_map_id(
    const uint64_t & _arg)
  {
    this->loc_map_id = _arg;
    return *this;
  }
  Type & set__loc_map_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->loc_map_name = _arg;
    return *this;
  }
  Type & set__fix_line_intro_state(
    const aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator> & _arg)
  {
    this->fix_line_intro_state = _arg;
    return *this;
  }
  Type & set__pilot_state(
    const aimdk_msgs::msg::PilotState_<ContainerAllocator> & _arg)
  {
    this->pilot_state = _arg;
    return *this;
  }
  Type & set__reserve_info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reserve_info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TM_MAIN_STATE_IDLE =
    0u;
  static constexpr uint8_t TM_MAIN_STATE_RELOCALIZATION =
    1u;
  static constexpr uint8_t TM_MAIN_STATE_MAPPING =
    2u;
  static constexpr uint8_t TM_MAIN_STATE_FIX_LINE_INTRO =
    3u;
  static constexpr uint8_t TM_MAIN_STATE_RECORDING_PATH =
    4u;
  static constexpr uint8_t TM_MAIN_STATE_PILOT =
    5u;
  static constexpr uint8_t TM_SUB_STATE_NONE =
    0u;
  static constexpr uint8_t TM_SUB_STATE_RESUME =
    1u;
  static constexpr uint8_t TM_SUB_STATE_PAUSE =
    2u;
  static constexpr uint8_t SLAM_STATE_IDLE =
    0u;
  static constexpr uint8_t SLAM_STATE_RELOCALIZATION =
    1u;
  static constexpr uint8_t SLAM_STATE_MAPPING =
    2u;
  static constexpr uint8_t SLAM_STATE_LOCALIZATION =
    3u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::TaskMasterState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::TaskMasterState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::TaskMasterState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::TaskMasterState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::TaskMasterState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::TaskMasterState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::TaskMasterState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::TaskMasterState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::TaskMasterState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::TaskMasterState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__TaskMasterState
    std::shared_ptr<aimdk_msgs::msg::TaskMasterState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__TaskMasterState
    std::shared_ptr<aimdk_msgs::msg::TaskMasterState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TaskMasterState_ & other) const
  {
    if (this->main_state != other.main_state) {
      return false;
    }
    if (this->sub_state != other.sub_state) {
      return false;
    }
    if (this->slam_state != other.slam_state) {
      return false;
    }
    if (this->loc_map_id != other.loc_map_id) {
      return false;
    }
    if (this->loc_map_name != other.loc_map_name) {
      return false;
    }
    if (this->fix_line_intro_state != other.fix_line_intro_state) {
      return false;
    }
    if (this->pilot_state != other.pilot_state) {
      return false;
    }
    if (this->reserve_info != other.reserve_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const TaskMasterState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TaskMasterState_

// alias to use template instance with default allocator
using TaskMasterState =
  aimdk_msgs::msg::TaskMasterState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_MAIN_STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_MAIN_STATE_RELOCALIZATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_MAIN_STATE_MAPPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_MAIN_STATE_FIX_LINE_INTRO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_MAIN_STATE_RECORDING_PATH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_MAIN_STATE_PILOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_SUB_STATE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_SUB_STATE_RESUME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::TM_SUB_STATE_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::SLAM_STATE_IDLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::SLAM_STATE_RELOCALIZATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::SLAM_STATE_MAPPING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TaskMasterState_<ContainerAllocator>::SLAM_STATE_LOCALIZATION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__TASK_MASTER_STATE__STRUCT_HPP_
