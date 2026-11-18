// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/PostProcSig.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'sig_set'
#include "aimdk_msgs/msg/detail/sig_set__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__PostProcSig __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__PostProcSig __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostProcSig_
{
  using Type = PostProcSig_<ContainerAllocator>;

  explicit PostProcSig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sig_set(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->diag_code = 0ull;
    }
  }

  explicit PostProcSig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : sig_set(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->diag_code = 0ull;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _diag_code_type =
    uint64_t;
  _diag_code_type diag_code;
  using _sig_set_type =
    aimdk_msgs::msg::SigSet_<ContainerAllocator>;
  _sig_set_type sig_set;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__diag_code(
    const uint64_t & _arg)
  {
    this->diag_code = _arg;
    return *this;
  }
  Type & set__sig_set(
    const aimdk_msgs::msg::SigSet_<ContainerAllocator> & _arg)
  {
    this->sig_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::PostProcSig_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::PostProcSig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PostProcSig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PostProcSig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PostProcSig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PostProcSig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PostProcSig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PostProcSig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PostProcSig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PostProcSig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__PostProcSig
    std::shared_ptr<aimdk_msgs::msg::PostProcSig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__PostProcSig
    std::shared_ptr<aimdk_msgs::msg::PostProcSig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostProcSig_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->diag_code != other.diag_code) {
      return false;
    }
    if (this->sig_set != other.sig_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostProcSig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostProcSig_

// alias to use template instance with default allocator
using PostProcSig =
  aimdk_msgs::msg::PostProcSig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG__STRUCT_HPP_
