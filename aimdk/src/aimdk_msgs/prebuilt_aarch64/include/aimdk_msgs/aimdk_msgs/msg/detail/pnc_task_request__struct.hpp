// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/PncTaskRequest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__STRUCT_HPP_

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
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"
// Member 'reference_line'
// Member 'trajectory_pos'
#include "geometry_msgs/msg/detail/pose2_d__struct.hpp"
// Member 'trajectory_vel'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__PncTaskRequest __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__PncTaskRequest __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PncTaskRequest_
{
  using Type = PncTaskRequest_<ContainerAllocator>;

  explicit PncTaskRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    target_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_type = 0;
      this->task_request = 0;
      this->pnc_mode = 0;
      this->task_id = 0ull;
      this->map_id = 0ull;
      this->target_pose_radius = 0.0;
      this->max_forward_speed = 0.0f;
      this->play_timestamp = 0ull;
      this->time_duration = 0ull;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->reserve_info.begin(), this->reserve_info.end(), 0);
    }
  }

  explicit PncTaskRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    target_pose(_alloc, _init),
    reserve_info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_type = 0;
      this->task_request = 0;
      this->pnc_mode = 0;
      this->task_id = 0ull;
      this->map_id = 0ull;
      this->target_pose_radius = 0.0;
      this->max_forward_speed = 0.0f;
      this->play_timestamp = 0ull;
      this->time_duration = 0ull;
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
  using _task_request_type =
    uint8_t;
  _task_request_type task_request;
  using _pnc_mode_type =
    uint8_t;
  _pnc_mode_type pnc_mode;
  using _task_id_type =
    uint64_t;
  _task_id_type task_id;
  using _map_id_type =
    uint64_t;
  _map_id_type map_id;
  using _target_pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _target_pose_type target_pose;
  using _reference_line_type =
    std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>>;
  _reference_line_type reference_line;
  using _target_pose_radius_type =
    double;
  _target_pose_radius_type target_pose_radius;
  using _max_forward_speed_type =
    float;
  _max_forward_speed_type max_forward_speed;
  using _trajectory_pos_type =
    std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>>;
  _trajectory_pos_type trajectory_pos;
  using _trajectory_vel_type =
    std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Twist_<ContainerAllocator>>>;
  _trajectory_vel_type trajectory_vel;
  using _play_timestamp_type =
    uint64_t;
  _play_timestamp_type play_timestamp;
  using _time_duration_type =
    uint64_t;
  _time_duration_type time_duration;
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
  Type & set__task_request(
    const uint8_t & _arg)
  {
    this->task_request = _arg;
    return *this;
  }
  Type & set__pnc_mode(
    const uint8_t & _arg)
  {
    this->pnc_mode = _arg;
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
  Type & set__target_pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->target_pose = _arg;
    return *this;
  }
  Type & set__reference_line(
    const std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>> & _arg)
  {
    this->reference_line = _arg;
    return *this;
  }
  Type & set__target_pose_radius(
    const double & _arg)
  {
    this->target_pose_radius = _arg;
    return *this;
  }
  Type & set__max_forward_speed(
    const float & _arg)
  {
    this->max_forward_speed = _arg;
    return *this;
  }
  Type & set__trajectory_pos(
    const std::vector<geometry_msgs::msg::Pose2D_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose2D_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_pos = _arg;
    return *this;
  }
  Type & set__trajectory_vel(
    const std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Twist_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_vel = _arg;
    return *this;
  }
  Type & set__play_timestamp(
    const uint64_t & _arg)
  {
    this->play_timestamp = _arg;
    return *this;
  }
  Type & set__time_duration(
    const uint64_t & _arg)
  {
    this->time_duration = _arg;
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
  static constexpr uint8_t TASK_TYPE_SWARM_CONTROL_NAVI_MODE =
    17u;
  static constexpr uint8_t TASK_REQUEST_NONE =
    0u;
  static constexpr uint8_t TASK_REQUEST_START =
    1u;
  static constexpr uint8_t TASK_REQUEST_STOP =
    2u;
  static constexpr uint8_t TASK_REQUEST_PAUSE =
    3u;
  static constexpr uint8_t TASK_REQUEST_RESUME =
    4u;
  static constexpr uint8_t TASK_REQUEST_STATUS_INQUIRY =
    5u;
  static constexpr uint8_t NORMAL =
    0u;
  static constexpr uint8_t NO_PERCEPTION =
    1u;

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__PncTaskRequest
    std::shared_ptr<aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__PncTaskRequest
    std::shared_ptr<aimdk_msgs::msg::PncTaskRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PncTaskRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->task_type != other.task_type) {
      return false;
    }
    if (this->task_request != other.task_request) {
      return false;
    }
    if (this->pnc_mode != other.pnc_mode) {
      return false;
    }
    if (this->task_id != other.task_id) {
      return false;
    }
    if (this->map_id != other.map_id) {
      return false;
    }
    if (this->target_pose != other.target_pose) {
      return false;
    }
    if (this->reference_line != other.reference_line) {
      return false;
    }
    if (this->target_pose_radius != other.target_pose_radius) {
      return false;
    }
    if (this->max_forward_speed != other.max_forward_speed) {
      return false;
    }
    if (this->trajectory_pos != other.trajectory_pos) {
      return false;
    }
    if (this->trajectory_vel != other.trajectory_vel) {
      return false;
    }
    if (this->play_timestamp != other.play_timestamp) {
      return false;
    }
    if (this->time_duration != other.time_duration) {
      return false;
    }
    if (this->reserve_info != other.reserve_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const PncTaskRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PncTaskRequest_

// alias to use template instance with default allocator
using PncTaskRequest =
  aimdk_msgs::msg::PncTaskRequest_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_PLANNING_NAVI_TO_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_PLANNING_NAVI_TO_POSE_2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_LINEAR_NAVI_TO_RELATIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_LINEAR_NAVI_TO_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_LINEAR_NAVI_TO_POSE_2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_DIRECT_NAVI_TO_RELATIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_SPIN_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_MOVE_FORWARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_PRECISE_NAVI_TO_GOAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_NO_MAP_FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_AUTO_EXPLORE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_VOICE_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_RELATIVE_TARGET_TRACKING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_PLANNING_NAVI_WITH_RL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_TYPE_SWARM_CONTROL_NAVI_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_REQUEST_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_REQUEST_START;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_REQUEST_STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_REQUEST_PAUSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_REQUEST_RESUME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::TASK_REQUEST_STATUS_INQUIRY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PncTaskRequest_<ContainerAllocator>::NO_PERCEPTION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__STRUCT_HPP_
