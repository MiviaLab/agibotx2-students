# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/SigSet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SigSet(type):
    """Metaclass of message 'SigSet'."""

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
                'aimdk_msgs.msg.SigSet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sig_set
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sig_set
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sig_set
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sig_set
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sig_set

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SigSet(metaclass=Metaclass_SigSet):
    """Message class 'SigSet'."""

    __slots__ = [
        '_robot_sig',
        '_motion_sig',
        '_sound_sig',
        '_led_sig',
        '_facial_sig',
        '_reserve',
        '_funcdisable_sig',
    ]

    _fields_and_field_types = {
        'robot_sig': 'int32',
        'motion_sig': 'uint8',
        'sound_sig': 'uint8',
        'led_sig': 'uint8',
        'facial_sig': 'uint8',
        'reserve': 'uint32',
        'funcdisable_sig': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_sig = kwargs.get('robot_sig', int())
        self.motion_sig = kwargs.get('motion_sig', int())
        self.sound_sig = kwargs.get('sound_sig', int())
        self.led_sig = kwargs.get('led_sig', int())
        self.facial_sig = kwargs.get('facial_sig', int())
        self.reserve = kwargs.get('reserve', int())
        self.funcdisable_sig = kwargs.get('funcdisable_sig', int())

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
        if self.robot_sig != other.robot_sig:
            return False
        if self.motion_sig != other.motion_sig:
            return False
        if self.sound_sig != other.sound_sig:
            return False
        if self.led_sig != other.led_sig:
            return False
        if self.facial_sig != other.facial_sig:
            return False
        if self.reserve != other.reserve:
            return False
        if self.funcdisable_sig != other.funcdisable_sig:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_sig(self):
        """Message field 'robot_sig'."""
        return self._robot_sig

    @robot_sig.setter
    def robot_sig(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robot_sig' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'robot_sig' field must be an integer in [-2147483648, 2147483647]"
        self._robot_sig = value

    @builtins.property
    def motion_sig(self):
        """Message field 'motion_sig'."""
        return self._motion_sig

    @motion_sig.setter
    def motion_sig(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_sig' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_sig' field must be an unsigned integer in [0, 255]"
        self._motion_sig = value

    @builtins.property
    def sound_sig(self):
        """Message field 'sound_sig'."""
        return self._sound_sig

    @sound_sig.setter
    def sound_sig(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sound_sig' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sound_sig' field must be an unsigned integer in [0, 255]"
        self._sound_sig = value

    @builtins.property
    def led_sig(self):
        """Message field 'led_sig'."""
        return self._led_sig

    @led_sig.setter
    def led_sig(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_sig' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led_sig' field must be an unsigned integer in [0, 255]"
        self._led_sig = value

    @builtins.property
    def facial_sig(self):
        """Message field 'facial_sig'."""
        return self._facial_sig

    @facial_sig.setter
    def facial_sig(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'facial_sig' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'facial_sig' field must be an unsigned integer in [0, 255]"
        self._facial_sig = value

    @builtins.property
    def reserve(self):
        """Message field 'reserve'."""
        return self._reserve

    @reserve.setter
    def reserve(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserve' field must be an unsigned integer in [0, 4294967295]"
        self._reserve = value

    @builtins.property
    def funcdisable_sig(self):
        """Message field 'funcdisable_sig'."""
        return self._funcdisable_sig

    @funcdisable_sig.setter
    def funcdisable_sig(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'funcdisable_sig' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'funcdisable_sig' field must be an unsigned integer in [0, 18446744073709551615]"
        self._funcdisable_sig = value
