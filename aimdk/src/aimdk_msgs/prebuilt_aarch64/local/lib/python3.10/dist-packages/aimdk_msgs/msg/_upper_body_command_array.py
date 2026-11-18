# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/UpperBodyCommandArray.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'hand_pos'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'head_pos'
# Member 'arm_pos'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UpperBodyCommandArray(type):
    """Metaclass of message 'UpperBodyCommandArray'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HAND_CLAW_OPEN_CLOSE': 1,
        'HAND_DEXTEROUS_JOINT': 2,
        'HAND_DEXTEROUS_GESTURE': 3,
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
                'aimdk_msgs.msg.UpperBodyCommandArray')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__upper_body_command_array
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__upper_body_command_array
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__upper_body_command_array
            cls._TYPE_SUPPORT = module.type_support_msg__msg__upper_body_command_array
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__upper_body_command_array

            from aimdk_msgs.msg import MessageHeader
            if MessageHeader.__class__._TYPE_SUPPORT is None:
                MessageHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HAND_CLAW_OPEN_CLOSE': cls.__constants['HAND_CLAW_OPEN_CLOSE'],
            'HAND_DEXTEROUS_JOINT': cls.__constants['HAND_DEXTEROUS_JOINT'],
            'HAND_DEXTEROUS_GESTURE': cls.__constants['HAND_DEXTEROUS_GESTURE'],
        }

    @property
    def HAND_CLAW_OPEN_CLOSE(self):
        """Message constant 'HAND_CLAW_OPEN_CLOSE'."""
        return Metaclass_UpperBodyCommandArray.__constants['HAND_CLAW_OPEN_CLOSE']

    @property
    def HAND_DEXTEROUS_JOINT(self):
        """Message constant 'HAND_DEXTEROUS_JOINT'."""
        return Metaclass_UpperBodyCommandArray.__constants['HAND_DEXTEROUS_JOINT']

    @property
    def HAND_DEXTEROUS_GESTURE(self):
        """Message constant 'HAND_DEXTEROUS_GESTURE'."""
        return Metaclass_UpperBodyCommandArray.__constants['HAND_DEXTEROUS_GESTURE']


class UpperBodyCommandArray(metaclass=Metaclass_UpperBodyCommandArray):
    """
    Message class 'UpperBodyCommandArray'.

    Constants:
      HAND_CLAW_OPEN_CLOSE
      HAND_DEXTEROUS_JOINT
      HAND_DEXTEROUS_GESTURE
    """

    __slots__ = [
        '_header',
        '_source',
        '_hand_sub_mode',
        '_head_pos',
        '_arm_pos',
        '_hand_pos',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'source': 'string',
        'hand_sub_mode': 'uint8',
        'head_pos': 'double[2]',
        'arm_pos': 'double[14]',
        'hand_pos': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 14),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        self.source = kwargs.get('source', str())
        self.hand_sub_mode = kwargs.get('hand_sub_mode', int())
        if 'head_pos' not in kwargs:
            self.head_pos = numpy.zeros(2, dtype=numpy.float64)
        else:
            self.head_pos = numpy.array(kwargs.get('head_pos'), dtype=numpy.float64)
            assert self.head_pos.shape == (2, )
        if 'arm_pos' not in kwargs:
            self.arm_pos = numpy.zeros(14, dtype=numpy.float64)
        else:
            self.arm_pos = numpy.array(kwargs.get('arm_pos'), dtype=numpy.float64)
            assert self.arm_pos.shape == (14, )
        self.hand_pos = array.array('d', kwargs.get('hand_pos', []))

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
        if self.header != other.header:
            return False
        if self.source != other.source:
            return False
        if self.hand_sub_mode != other.hand_sub_mode:
            return False
        if any(self.head_pos != other.head_pos):
            return False
        if any(self.arm_pos != other.arm_pos):
            return False
        if self.hand_pos != other.hand_pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from aimdk_msgs.msg import MessageHeader
            assert \
                isinstance(value, MessageHeader), \
                "The 'header' field must be a sub message of type 'MessageHeader'"
        self._header = value

    @builtins.property
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'source' field must be of type 'str'"
        self._source = value

    @builtins.property
    def hand_sub_mode(self):
        """Message field 'hand_sub_mode'."""
        return self._hand_sub_mode

    @hand_sub_mode.setter
    def hand_sub_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hand_sub_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hand_sub_mode' field must be an unsigned integer in [0, 255]"
        self._hand_sub_mode = value

    @builtins.property
    def head_pos(self):
        """Message field 'head_pos'."""
        return self._head_pos

    @head_pos.setter
    def head_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'head_pos' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 2, \
                "The 'head_pos' numpy.ndarray() must have a size of 2"
            self._head_pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'head_pos' field must be a set or sequence with length 2 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._head_pos = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def arm_pos(self):
        """Message field 'arm_pos'."""
        return self._arm_pos

    @arm_pos.setter
    def arm_pos(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'arm_pos' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 14, \
                "The 'arm_pos' numpy.ndarray() must have a size of 14"
            self._arm_pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 14 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'arm_pos' field must be a set or sequence with length 14 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._arm_pos = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def hand_pos(self):
        """Message field 'hand_pos'."""
        return self._hand_pos

    @hand_pos.setter
    def hand_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'hand_pos' array.array() must have the type code of 'd'"
            self._hand_pos = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'hand_pos' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._hand_pos = array.array('d', value)
