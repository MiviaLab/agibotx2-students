# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/PostProcSig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PostProcSig(type):
    """Metaclass of message 'PostProcSig'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aimdk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aimdk_msgs.msg.PostProcSig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__post_proc_sig
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__post_proc_sig
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__post_proc_sig
            cls._TYPE_SUPPORT = module.type_support_msg__msg__post_proc_sig
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__post_proc_sig

            from aimdk_msgs.msg import SigSet
            if SigSet.__class__._TYPE_SUPPORT is None:
                SigSet.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PostProcSig(metaclass=Metaclass_PostProcSig):
    """Message class 'PostProcSig'."""

    __slots__ = [
        '_timestamp',
        '_diag_code',
        '_sig_set',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'diag_code': 'uint64',
        'sig_set': 'aimdk_msgs/SigSet',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'SigSet'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.diag_code = kwargs.get('diag_code', int())
        from aimdk_msgs.msg import SigSet
        self.sig_set = kwargs.get('sig_set', SigSet())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.diag_code != other.diag_code:
            return False
        if self.sig_set != other.sig_set:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def diag_code(self):
        """Message field 'diag_code'."""
        return self._diag_code

    @diag_code.setter
    def diag_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'diag_code' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'diag_code' field must be an unsigned integer in [0, 18446744073709551615]"
        self._diag_code = value

    @builtins.property
    def sig_set(self):
        """Message field 'sig_set'."""
        return self._sig_set

    @sig_set.setter
    def sig_set(self, value):
        if __debug__:
            from aimdk_msgs.msg import SigSet
            assert \
                isinstance(value, SigSet), \
                "The 'sig_set' field must be a sub message of type 'SigSet'"
        self._sig_set = value
