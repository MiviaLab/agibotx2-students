// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from aimdk_msgs:msg/PostProcSigArray.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG_ARRAY__STRUCT_HPP_
#define AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG_ARRAY__STRUCT_HPP_

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
// Member 'post_proc_sig'
#include "aimdk_msgs/msg/detail/post_proc_sig__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__aimdk_msgs__msg__PostProcSigArray __attribute__((deprecated))
#else
# define DEPRECATED__aimdk_msgs__msg__PostProcSigArray __declspec(deprecated)
#endif

namespace aimdk_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PostProcSigArray_
{
  using Type = PostProcSigArray_<ContainerAllocator>;

  explicit PostProcSigArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit PostProcSigArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    aimdk_msgs::msg::MessageHeader_<ContainerAllocator>;
  _header_type header;
  using _post_proc_sig_type =
    std::vector<aimdk_msgs::msg::PostProcSig_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::PostProcSig_<ContainerAllocator>>>;
  _post_proc_sig_type post_proc_sig;

  // setters for named parameter idiom
  Type & set__header(
    const aimdk_msgs::msg::MessageHeader_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__post_proc_sig(
    const std::vector<aimdk_msgs::msg::PostProcSig_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<aimdk_msgs::msg::PostProcSig_<ContainerAllocator>>> & _arg)
  {
    this->post_proc_sig = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__aimdk_msgs__msg__PostProcSigArray
    std::shared_ptr<aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__aimdk_msgs__msg__PostProcSigArray
    std::shared_ptr<aimdk_msgs::msg::PostProcSigArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PostProcSigArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->post_proc_sig != other.post_proc_sig) {
      return false;
    }
    return true;
  }
  bool operator!=(const PostProcSigArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PostProcSigArray_

// alias to use template instance with default allocator
using PostProcSigArray =
  aimdk_msgs::msg::PostProcSigArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace aimdk_msgs

#endif  // AIMDK_MSGS__MSG__DETAIL__POST_PROC_SIG_ARRAY__STRUCT_HPP_
