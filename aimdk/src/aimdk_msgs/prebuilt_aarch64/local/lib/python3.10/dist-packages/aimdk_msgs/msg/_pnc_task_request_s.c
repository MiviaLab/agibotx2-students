// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/PncTaskRequest.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "aimdk_msgs/msg/detail/pnc_task_request__struct.h"
#include "aimdk_msgs/msg/detail/pnc_task_request__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "geometry_msgs/msg/detail/pose2_d__functions.h"
#include "geometry_msgs/msg/detail/twist__functions.h"
// end nested array functions include
bool aimdk_msgs__msg__message_header__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__message_header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose_stamped__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose_stamped__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose2_d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose2_d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__twist__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__twist__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__pnc_task_request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("aimdk_msgs.msg._pnc_task_request.PncTaskRequest", full_classname_dest, 47) == 0);
  }
  aimdk_msgs__msg__PncTaskRequest * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__message_header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // task_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // task_request
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_request");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_request = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pnc_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "pnc_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pnc_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // task_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->task_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // map_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->map_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // target_pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose_stamped__convert_from_py(field, &ros_message->target_pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reference_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_line");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'reference_line'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__Pose2D__Sequence__init(&(ros_message->reference_line), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Pose2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Pose2D * dest = ros_message->reference_line.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__pose2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // target_pose_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_pose_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_pose_radius = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_forward_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_forward_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_forward_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trajectory_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_pos");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trajectory_pos'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__Pose2D__Sequence__init(&(ros_message->trajectory_pos), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Pose2D__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Pose2D * dest = ros_message->trajectory_pos.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__pose2_d__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // trajectory_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "trajectory_vel");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'trajectory_vel'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!geometry_msgs__msg__Twist__Sequence__init(&(ros_message->trajectory_vel), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create geometry_msgs__msg__Twist__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    geometry_msgs__msg__Twist * dest = ros_message->trajectory_vel.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__twist__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // play_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "play_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->play_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // time_duration
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_duration");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_duration = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // reserve_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve_info");
    if (!field) {
      return false;
    }
    {
      // TODO(dirk-thomas) use a better way to check the type before casting
      assert(field->ob_type != NULL);
      assert(field->ob_type->tp_name != NULL);
      assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
      PyArrayObject * seq_field = (PyArrayObject *)field;
      Py_INCREF(seq_field);
      assert(PyArray_NDIM(seq_field) == 1);
      assert(PyArray_TYPE(seq_field) == NPY_UINT8);
      Py_ssize_t size = 64;
      uint8_t * dest = ros_message->reserve_info;
      for (Py_ssize_t i = 0; i < size; ++i) {
        uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
        memcpy(&dest[i], &tmp, sizeof(uint8_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__pnc_task_request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of PncTaskRequest */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._pnc_task_request");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "PncTaskRequest");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__PncTaskRequest * ros_message = (aimdk_msgs__msg__PncTaskRequest *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = aimdk_msgs__msg__message_header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->task_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_request
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->task_request);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_request", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pnc_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pnc_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pnc_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->task_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // map_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->map_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose_stamped__convert_to_py(&ros_message->target_pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_line
    PyObject * field = NULL;
    size_t size = ros_message->reference_line.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Pose2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->reference_line.data[i]);
      PyObject * pyitem = geometry_msgs__msg__pose2_d__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_pose_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_pose_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_pose_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_forward_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_forward_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_forward_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_pos
    PyObject * field = NULL;
    size_t size = ros_message->trajectory_pos.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Pose2D * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->trajectory_pos.data[i]);
      PyObject * pyitem = geometry_msgs__msg__pose2_d__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trajectory_vel
    PyObject * field = NULL;
    size_t size = ros_message->trajectory_vel.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Twist * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->trajectory_vel.data[i]);
      PyObject * pyitem = geometry_msgs__msg__twist__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "trajectory_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // play_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->play_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "play_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_duration
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->time_duration);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_duration", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve_info
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "reserve_info");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->reserve_info[0]);
    memcpy(dst, src, 64 * sizeof(uint8_t));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
