# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/GetHdsEventHistory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetHdsEventHistory_Request(type):
    """Metaclass of message 'GetHdsEventHistory_Request'."""

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
                'aimdk_msgs.srv.GetHdsEventHistory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_hds_event_history__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_hds_event_history__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_hds_event_history__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_hds_event_history__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_hds_event_history__request

            from aimdk_msgs.msg import HdsEventQuery
            if HdsEventQuery.__class__._TYPE_SUPPORT is None:
                HdsEventQuery.__class__.__import_type_support__()

            from aimdk_msgs.msg import RequestHeader
            if RequestHeader.__class__._TYPE_SUPPORT is None:
                RequestHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetHdsEventHistory_Request(metaclass=Metaclass_GetHdsEventHistory_Request):
    """Message class 'GetHdsEventHistory_Request'."""

    __slots__ = [
        '_header',
        '_query',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/RequestHeader',
        'query': 'aimdk_msgs/HdsEventQuery',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'RequestHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'HdsEventQuery'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import RequestHeader
        self.header = kwargs.get('header', RequestHeader())
        from aimdk_msgs.msg import HdsEventQuery
        self.query = kwargs.get('query', HdsEventQuery())

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
        if self.query != other.query:
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
            from aimdk_msgs.msg import RequestHeader
            assert \
                isinstance(value, RequestHeader), \
                "The 'header' field must be a sub message of type 'RequestHeader'"
        self._header = value

    @builtins.property
    def query(self):
        """Message field 'query'."""
        return self._query

    @query.setter
    def query(self, value):
        if __debug__:
            from aimdk_msgs.msg import HdsEventQuery
            assert \
                isinstance(value, HdsEventQuery), \
                "The 'query' field must be a sub message of type 'HdsEventQuery'"
        self._query = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetHdsEventHistory_Response(type):
    """Metaclass of message 'GetHdsEventHistory_Response'."""

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
                'aimdk_msgs.srv.GetHdsEventHistory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_hds_event_history__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_hds_event_history__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_hds_event_history__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_hds_event_history__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_hds_event_history__response

            from aimdk_msgs.msg import HdsEventRecord
            if HdsEventRecord.__class__._TYPE_SUPPORT is None:
                HdsEventRecord.__class__.__import_type_support__()

            from aimdk_msgs.msg import ResponseHeader
            if ResponseHeader.__class__._TYPE_SUPPORT is None:
                ResponseHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetHdsEventHistory_Response(metaclass=Metaclass_GetHdsEventHistory_Response):
    """Message class 'GetHdsEventHistory_Response'."""

    __slots__ = [
        '_header',
        '_records',
        '_total_count',
        '_has_more',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/ResponseHeader',
        'records': 'sequence<aimdk_msgs/HdsEventRecord>',
        'total_count': 'uint32',
        'has_more': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'ResponseHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'HdsEventRecord')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import ResponseHeader
        self.header = kwargs.get('header', ResponseHeader())
        self.records = kwargs.get('records', [])
        self.total_count = kwargs.get('total_count', int())
        self.has_more = kwargs.get('has_more', bool())

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
        if self.records != other.records:
            return False
        if self.total_count != other.total_count:
            return False
        if self.has_more != other.has_more:
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
            from aimdk_msgs.msg import ResponseHeader
            assert \
                isinstance(value, ResponseHeader), \
                "The 'header' field must be a sub message of type 'ResponseHeader'"
        self._header = value

    @builtins.property
    def records(self):
        """Message field 'records'."""
        return self._records

    @records.setter
    def records(self, value):
        if __debug__:
            from aimdk_msgs.msg import HdsEventRecord
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
                 all(isinstance(v, HdsEventRecord) for v in value) and
                 True), \
                "The 'records' field must be a set or sequence and each value of type 'HdsEventRecord'"
        self._records = value

    @builtins.property
    def total_count(self):
        """Message field 'total_count'."""
        return self._total_count

    @total_count.setter
    def total_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_count' field must be an unsigned integer in [0, 4294967295]"
        self._total_count = value

    @builtins.property
    def has_more(self):
        """Message field 'has_more'."""
        return self._has_more

    @has_more.setter
    def has_more(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_more' field must be of type 'bool'"
        self._has_more = value


class Metaclass_GetHdsEventHistory(type):
    """Metaclass of service 'GetHdsEventHistory'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('aimdk_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'aimdk_msgs.srv.GetHdsEventHistory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_hds_event_history

            from aimdk_msgs.srv import _get_hds_event_history
            if _get_hds_event_history.Metaclass_GetHdsEventHistory_Request._TYPE_SUPPORT is None:
                _get_hds_event_history.Metaclass_GetHdsEventHistory_Request.__import_type_support__()
            if _get_hds_event_history.Metaclass_GetHdsEventHistory_Response._TYPE_SUPPORT is None:
                _get_hds_event_history.Metaclass_GetHdsEventHistory_Response.__import_type_support__()


class GetHdsEventHistory(metaclass=Metaclass_GetHdsEventHistory):
    from aimdk_msgs.srv._get_hds_event_history import GetHdsEventHistory_Request as Request
    from aimdk_msgs.srv._get_hds_event_history import GetHdsEventHistory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
