// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/McLocomotionSpeedStatus.idl
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
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__struct.h"
#include "aimdk_msgs/msg/detail/mc_locomotion_speed_status__functions.h"

bool aimdk_msgs__msg__mc_locomotion_speed_mode__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_locomotion_speed_mode__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_to_py(void * raw_ros_message);
bool aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__mc_locomotion_speed_status__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("aimdk_msgs.msg._mc_locomotion_speed_status.McLocomotionSpeedStatus", full_classname_dest, 66) == 0);
  }
  aimdk_msgs__msg__McLocomotionSpeedStatus * ros_message = _ros_message;
  {  // speed_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "speed_mode");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_locomotion_speed_mode__convert_from_py(field, &ros_message->speed_mode)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // forward_bounds
    PyObject * field = PyObject_GetAttrString(_pymsg, "forward_bounds");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_from_py(field, &ros_message->forward_bounds)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // lateral_bounds
    PyObject * field = PyObject_GetAttrString(_pymsg, "lateral_bounds");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_from_py(field, &ros_message->lateral_bounds)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // angular_bounds
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_bounds");
    if (!field) {
      return false;
    }
    if (!aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_from_py(field, &ros_message->angular_bounds)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__mc_locomotion_speed_status__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of McLocomotionSpeedStatus */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._mc_locomotion_speed_status");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "McLocomotionSpeedStatus");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__McLocomotionSpeedStatus * ros_message = (aimdk_msgs__msg__McLocomotionSpeedStatus *)raw_ros_message;
  {  // speed_mode
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_locomotion_speed_mode__convert_to_py(&ros_message->speed_mode);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speed_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forward_bounds
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_to_py(&ros_message->forward_bounds);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "forward_bounds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lateral_bounds
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_to_py(&ros_message->lateral_bounds);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lateral_bounds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_bounds
    PyObject * field = NULL;
    field = aimdk_msgs__msg__mc_locomotion_speed_bounds__convert_to_py(&ros_message->angular_bounds);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_bounds", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
