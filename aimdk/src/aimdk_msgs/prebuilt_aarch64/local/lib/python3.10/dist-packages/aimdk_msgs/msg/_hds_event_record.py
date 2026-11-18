# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/HdsEventRecord.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HdsEventRecord(type):
    """Metaclass of message 'HdsEventRecord'."""

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
                'aimdk_msgs.msg.HdsEventRecord')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hds_event_record
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hds_event_record
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hds_event_record
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hds_event_record
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hds_event_record

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HdsEventRecord(metaclass=Metaclass_HdsEventRecord):
    """Message class 'HdsEventRecord'."""

    __slots__ = [
        '_id',
        '_diag_code',
        '_alert_code',
        '_alert_location',
        '_first_timestamp',
        '_last_timestamp',
        '_recover_timestamp',
        '_duration_ns',
        '_recovered',
    ]

    _fields_and_field_types = {
        'id': 'uint64',
        'diag_code': 'uint64',
        'alert_code': 'string',
        'alert_location': 'string',
        'first_timestamp': 'uint64',
        'last_timestamp': 'uint64',
        'recover_timestamp': 'uint64',
        'duration_ns': 'uint64',
        'recovered': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', int())
        self.diag_code = kwargs.get('diag_code', int())
        self.alert_code = kwargs.get('alert_code', str())
        self.alert_location = kwargs.get('alert_location', str())
        self.first_timestamp = kwargs.get('first_timestamp', int())
        self.last_timestamp = kwargs.get('last_timestamp', int())
        self.recover_timestamp = kwargs.get('recover_timestamp', int())
        self.duration_ns = kwargs.get('duration_ns', int())
        self.recovered = kwargs.get('recovered', bool())

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
        if self.id != other.id:
            return False
        if self.diag_code != other.diag_code:
            return False
        if self.alert_code != other.alert_code:
            return False
        if self.alert_location != other.alert_location:
            return False
        if self.first_timestamp != other.first_timestamp:
            return False
        if self.last_timestamp != other.last_timestamp:
            return False
        if self.recover_timestamp != other.recover_timestamp:
            return False
        if self.duration_ns != other.duration_ns:
            return False
        if self.recovered != other.recovered:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._id = value

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
    def alert_code(self):
        """Message field 'alert_code'."""
        return self._alert_code

    @alert_code.setter
    def alert_code(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'alert_code' field must be of type 'str'"
        self._alert_code = value

    @builtins.property
    def alert_location(self):
        """Message field 'alert_location'."""
        return self._alert_location

    @alert_location.setter
    def alert_location(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'alert_location' field must be of type 'str'"
        self._alert_location = value

    @builtins.property
    def first_timestamp(self):
        """Message field 'first_timestamp'."""
        return self._first_timestamp

    @first_timestamp.setter
    def first_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'first_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'first_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._first_timestamp = value

    @builtins.property
    def last_timestamp(self):
        """Message field 'last_timestamp'."""
        return self._last_timestamp

    @last_timestamp.setter
    def last_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_timestamp = value

    @builtins.property
    def recover_timestamp(self):
        """Message field 'recover_timestamp'."""
        return self._recover_timestamp

    @recover_timestamp.setter
    def recover_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'recover_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'recover_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._recover_timestamp = value

    @builtins.property
    def duration_ns(self):
        """Message field 'duration_ns'."""
        return self._duration_ns

    @duration_ns.setter
    def duration_ns(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'duration_ns' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'duration_ns' field must be an unsigned integer in [0, 18446744073709551615]"
        self._duration_ns = value

    @builtins.property
    def recovered(self):
        """Message field 'recovered'."""
        return self._recovered

    @recovered.setter
    def recovered(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'recovered' field must be of type 'bool'"
        self._recovered = value
