// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/SigSet.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__SIG_SET__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__SIG_SET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__SigSet __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__SigSet __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SigSet_
{
  using Type = SigSet_<ContainerAllocator>;

  explicit SigSet_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_sig = 0l;
      this->motion_sig = 0;
      this->sound_sig = 0;
      this->led_sig = 0;
      this->facial_sig = 0;
      this->reserve = 0ul;
      this->funcdisable_sig = 0ull;
    }
  }

  explicit SigSet_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_sig = 0l;
      this->motion_sig = 0;
      this->sound_sig = 0;
      this->led_sig = 0;
      this->facial_sig = 0;
      this->reserve = 0ul;
      this->funcdisable_sig = 0ull;
    }
  }

  // field types and members
  using _robot_sig_type =
    int32_t;
  _robot_sig_type robot_sig;
  using _motion_sig_type =
    uint8_t;
  _motion_sig_type motion_sig;
  using _sound_sig_type =
    uint8_t;
  _sound_sig_type sound_sig;
  using _led_sig_type =
    uint8_t;
  _led_sig_type led_sig;
  using _facial_sig_type =
    uint8_t;
  _facial_sig_type facial_sig;
  using _reserve_type =
    uint32_t;
  _reserve_type reserve;
  using _funcdisable_sig_type =
    uint64_t;
  _funcdisable_sig_type funcdisable_sig;

  // setters for named parameter idiom
  Type & set__robot_sig(
    const int32_t & _arg)
  {
    this->robot_sig = _arg;
    return *this;
  }
  Type & set__motion_sig(
    const uint8_t & _arg)
  {
    this->motion_sig = _arg;
    return *this;
  }
  Type & set__sound_sig(
    const uint8_t & _arg)
  {
    this->sound_sig = _arg;
    return *this;
  }
  Type & set__led_sig(
    const uint8_t & _arg)
  {
    this->led_sig = _arg;
    return *this;
  }
  Type & set__facial_sig(
    const uint8_t & _arg)
  {
    this->facial_sig = _arg;
    return *this;
  }
  Type & set__reserve(
    const uint32_t & _arg)
  {
    this->reserve = _arg;
    return *this;
  }
  Type & set__funcdisable_sig(
    const uint64_t & _arg)
  {
    this->funcdisable_sig = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::SigSet_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::SigSet_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::SigSet_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::SigSet_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::SigSet_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::SigSet_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::SigSet_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::SigSet_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::SigSet_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::SigSet_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__SigSet
    std::shared_ptr<aimdk_msgs::msg::SigSet_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__SigSet
    std::shared_ptr<aimdk_msgs::msg::SigSet_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SigSet_ & other) const
  {
    if (this->robot_sig != other.robot_sig) {
      return false;
    }
    if (this->motion_sig != other.motion_sig) {
      return false;
    }
    if (this->sound_sig != other.sound_sig) {
      return false;
    }
    if (this->led_sig != other.led_sig) {
      return false;
    }
    if (this->facial_sig != other.facial_sig) {
      return false;
    }
    if (this->reserve != other.reserve) {
      return false;
    }
    if (this->funcdisable_sig != other.funcdisable_sig) {
      return false;
    }
    return true;
  }
  bool operator!=(const SigSet_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SigSet_

// alias to use template instance with default allocator
using SigSet =
  aimdk_msgs::msg::SigSet_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__SIG_SET__STRUCT_HPP_
