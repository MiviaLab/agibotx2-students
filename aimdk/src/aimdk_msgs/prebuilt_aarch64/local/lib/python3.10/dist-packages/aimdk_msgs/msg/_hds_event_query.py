# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/HdsEventQuery.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'diag_codes'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HdsEventQuery(type):
    """Metaclass of message 'HdsEventQuery'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_ALL': 0,
        'STATE_ACTIVE': 1,
        'STATE_RECOVERED': 2,
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
                'aimdk_msgs.msg.HdsEventQuery')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hds_event_query
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hds_event_query
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hds_event_query
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hds_event_query
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hds_event_query

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_ALL': cls.__constants['STATE_ALL'],
            'STATE_ACTIVE': cls.__constants['STATE_ACTIVE'],
            'STATE_RECOVERED': cls.__constants['STATE_RECOVERED'],
        }

    @property
    def STATE_ALL(self):
        """Message constant 'STATE_ALL'."""
        return Metaclass_HdsEventQuery.__constants['STATE_ALL']

    @property
    def STATE_ACTIVE(self):
        """Message constant 'STATE_ACTIVE'."""
        return Metaclass_HdsEventQuery.__constants['STATE_ACTIVE']

    @property
    def STATE_RECOVERED(self):
        """Message constant 'STATE_RECOVERED'."""
        return Metaclass_HdsEventQuery.__constants['STATE_RECOVERED']


class HdsEventQuery(metaclass=Metaclass_HdsEventQuery):
    """
    Message class 'HdsEventQuery'.

    Constants:
      STATE_ALL
      STATE_ACTIVE
      STATE_RECOVERED
    """

    __slots__ = [
        '_start_time',
        '_end_time',
        '_diag_codes',
        '_alert_codes',
        '_alert_locations',
        '_state',
        '_order_desc',
        '_offset',
        '_limit',
    ]

    _fields_and_field_types = {
        'start_time': 'uint64',
        'end_time': 'uint64',
        'diag_codes': 'sequence<uint64>',
        'alert_codes': 'sequence<string>',
        'alert_locations': 'sequence<string>',
        'state': 'uint8',
        'order_desc': 'boolean',
        'offset': 'uint32',
        'limit': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint64')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.start_time = kwargs.get('start_time', int())
        self.end_time = kwargs.get('end_time', int())
        self.diag_codes = array.array('Q', kwargs.get('diag_codes', []))
        self.alert_codes = kwargs.get('alert_codes', [])
        self.alert_locations = kwargs.get('alert_locations', [])
        self.state = kwargs.get('state', int())
        self.order_desc = kwargs.get('order_desc', bool())
        self.offset = kwargs.get('offset', int())
        self.limit = kwargs.get('limit', int())

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
        if self.start_time != other.start_time:
            return False
        if self.end_time != other.end_time:
            return False
        if self.diag_codes != other.diag_codes:
            return False
        if self.alert_codes != other.alert_codes:
            return False
        if self.alert_locations != other.alert_locations:
            return False
        if self.state != other.state:
            return False
        if self.order_desc != other.order_desc:
            return False
        if self.offset != other.offset:
            return False
        if self.limit != other.limit:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'start_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'start_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._start_time = value

    @builtins.property
    def end_time(self):
        """Message field 'end_time'."""
        return self._end_time

    @end_time.setter
    def end_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'end_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'end_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._end_time = value

    @builtins.property
    def diag_codes(self):
        """Message field 'diag_codes'."""
        return self._diag_codes

    @diag_codes.setter
    def diag_codes(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'Q', \
                "The 'diag_codes' array.array() must have the type code of 'Q'"
            self._diag_codes = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 18446744073709551616 for val in value)), \
                "The 'diag_codes' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 18446744073709551615]"
        self._diag_codes = array.array('Q', value)

    @builtins.property
    def alert_codes(self):
        """Message field 'alert_codes'."""
        return self._alert_codes

    @alert_codes.setter
    def alert_codes(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'alert_codes' field must be a set or sequence and each value of type 'str'"
        self._alert_codes = value

    @builtins.property
    def alert_locations(self):
        """Message field 'alert_locations'."""
        return self._alert_locations

    @alert_locations.setter
    def alert_locations(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'alert_locations' field must be a set or sequence and each value of type 'str'"
        self._alert_locations = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def order_desc(self):
        """Message field 'order_desc'."""
        return self._order_desc

    @order_desc.setter
    def order_desc(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'order_desc' field must be of type 'bool'"
        self._order_desc = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'offset' field must be an unsigned integer in [0, 4294967295]"
        self._offset = value

    @builtins.property
    def limit(self):
        """Message field 'limit'."""
        return self._limit

    @limit.setter
    def limit(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'limit' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'limit' field must be an unsigned integer in [0, 4294967295]"
        self._limit = value
