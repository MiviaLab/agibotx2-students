// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/SigSet.idl
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
#include "aimdk_msgs/msg/detail/sig_set__struct.h"
#include "aimdk_msgs/msg/detail/sig_set__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__sig_set__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[31];
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
    assert(strncmp("aimdk_msgs.msg._sig_set.SigSet", full_classname_dest, 30) == 0);
  }
  aimdk_msgs__msg__SigSet * ros_message = _ros_message;
  {  // robot_sig
    PyObject * field = PyObject_GetAttrString(_pymsg, "robot_sig");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robot_sig = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // motion_sig
    PyObject * field = PyObject_GetAttrString(_pymsg, "motion_sig");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->motion_sig = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sound_sig
    PyObject * field = PyObject_GetAttrString(_pymsg, "sound_sig");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sound_sig = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // led_sig
    PyObject * field = PyObject_GetAttrString(_pymsg, "led_sig");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->led_sig = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // facial_sig
    PyObject * field = PyObject_GetAttrString(_pymsg, "facial_sig");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->facial_sig = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // reserve
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // funcdisable_sig
    PyObject * field = PyObject_GetAttrString(_pymsg, "funcdisable_sig");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->funcdisable_sig = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__sig_set__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of SigSet */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._sig_set");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "SigSet");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__SigSet * ros_message = (aimdk_msgs__msg__SigSet *)raw_ros_message;
  {  // robot_sig
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->robot_sig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robot_sig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motion_sig
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->motion_sig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "motion_sig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sound_sig
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sound_sig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sound_sig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led_sig
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->led_sig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "led_sig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // facial_sig
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->facial_sig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "facial_sig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reserve
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // funcdisable_sig
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->funcdisable_sig);
    {
      int rc = PyObject_SetAttrString(_pymessage, "funcdisable_sig", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
