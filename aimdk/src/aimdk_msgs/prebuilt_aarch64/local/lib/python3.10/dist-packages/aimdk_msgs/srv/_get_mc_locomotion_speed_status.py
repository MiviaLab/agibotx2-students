# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:srv/GetMcLocomotionSpeedStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetMcLocomotionSpeedStatus_Request(type):
    """Metaclass of message 'GetMcLocomotionSpeedStatus_Request'."""

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
                'aimdk_msgs.srv.GetMcLocomotionSpeedStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_mc_locomotion_speed_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_mc_locomotion_speed_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_mc_locomotion_speed_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_mc_locomotion_speed_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_mc_locomotion_speed_status__request

            from aimdk_msgs.msg import CommonRequest
            if CommonRequest.__class__._TYPE_SUPPORT is None:
                CommonRequest.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetMcLocomotionSpeedStatus_Request(metaclass=Metaclass_GetMcLocomotionSpeedStatus_Request):
    """Message class 'GetMcLocomotionSpeedStatus_Request'."""

    __slots__ = [
        '_request',
    ]

    _fields_and_field_types = {
        'request': 'aimdk_msgs/CommonRequest',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'CommonRequest'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import CommonRequest
        self.request = kwargs.get('request', CommonRequest())

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
        if self.request != other.request:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if __debug__:
            from aimdk_msgs.msg import CommonRequest
            assert \
                isinstance(value, CommonRequest), \
                "The 'request' field must be a sub message of type 'CommonRequest'"
        self._request = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetMcLocomotionSpeedStatus_Response(type):
    """Metaclass of message 'GetMcLocomotionSpeedStatus_Response'."""

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
                'aimdk_msgs.srv.GetMcLocomotionSpeedStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_mc_locomotion_speed_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_mc_locomotion_speed_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_mc_locomotion_speed_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_mc_locomotion_speed_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_mc_locomotion_speed_status__response

            from aimdk_msgs.msg import McLocomotionSpeedStatus
            if McLocomotionSpeedStatus.__class__._TYPE_SUPPORT is None:
                McLocomotionSpeedStatus.__class__.__import_type_support__()

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


class GetMcLocomotionSpeedStatus_Response(metaclass=Metaclass_GetMcLocomotionSpeedStatus_Response):
    """Message class 'GetMcLocomotionSpeedStatus_Response'."""

    __slots__ = [
        '_header',
        '_current_speed_status',
        '_none_speed_status',
        '_low_speed_status',
        '_medium_speed_status',
        '_high_speed_status',
        '_step_speed_status',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/ResponseHeader',
        'current_speed_status': 'aimdk_msgs/McLocomotionSpeedStatus',
        'none_speed_status': 'aimdk_msgs/McLocomotionSpeedStatus',
        'low_speed_status': 'aimdk_msgs/McLocomotionSpeedStatus',
        'medium_speed_status': 'aimdk_msgs/McLocomotionSpeedStatus',
        'high_speed_status': 'aimdk_msgs/McLocomotionSpeedStatus',
        'step_speed_status': 'aimdk_msgs/McLocomotionSpeedStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'ResponseHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import ResponseHeader
        self.header = kwargs.get('header', ResponseHeader())
        from aimdk_msgs.msg import McLocomotionSpeedStatus
        self.current_speed_status = kwargs.get('current_speed_status', McLocomotionSpeedStatus())
        from aimdk_msgs.msg import McLocomotionSpeedStatus
        self.none_speed_status = kwargs.get('none_speed_status', McLocomotionSpeedStatus())
        from aimdk_msgs.msg import McLocomotionSpeedStatus
        self.low_speed_status = kwargs.get('low_speed_status', McLocomotionSpeedStatus())
        from aimdk_msgs.msg import McLocomotionSpeedStatus
        self.medium_speed_status = kwargs.get('medium_speed_status', McLocomotionSpeedStatus())
        from aimdk_msgs.msg import McLocomotionSpeedStatus
        self.high_speed_status = kwargs.get('high_speed_status', McLocomotionSpeedStatus())
        from aimdk_msgs.msg import McLocomotionSpeedStatus
        self.step_speed_status = kwargs.get('step_speed_status', McLocomotionSpeedStatus())

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
        if self.current_speed_status != other.current_speed_status:
            return False
        if self.none_speed_status != other.none_speed_status:
            return False
        if self.low_speed_status != other.low_speed_status:
            return False
        if self.medium_speed_status != other.medium_speed_status:
            return False
        if self.high_speed_status != other.high_speed_status:
            return False
        if self.step_speed_status != other.step_speed_status:
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
    def current_speed_status(self):
        """Message field 'current_speed_status'."""
        return self._current_speed_status

    @current_speed_status.setter
    def current_speed_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedStatus
            assert \
                isinstance(value, McLocomotionSpeedStatus), \
                "The 'current_speed_status' field must be a sub message of type 'McLocomotionSpeedStatus'"
        self._current_speed_status = value

    @builtins.property
    def none_speed_status(self):
        """Message field 'none_speed_status'."""
        return self._none_speed_status

    @none_speed_status.setter
    def none_speed_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedStatus
            assert \
                isinstance(value, McLocomotionSpeedStatus), \
                "The 'none_speed_status' field must be a sub message of type 'McLocomotionSpeedStatus'"
        self._none_speed_status = value

    @builtins.property
    def low_speed_status(self):
        """Message field 'low_speed_status'."""
        return self._low_speed_status

    @low_speed_status.setter
    def low_speed_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedStatus
            assert \
                isinstance(value, McLocomotionSpeedStatus), \
                "The 'low_speed_status' field must be a sub message of type 'McLocomotionSpeedStatus'"
        self._low_speed_status = value

    @builtins.property
    def medium_speed_status(self):
        """Message field 'medium_speed_status'."""
        return self._medium_speed_status

    @medium_speed_status.setter
    def medium_speed_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedStatus
            assert \
                isinstance(value, McLocomotionSpeedStatus), \
                "The 'medium_speed_status' field must be a sub message of type 'McLocomotionSpeedStatus'"
        self._medium_speed_status = value

    @builtins.property
    def high_speed_status(self):
        """Message field 'high_speed_status'."""
        return self._high_speed_status

    @high_speed_status.setter
    def high_speed_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedStatus
            assert \
                isinstance(value, McLocomotionSpeedStatus), \
                "The 'high_speed_status' field must be a sub message of type 'McLocomotionSpeedStatus'"
        self._high_speed_status = value

    @builtins.property
    def step_speed_status(self):
        """Message field 'step_speed_status'."""
        return self._step_speed_status

    @step_speed_status.setter
    def step_speed_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedStatus
            assert \
                isinstance(value, McLocomotionSpeedStatus), \
                "The 'step_speed_status' field must be a sub message of type 'McLocomotionSpeedStatus'"
        self._step_speed_status = value


class Metaclass_GetMcLocomotionSpeedStatus(type):
    """Metaclass of service 'GetMcLocomotionSpeedStatus'."""

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
                'aimdk_msgs.srv.GetMcLocomotionSpeedStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_mc_locomotion_speed_status

            from aimdk_msgs.srv import _get_mc_locomotion_speed_status
            if _get_mc_locomotion_speed_status.Metaclass_GetMcLocomotionSpeedStatus_Request._TYPE_SUPPORT is None:
                _get_mc_locomotion_speed_status.Metaclass_GetMcLocomotionSpeedStatus_Request.__import_type_support__()
            if _get_mc_locomotion_speed_status.Metaclass_GetMcLocomotionSpeedStatus_Response._TYPE_SUPPORT is None:
                _get_mc_locomotion_speed_status.Metaclass_GetMcLocomotionSpeedStatus_Response.__import_type_support__()


class GetMcLocomotionSpeedStatus(metaclass=Metaclass_GetMcLocomotionSpeedStatus):
    from aimdk_msgs.srv._get_mc_locomotion_speed_status import GetMcLocomotionSpeedStatus_Request as Request
    from aimdk_msgs.srv._get_mc_locomotion_speed_status import GetMcLocomotionSpeedStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
