// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/PncTaskResponse.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__STRUCT_HPP_

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
# define DEPRECATED__aimdk_msgs__msg__PncTaskResponse __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__PncTaskResponse __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PncTaskResponse_
{
  using Type = PncTaskResponse_<ContainerAllocator>;

  explicit PncTaskResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_type = 0;
      this->task_id = 0ull;
      this->map_id = 0ull;
      this->task_status = 0;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->reserve_info.begin(), this->reserve_info.end(), 0);
    }
  }

  explicit PncTaskResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    reserve_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_type = 0;
      this->task_id = 0ull;
      this->map_id = 0ull;
      this->task_status = 0;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->reserve_info.begin(), this->reserve_info.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _task_type_type =
    uint8_t;
  _task_type_type task_type;
  using _task_id_type =
    uint64_t;
  _task_id_type task_id;
  using _map_id_type =
    uint64_t;
  _map_id_type map_id;
  using _task_status_type =
    uint8_t;
  _task_status_type task_status;
  using _reserve_info_type =
    std::array<uint8_t, 64>;
  _reserve_info_type reserve_info;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__task_type(
    const uint8_t & _arg)
  {
    this->task_type = _arg;
    return *this;
  }
  Type & set__task_id(
    const uint64_t & _arg)
  {
    this->task_id = _arg;
    return *this;
  }
  Type & set__map_id(
    const uint64_t & _arg)
  {
    this->map_id = _arg;
    return *this;
  }
  Type & set__task_status(
    const uint8_t & _arg)
  {
    this->task_status = _arg;
    return *this;
  }
  Type & set__reserve_info(
    const std::array<uint8_t, 64> & _arg)
  {
    this->reserve_info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TASK_TYPE_NONE =
    0u;
  static constexpr uint8_t TASK_TYPE_PLANNING_NAVI_TO_GOAL =
    1u;
  static constexpr uint8_t TASK_TYPE_PLANNING_NAVI_TO_POSE_2D =
    2u;
  static constexpr uint8_t TASK_TYPE_LINEAR_NAVI_TO_RELATIVE =
    3u;
  static constexpr uint8_t TASK_TYPE_LINEAR_NAVI_TO_GOAL =
    4u;
  static constexpr uint8_t TASK_TYPE_LINEAR_NAVI_TO_POSE_2D =
    5u;
  static constexpr uint8_t TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL =
    6u;
  static constexpr uint8_t TASK_TYPE_DIRECT_NAVI_TO_RELATIVE =
    7u;
  static constexpr uint8_t TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD =
    8u;
  static constexpr uint8_t TASK_TYPE_SPIN_TURN =
    9u;
  static constexpr uint8_t TASK_TYPE_MOVE_FORWARD =
    10u;
  static constexpr uint8_t TASK_TYPE_PRECISE_NAVI_TO_GOAL =
    11u;
  static constexpr uint8_t TASK_TYPE_NO_MAP_FOLLOW =
    12u;
  static constexpr uint8_t TASK_TYPE_AUTO_EXPLORE =
    13u;
  static constexpr uint8_t TASK_TYPE_VOICE_CONTROL =
    14u;
  static constexpr uint8_t TASK_TYPE_RELATIVE_TARGET_TRACKING =
    15u;
  static constexpr uint8_t TASK_TYPE_PLANNING_NAVI_WITH_RL =
    16u;
  static constexpr uint8_t TASK_STATUS_UNKONW =
    0u;
  static constexpr uint8_t TASK_STATUS_RUNNING =
    1u;
  static constexpr uint8_t TASK_STATUS_FAILED =
    2u;
  static constexpr uint8_t TASK_STATUS_PAUSED =
    3u;
  static constexpr uint8_t TASK_STATUS_FINISHED =
    4u;
  static constexpr uint8_t TASK_STATUS_UNKNOW_BLOCK =
    10u;
  static constexpr uint8_t TASK_STATUS_SPIN_BLOCK =
    11u;
  static constexpr uint8_t TASK_STATUS_TRAJ_COLLISION_BLOCK =
    12u;
  static constexpr uint8_t TASK_STATUS_CONTOLLER_COLLISION_BLOCK =
    13u;
  static constexpr uint8_t TASK_STATUS_SPIN_BLOCK_WITH_HUMAN =
    14u;
  static constexpr uint8_t TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN =
    15u;
  static constexpr uint8_t TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN =
    16u;
  static constexpr uint8_t TASK_STATUS_LOCAL_OPTIMAL_FAILED =
    17u;
  static constexpr uint8_t TASK_STATUS_GOBAL_PATH_BLOCK =
    18u;
  static constexpr uint8_t TASK_STATUS_RECOVERY_GLOBAL =
    20u;
  static constexpr uint8_t TASK_STATUS_RECOVERY_LOCAL =
    21u;
  static constexpr uint8_t TASK_STATUS_RECOVERY_TIMEOUT =
    22u;
  static constexpr uint8_t TASK_STATUS_EXPLORE_TO_RECOVERY =
    23u;
  static constexpr uint8_t TASK_STATUS_EXPLORE_SUCCESS =
    24u;
  static constexpr uint8_t TASK_STATUS_EXPLORE_FAILED =
    25u;
  static constexpr uint8_t TASK_STATUS_GOAL_BLOCK_CONTINUE =
    30u;
  static constexpr uint8_t TASK_STATUS_GOAL_BLOCK_ABORT =
    31u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__PncTaskResponse
    std::shared_ptr<aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__PncTaskResponse
    std::shared_ptr<aimdk_msgs::msg::PncTaskResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PncTaskResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->task_status != other.task_status) {
      return false;
    }
    if (this->reserve_info != other.reserve_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const PncTaskResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PncTaskResponse_

// alias to use template instance with default allocator
using PncTaskResponse =
  aimdk_msgs::msg::PncTaskResponse_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_PLANNING_NAVI_TO_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_PLANNING_NAVI_TO_POSE_2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_LINEAR_NAVI_TO_RELATIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_LINEAR_NAVI_TO_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_LINEAR_NAVI_TO_POSE_2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_DIRECT_NAVI_TO_RELATIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_SPIN_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_MOVE_FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_PRECISE_NAVI_TO_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_NO_MAP_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_AUTO_EXPLORE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_VOICE_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_RELATIVE_TARGET_TRACKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_TYPE_PLANNING_NAVI_WITH_RL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_UNKONW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_RUNNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_PAUSED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_FINISHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_UNKNOW_BLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_SPIN_BLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_TRAJ_COLLISION_BLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_CONTOLLER_COLLISION_BLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_SPIN_BLOCK_WITH_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_LOCAL_OPTIMAL_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_GOBAL_PATH_BLOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_RECOVERY_GLOBAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_RECOVERY_LOCAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_RECOVERY_TIMEOUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_EXPLORE_TO_RECOVERY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_EXPLORE_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_EXPLORE_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_GOAL_BLOCK_CONTINUE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskResponse_<ContainerAllocator>::TASK_STATUS_GOAL_BLOCK_ABORT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PNC_TASK_RESPONSE__STRUCT_HPP_
