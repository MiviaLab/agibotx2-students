// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from aimdk_msgs:msg/HdsEventRecord.idl
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
#include "aimdk_msgs/msg/detail/hds_event_record__struct.h"
#include "aimdk_msgs/msg/detail/hds_event_record__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool aimdk_msgs__msg__hds_event_record__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("aimdk_msgs.msg._hds_event_record.HdsEventRecord", full_classname_dest, 47) == 0);
  }
  aimdk_msgs__msg__HdsEventRecord * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // diag_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "diag_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->diag_code = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // alert_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "alert_code");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->alert_code, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // alert_location
    PyObject * field = PyObject_GetAttrString(_pymsg, "alert_location");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->alert_location, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // first_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "first_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->first_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // last_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "last_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->last_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // recover_timestamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "recover_timestamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->recover_timestamp = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // duration_ns
    PyObject * field = PyObject_GetAttrString(_pymsg, "duration_ns");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->duration_ns = PyLong_AsUnsignedLongLong(field);
    Py_DECREF(field);
  }
  {  // recovered
    PyObject * field = PyObject_GetAttrString(_pymsg, "recovered");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->recovered = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * aimdk_msgs__msg__hds_event_record__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HdsEventRecord */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("aimdk_msgs.msg._hds_event_record");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HdsEventRecord");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  aimdk_msgs__msg__HdsEventRecord * ros_message = (aimdk_msgs__msg__HdsEventRecord *)raw_ros_message;
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // diag_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->diag_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "diag_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alert_code
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->alert_code.data,
      strlen(ros_message->alert_code.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "alert_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // alert_location
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->alert_location.data,
      strlen(ros_message->alert_location.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "alert_location", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // first_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->first_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "first_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // last_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->last_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "last_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recover_timestamp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->recover_timestamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recover_timestamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // duration_ns
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLongLong(ros_message->duration_ns);
    {
      int rc = PyObject_SetAttrString(_pymessage, "duration_ns", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // recovered
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->recovered ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "recovered", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
