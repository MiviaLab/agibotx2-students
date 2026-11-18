// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aimdk_msgs:msg/PncTaskRequest.idl
// generated code does not contain a copyright notice

#ifndef AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__TRAITS_HPP_
#define AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aimdk_msgs/msg/detail/pnc_task_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "aimdk_msgs/msg/detail/message_header__traits.hpp"
// Member 'target_pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"
// Member 'reference_line'
// Member 'trajectory_pos'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"
// Member 'trajectory_vel'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace aimdk_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PncTaskRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: task_type
  {
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << ", ";
  }

  // member: task_request
  {
    out << "task_request: ";
    rosidl_generator_traits::value_to_yaml(msg.task_request, out);
    out << ", ";
  }

  // member: pnc_mode
  {
    out << "pnc_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.pnc_mode, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: map_id
  {
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << ", ";
  }

  // member: target_pose
  {
    out << "target_pose: ";
    to_flow_style_yaml(msg.target_pose, out);
    out << ", ";
  }

  // member: reference_line
  {
    if (msg.reference_line.size() == 0) {
      out << "reference_line: []";
    } else {
      out << "reference_line: [";
      size_t pending_items = msg.reference_line.size();
      for (auto item : msg.reference_line) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_pose_radius
  {
    out << "target_pose_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pose_radius, out);
    out << ", ";
  }

  // member: max_forward_speed
  {
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << ", ";
  }

  // member: trajectory_pos
  {
    if (msg.trajectory_pos.size() == 0) {
      out << "trajectory_pos: []";
    } else {
      out << "trajectory_pos: [";
      size_t pending_items = msg.trajectory_pos.size();
      for (auto item : msg.trajectory_pos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trajectory_vel
  {
    if (msg.trajectory_vel.size() == 0) {
      out << "trajectory_vel: []";
    } else {
      out << "trajectory_vel: [";
      size_t pending_items = msg.trajectory_vel.size();
      for (auto item : msg.trajectory_vel) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: play_timestamp
  {
    out << "play_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.play_timestamp, out);
    out << ", ";
  }

  // member: time_duration
  {
    out << "time_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.time_duration, out);
    out << ", ";
  }

  // member: reserve_info
  {
    if (msg.reserve_info.size() == 0) {
      out << "reserve_info: []";
    } else {
      out << "reserve_info: [";
      size_t pending_items = msg.reserve_info.size();
      for (auto item : msg.reserve_info) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PncTaskRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_type: ";
    rosidl_generator_traits::value_to_yaml(msg.task_type, out);
    out << "\n";
  }

  // member: task_request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_request: ";
    rosidl_generator_traits::value_to_yaml(msg.task_request, out);
    out << "\n";
  }

  // member: pnc_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pnc_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.pnc_mode, out);
    out << "\n";
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: map_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_id: ";
    rosidl_generator_traits::value_to_yaml(msg.map_id, out);
    out << "\n";
  }

  // member: target_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose:\n";
    to_block_style_yaml(msg.target_pose, out, indentation + 2);
  }

  // member: reference_line
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reference_line.size() == 0) {
      out << "reference_line: []\n";
    } else {
      out << "reference_line:\n";
      for (auto item : msg.reference_line) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: target_pose_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pose_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pose_radius, out);
    out << "\n";
  }

  // member: max_forward_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_forward_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_forward_speed, out);
    out << "\n";
  }

  // member: trajectory_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_pos.size() == 0) {
      out << "trajectory_pos: []\n";
    } else {
      out << "trajectory_pos:\n";
      for (auto item : msg.trajectory_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: trajectory_vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_vel.size() == 0) {
      out << "trajectory_vel: []\n";
    } else {
      out << "trajectory_vel:\n";
      for (auto item : msg.trajectory_vel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: play_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "play_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.play_timestamp, out);
    out << "\n";
  }

  // member: time_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.time_duration, out);
    out << "\n";
  }

  // member: reserve_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reserve_info.size() == 0) {
      out << "reserve_info: []\n";
    } else {
      out << "reserve_info:\n";
      for (auto item : msg.reserve_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PncTaskRequest & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace aimdk_msgs

namespace rosidl_generator_traits
{

[[deprecated("use aimdk_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aimdk_msgs::msg::PncTaskRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  aimdk_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aimdk_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const aimdk_msgs::msg::PncTaskRequest & msg)
{
  return aimdk_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aimdk_msgs::msg::PncTaskRequest>()
{
  return "aimdk_msgs::msg::PncTaskRequest";
}

template<>
inline const char * name<aimdk_msgs::msg::PncTaskRequest>()
{
  return "aimdk_msgs/msg/PncTaskRequest";
}

template<>
struct has_fixed_size<aimdk_msgs::msg::PncTaskRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<aimdk_msgs::msg::PncTaskRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<aimdk_msgs::msg::PncTaskRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AIMDK_MSGS__MSG__DETAIL__PNC_TASK_REQUEST__TRAITS_HPP_
