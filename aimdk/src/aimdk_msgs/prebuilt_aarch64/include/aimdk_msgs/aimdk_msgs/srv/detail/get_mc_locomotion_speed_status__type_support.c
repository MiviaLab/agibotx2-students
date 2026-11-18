// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from aimdk_msgs:srv/GetMcLocomotionSpeedStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c.h"
#include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__functions.h"
#include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__struct.h"


// Include directives for member types
// Member `request`
#include "aimdk_msgs/msg/common_request.h"
// Member `request`
#include "aimdk_msgs/msg/detail/common_request__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__init(message_memory);
}

void aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_fini_function(void * message_memory)
{
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_member_array[1] = {
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_members = {
  "aimdk_msgs__srv",  // message namespace
  "GetMcLocomotionSpeedStatus_Request",  // message name
  1,  // number of fields
  sizeof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request),
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_member_array,  // message members
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_type_support_handle = {
  0,
  &aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, GetMcLocomotionSpeedStatus_Request)() {
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, CommonRequest)();
  if (!aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Request__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__functions.h"
// already included above
// #include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__struct.h"


// Include directives for member types
// Member `header`
#include "aimdk_msgs/msg/response_header.h"
// Member `header`
#include "aimdk_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `current_speed_status`
// Member `none_speed_status`
// Member `low_speed_status`
// Member `medium_speed_status`
// Member `high_speed_status`
// Member `step_speed_status`
#include "aimdk_msgs/msg/mc_locomotion_speed_status.h"
// Member `current_speed_status`
// Member `none_speed_status`
// Member `low_speed_status`
// Member `medium_speed_status`
// Member `high_speed_status`
// Member `step_speed_status`
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__init(message_memory);
}

void aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_fini_function(void * message_memory)
{
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_speed_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response, current_speed_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "none_speed_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response, none_speed_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "low_speed_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response, low_speed_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "medium_speed_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response, medium_speed_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "high_speed_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response, high_speed_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "step_speed_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response, step_speed_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_members = {
  "aimdk_msgs__srv",  // message namespace
  "GetMcLocomotionSpeedStatus_Response",  // message name
  7,  // number of fields
  sizeof(aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response),
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array,  // message members
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_type_support_handle = {
  0,
  &aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, GetMcLocomotionSpeedStatus_Response)() {
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, ResponseHeader)();
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedStatus)();
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedStatus)();
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedStatus)();
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedStatus)();
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedStatus)();
  aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, msg, McLocomotionSpeedStatus)();
  if (!aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &aimdk_msgs__srv__GetMcLocomotionSpeedStatus_Response__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "aimdk_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "aimdk_msgs/srv/detail/get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_service_members = {
  "aimdk_msgs__srv",  // service namespace
  "GetMcLocomotionSpeedStatus",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Request_message_type_support_handle,
  NULL  // response message
  // aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_Response_message_type_support_handle
};

static rosidl_service_type_support_t aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_service_type_support_handle = {
  0,
  &aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, GetMcLocomotionSpeedStatus_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, GetMcLocomotionSpeedStatus_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_aimdk_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, GetMcLocomotionSpeedStatus)() {
  if (!aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_service_type_support_handle.typesupport_identifier) {
    aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, GetMcLocomotionSpeedStatus_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, aimdk_msgs, srv, GetMcLocomotionSpeedStatus_Response)()->data;
  }

  return &aimdk_msgs__srv__detail__get_mc_locomotion_speed_status__rosidl_typesupport_introspection_c__GetMcLocomotionSpeedStatus_service_type_support_handle;
}
