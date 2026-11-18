# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McServoStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McServoStatus(type):
    """Metaclass of message 'McServoStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BEFORE_LIMIT': 0,
        'LOWER_LIMIT': 1,
        'UPPER_LIMIT': 2,
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
                'aimdk_msgs.msg.McServoStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_servo_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_servo_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_servo_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_servo_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_servo_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BEFORE_LIMIT': cls.__constants['BEFORE_LIMIT'],
            'LOWER_LIMIT': cls.__constants['LOWER_LIMIT'],
            'UPPER_LIMIT': cls.__constants['UPPER_LIMIT'],
        }

    @property
    def BEFORE_LIMIT(self):
        """Message constant 'BEFORE_LIMIT'."""
        return Metaclass_McServoStatus.__constants['BEFORE_LIMIT']

    @property
    def LOWER_LIMIT(self):
        """Message constant 'LOWER_LIMIT'."""
        return Metaclass_McServoStatus.__constants['LOWER_LIMIT']

    @property
    def UPPER_LIMIT(self):
        """Message constant 'UPPER_LIMIT'."""
        return Metaclass_McServoStatus.__constants['UPPER_LIMIT']


class McServoStatus(metaclass=Metaclass_McServoStatus):
    """
    Message class 'McServoStatus'.

    Constants:
      BEFORE_LIMIT
      LOWER_LIMIT
      UPPER_LIMIT
    """

    __slots__ = [
        '_squat_enable',
        '_squat_offset',
        '_squat_limit',
        '_head_yaw_offset',
        '_head_pitch_offset',
        '_waist_yaw_offset',
        '_waist_pitch_offset',
        '_waist_roll_offset',
    ]

    _fields_and_field_types = {
        'squat_enable': 'boolean',
        'squat_offset': 'double',
        'squat_limit': 'uint32',
        'head_yaw_offset': 'double',
        'head_pitch_offset': 'double',
        'waist_yaw_offset': 'double',
        'waist_pitch_offset': 'double',
        'waist_roll_offset': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.squat_enable = kwargs.get('squat_enable', bool())
        self.squat_offset = kwargs.get('squat_offset', float())
        self.squat_limit = kwargs.get('squat_limit', int())
        self.head_yaw_offset = kwargs.get('head_yaw_offset', float())
        self.head_pitch_offset = kwargs.get('head_pitch_offset', float())
        self.waist_yaw_offset = kwargs.get('waist_yaw_offset', float())
        self.waist_pitch_offset = kwargs.get('waist_pitch_offset', float())
        self.waist_roll_offset = kwargs.get('waist_roll_offset', float())

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
        if self.squat_enable != other.squat_enable:
            return False
        if self.squat_offset != other.squat_offset:
            return False
        if self.squat_limit != other.squat_limit:
            return False
        if self.head_yaw_offset != other.head_yaw_offset:
            return False
        if self.head_pitch_offset != other.head_pitch_offset:
            return False
        if self.waist_yaw_offset != other.waist_yaw_offset:
            return False
        if self.waist_pitch_offset != other.waist_pitch_offset:
            return False
        if self.waist_roll_offset != other.waist_roll_offset:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def squat_enable(self):
        """Message field 'squat_enable'."""
        return self._squat_enable

    @squat_enable.setter
    def squat_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'squat_enable' field must be of type 'bool'"
        self._squat_enable = value

    @builtins.property
    def squat_offset(self):
        """Message field 'squat_offset'."""
        return self._squat_offset

    @squat_offset.setter
    def squat_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'squat_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'squat_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._squat_offset = value

    @builtins.property
    def squat_limit(self):
        """Message field 'squat_limit'."""
        return self._squat_limit

    @squat_limit.setter
    def squat_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'squat_limit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'squat_limit' field must be an unsigned integer in [0, 4294967295]"
        self._squat_limit = value

    @builtins.property
    def head_yaw_offset(self):
        """Message field 'head_yaw_offset'."""
        return self._head_yaw_offset

    @head_yaw_offset.setter
    def head_yaw_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'head_yaw_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'head_yaw_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._head_yaw_offset = value

    @builtins.property
    def head_pitch_offset(self):
        """Message field 'head_pitch_offset'."""
        return self._head_pitch_offset

    @head_pitch_offset.setter
    def head_pitch_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'head_pitch_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'head_pitch_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._head_pitch_offset = value

    @builtins.property
    def waist_yaw_offset(self):
        """Message field 'waist_yaw_offset'."""
        return self._waist_yaw_offset

    @waist_yaw_offset.setter
    def waist_yaw_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_yaw_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'waist_yaw_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._waist_yaw_offset = value

    @builtins.property
    def waist_pitch_offset(self):
        """Message field 'waist_pitch_offset'."""
        return self._waist_pitch_offset

    @waist_pitch_offset.setter
    def waist_pitch_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_pitch_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'waist_pitch_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._waist_pitch_offset = value

    @builtins.property
    def waist_roll_offset(self):
        """Message field 'waist_roll_offset'."""
        return self._waist_roll_offset

    @waist_roll_offset.setter
    def waist_roll_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waist_roll_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'waist_roll_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._waist_roll_offset = value
