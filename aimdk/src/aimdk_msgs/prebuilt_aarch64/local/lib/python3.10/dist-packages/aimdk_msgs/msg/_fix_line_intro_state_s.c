// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/FixLineIntroState.idl
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
#include "aimdk_msgs/msg/detail/fix_line_intro_state__struct.h"
#include "aimdk_msgs/msg/detail/fix_line_intro_state__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__fix_line_intro_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("aimdk_msgs.msg._fix_line_intro_state.FixLineIntroState", full_classname_dest, 54) == 0);
  }
  aimdk_msgs__msg__FixLineIntroState * ros_message = _ros_message;
  {  // set_task_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_task_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->set_task_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // set_task_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "set_task_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->set_task_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // task_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "task_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->task_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
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
  {  // map_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "map_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->map_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
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
  {  // rest_site_number
    PyObject * field = PyObject_GetAttrString(_pymsg, "rest_site_number");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rest_site_number = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // fix_line_intro_state
    PyObject * field = PyObject_GetAttrString(_pymsg, "fix_line_intro_state");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->fix_line_intro_state = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_target_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_target_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_target_id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__fix_line_intro_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FixLineIntroState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._fix_line_intro_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FixLineIntroState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__FixLineIntroState * ros_message = (aimdk_msgs__msg__FixLineIntroState *)raw_ros_message;
  {  // set_task_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->set_task_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_task_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // set_task_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->set_task_name.data,
      strlen(ros_message->set_task_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "set_task_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // task_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->task_name.data,
      strlen(ros_message->task_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "task_name", field);
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
  {  // map_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->map_name.data,
      strlen(ros_message->map_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "map_name", field);
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
  {  // rest_site_number
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rest_site_number);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rest_site_number", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fix_line_intro_state
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->fix_line_intro_state);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fix_line_intro_state", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_target_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->cur_target_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_target_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
