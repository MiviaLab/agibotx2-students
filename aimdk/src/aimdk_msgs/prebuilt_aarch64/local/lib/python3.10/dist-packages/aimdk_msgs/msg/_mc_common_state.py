# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McCommonState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McCommonState(type):
    """Metaclass of message 'McCommonState'."""

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
                'aimdk_msgs.msg.McCommonState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_common_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_common_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_common_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_common_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_common_state

            from aimdk_msgs.msg import McActionInfo
            if McActionInfo.__class__._TYPE_SUPPORT is None:
                McActionInfo.__class__.__import_type_support__()

            from aimdk_msgs.msg import McBodyPoseStatus
            if McBodyPoseStatus.__class__._TYPE_SUPPORT is None:
                McBodyPoseStatus.__class__.__import_type_support__()

            from aimdk_msgs.msg import McFsmState
            if McFsmState.__class__._TYPE_SUPPORT is None:
                McFsmState.__class__.__import_type_support__()

            from aimdk_msgs.msg import McInputSource
            if McInputSource.__class__._TYPE_SUPPORT is None:
                McInputSource.__class__.__import_type_support__()

            from aimdk_msgs.msg import McLocomotionSpeedStatus
            if McLocomotionSpeedStatus.__class__._TYPE_SUPPORT is None:
                McLocomotionSpeedStatus.__class__.__import_type_support__()

            from aimdk_msgs.msg import McMotionStatus
            if McMotionStatus.__class__._TYPE_SUPPORT is None:
                McMotionStatus.__class__.__import_type_support__()

            from aimdk_msgs.msg import McRuntimeModel
            if McRuntimeModel.__class__._TYPE_SUPPORT is None:
                McRuntimeModel.__class__.__import_type_support__()

            from aimdk_msgs.msg import McServoStatus
            if McServoStatus.__class__._TYPE_SUPPORT is None:
                McServoStatus.__class__.__import_type_support__()

            from aimdk_msgs.msg import MessageHeader
            if MessageHeader.__class__._TYPE_SUPPORT is None:
                MessageHeader.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class McCommonState(metaclass=Metaclass_McCommonState):
    """Message class 'McCommonState'."""

    __slots__ = [
        '_header',
        '_input_source',
        '_action_info',
        '_runtime_model',
        '_motion_status',
        '_servo_status',
        '_fsm_state',
        '_body_status',
        '_speed_status',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'input_source': 'aimdk_msgs/McInputSource',
        'action_info': 'aimdk_msgs/McActionInfo',
        'runtime_model': 'aimdk_msgs/McRuntimeModel',
        'motion_status': 'aimdk_msgs/McMotionStatus',
        'servo_status': 'aimdk_msgs/McServoStatus',
        'fsm_state': 'aimdk_msgs/McFsmState',
        'body_status': 'aimdk_msgs/McBodyPoseStatus',
        'speed_status': 'aimdk_msgs/McLocomotionSpeedStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McInputSource'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McActionInfo'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McRuntimeModel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McMotionStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McServoStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McFsmState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McBodyPoseStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        from aimdk_msgs.msg import McInputSource
        self.input_source = kwargs.get('input_source', McInputSource())
        from aimdk_msgs.msg import McActionInfo
        self.action_info = kwargs.get('action_info', McActionInfo())
        from aimdk_msgs.msg import McRuntimeModel
        self.runtime_model = kwargs.get('runtime_model', McRuntimeModel())
        from aimdk_msgs.msg import McMotionStatus
        self.motion_status = kwargs.get('motion_status', McMotionStatus())
        from aimdk_msgs.msg import McServoStatus
        self.servo_status = kwargs.get('servo_status', McServoStatus())
        from aimdk_msgs.msg import McFsmState
        self.fsm_state = kwargs.get('fsm_state', McFsmState())
        from aimdk_msgs.msg import McBodyPoseStatus
        self.body_status = kwargs.get('body_status', McBodyPoseStatus())
        from aimdk_msgs.msg import McLocomotionSpeedStatus
        self.speed_status = kwargs.get('speed_status', McLocomotionSpeedStatus())

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
        if self.input_source != other.input_source:
            return False
        if self.action_info != other.action_info:
            return False
        if self.runtime_model != other.runtime_model:
            return False
        if self.motion_status != other.motion_status:
            return False
        if self.servo_status != other.servo_status:
            return False
        if self.fsm_state != other.fsm_state:
            return False
        if self.body_status != other.body_status:
            return False
        if self.speed_status != other.speed_status:
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
    def input_source(self):
        """Message field 'input_source'."""
        return self._input_source

    @input_source.setter
    def input_source(self, value):
        if __debug__:
            from aimdk_msgs.msg import McInputSource
            assert \
                isinstance(value, McInputSource), \
                "The 'input_source' field must be a sub message of type 'McInputSource'"
        self._input_source = value

    @builtins.property
    def action_info(self):
        """Message field 'action_info'."""
        return self._action_info

    @action_info.setter
    def action_info(self, value):
        if __debug__:
            from aimdk_msgs.msg import McActionInfo
            assert \
                isinstance(value, McActionInfo), \
                "The 'action_info' field must be a sub message of type 'McActionInfo'"
        self._action_info = value

    @builtins.property
    def runtime_model(self):
        """Message field 'runtime_model'."""
        return self._runtime_model

    @runtime_model.setter
    def runtime_model(self, value):
        if __debug__:
            from aimdk_msgs.msg import McRuntimeModel
            assert \
                isinstance(value, McRuntimeModel), \
                "The 'runtime_model' field must be a sub message of type 'McRuntimeModel'"
        self._runtime_model = value

    @builtins.property
    def motion_status(self):
        """Message field 'motion_status'."""
        return self._motion_status

    @motion_status.setter
    def motion_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McMotionStatus
            assert \
                isinstance(value, McMotionStatus), \
                "The 'motion_status' field must be a sub message of type 'McMotionStatus'"
        self._motion_status = value

    @builtins.property
    def servo_status(self):
        """Message field 'servo_status'."""
        return self._servo_status

    @servo_status.setter
    def servo_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McServoStatus
            assert \
                isinstance(value, McServoStatus), \
                "The 'servo_status' field must be a sub message of type 'McServoStatus'"
        self._servo_status = value

    @builtins.property
    def fsm_state(self):
        """Message field 'fsm_state'."""
        return self._fsm_state

    @fsm_state.setter
    def fsm_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import McFsmState
            assert \
                isinstance(value, McFsmState), \
                "The 'fsm_state' field must be a sub message of type 'McFsmState'"
        self._fsm_state = value

    @builtins.property
    def body_status(self):
        """Message field 'body_status'."""
        return self._body_status

    @body_status.setter
    def body_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McBodyPoseStatus
            assert \
                isinstance(value, McBodyPoseStatus), \
                "The 'body_status' field must be a sub message of type 'McBodyPoseStatus'"
        self._body_status = value

    @builtins.property
    def speed_status(self):
        """Message field 'speed_status'."""
        return self._speed_status

    @speed_status.setter
    def speed_status(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedStatus
            assert \
                isinstance(value, McLocomotionSpeedStatus), \
                "The 'speed_status' field must be a sub message of type 'McLocomotionSpeedStatus'"
        self._speed_status = value
