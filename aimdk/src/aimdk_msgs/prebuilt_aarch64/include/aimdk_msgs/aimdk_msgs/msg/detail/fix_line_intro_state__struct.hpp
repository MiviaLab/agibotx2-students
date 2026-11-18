// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/FixLineIntroState.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__FixLineIntroState __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__FixLineIntroState __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixLineIntroState_
{
  using Type = FixLineIntroState_<ContainerAllocator>;

  explicit FixLineIntroState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_task_id = 0ull;
      this->set_task_name = "";
      this->task_name = "";
      this->task_id = 0ull;
      this->map_name = "";
      this->map_id = 0ull;
      this->rest_site_number = 0ul;
      this->fix_line_intro_state = 0;
      this->cur_target_id = 0ull;
    }
  }

  explicit FixLineIntroState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : set_task_name(_alloc),
    task_name(_alloc),
    map_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_task_id = 0ull;
      this->set_task_name = "";
      this->task_name = "";
      this->task_id = 0ull;
      this->map_name = "";
      this->map_id = 0ull;
      this->rest_site_number = 0ul;
      this->fix_line_intro_state = 0;
      this->cur_target_id = 0ull;
    }
  }

  // field types and members
  using _set_task_id_type =
    uint64_t;
  _set_task_id_type set_task_id;
  using _set_task_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _set_task_name_type set_task_name;
  using _task_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _task_name_type task_name;
  using _task_id_type =
    uint64_t;
  _task_id_type task_id;
  using _map_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_name_type map_name;
  using _map_id_type =
    uint64_t;
  _map_id_type map_id;
  using _rest_site_number_type =
    uint32_t;
  _rest_site_number_type rest_site_number;
  using _fix_line_intro_state_type =
    uint8_t;
  _fix_line_intro_state_type fix_line_intro_state;
  using _cur_target_id_type =
    uint64_t;
  _cur_target_id_type cur_target_id;

  // setters for named parameter idiom
  Type & set__set_task_id(
    const uint64_t & _arg)
  {
    this->set_task_id = _arg;
    return *this;
  }
  Type & set__set_task_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->set_task_name = _arg;
    return *this;
  }
  Type & set__task_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->task_name = _arg;
    return *this;
  }
  Type & set__task_id(
    const uint64_t & _arg)
  {
    this->task_id = _arg;
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
  Type & set__rest_site_number(
    const uint32_t & _arg)
  {
    this->rest_site_number = _arg;
    return *this;
  }
  Type & set__fix_line_intro_state(
    const uint8_t & _arg)
  {
    this->fix_line_intro_state = _arg;
    return *this;
  }
  Type & set__cur_target_id(
    const uint64_t & _arg)
  {
    this->cur_target_id = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE =
    0u;
  static constexpr uint8_t TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS =
    1u;
  static constexpr uint8_t TM_FIX_LINE_INTRO_STATE_NAVI_RETURN =
    2u;
  static constexpr uint8_t TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI =
    3u;
  static constexpr uint8_t TM_FIX_LINE_INTRO_STATE_POI_ACTIONS =
    4u;
  static constexpr uint8_t TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS =
    5u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__FixLineIntroState
    std::shared_ptr<aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__FixLineIntroState
    std::shared_ptr<aimdk_msgs::msg::FixLineIntroState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixLineIntroState_ & other) const
  {
    if (this->set_task_id != other.set_task_id) {
      return false;
    }
    if (this->set_task_name != other.set_task_name) {
      return false;
    }
    if (this->task_name != other.task_name) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->map_name != other.map_name) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->rest_site_number != other.rest_site_number) {
      return false;
    }
    if (this->fix_line_intro_state != other.fix_line_intro_state) {
      return false;
    }
    if (this->cur_target_id != other.cur_target_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixLineIntroState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixLineIntroState_

// alias to use template instance with default allocator
using FixLineIntroState =
  aimdk_msgs::msg::FixLineIntroState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixLineIntroState_<ContainerAllocator>::TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixLineIntroState_<ContainerAllocator>::TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixLineIntroState_<ContainerAllocator>::TM_FIX_LINE_INTRO_STATE_NAVI_RETURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixLineIntroState_<ContainerAllocator>::TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixLineIntroState_<ContainerAllocator>::TM_FIX_LINE_INTRO_STATE_POI_ACTIONS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixLineIntroState_<ContainerAllocator>::TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__FIX_LINE_INTRO_STATE__STRUCT_HPP_
