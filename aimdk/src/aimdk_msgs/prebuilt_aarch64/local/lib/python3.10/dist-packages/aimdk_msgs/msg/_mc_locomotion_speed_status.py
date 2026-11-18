# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/McLocomotionSpeedStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_McLocomotionSpeedStatus(type):
    """Metaclass of message 'McLocomotionSpeedStatus'."""

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
                'aimdk_msgs.msg.McLocomotionSpeedStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mc_locomotion_speed_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mc_locomotion_speed_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mc_locomotion_speed_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mc_locomotion_speed_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mc_locomotion_speed_status

            from aimdk_msgs.msg import McLocomotionSpeedBounds
            if McLocomotionSpeedBounds.__class__._TYPE_SUPPORT is None:
                McLocomotionSpeedBounds.__class__.__import_type_support__()

            from aimdk_msgs.msg import McLocomotionSpeedMode
            if McLocomotionSpeedMode.__class__._TYPE_SUPPORT is None:
                McLocomotionSpeedMode.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class McLocomotionSpeedStatus(metaclass=Metaclass_McLocomotionSpeedStatus):
    """Message class 'McLocomotionSpeedStatus'."""

    __slots__ = [
        '_speed_mode',
        '_forward_bounds',
        '_lateral_bounds',
        '_angular_bounds',
    ]

    _fields_and_field_types = {
        'speed_mode': 'aimdk_msgs/McLocomotionSpeedMode',
        'forward_bounds': 'aimdk_msgs/McLocomotionSpeedBounds',
        'lateral_bounds': 'aimdk_msgs/McLocomotionSpeedBounds',
        'angular_bounds': 'aimdk_msgs/McLocomotionSpeedBounds',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedMode'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedBounds'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedBounds'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'McLocomotionSpeedBounds'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import McLocomotionSpeedMode
        self.speed_mode = kwargs.get('speed_mode', McLocomotionSpeedMode())
        from aimdk_msgs.msg import McLocomotionSpeedBounds
        self.forward_bounds = kwargs.get('forward_bounds', McLocomotionSpeedBounds())
        from aimdk_msgs.msg import McLocomotionSpeedBounds
        self.lateral_bounds = kwargs.get('lateral_bounds', McLocomotionSpeedBounds())
        from aimdk_msgs.msg import McLocomotionSpeedBounds
        self.angular_bounds = kwargs.get('angular_bounds', McLocomotionSpeedBounds())

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
        if self.speed_mode != other.speed_mode:
            return False
        if self.forward_bounds != other.forward_bounds:
            return False
        if self.lateral_bounds != other.lateral_bounds:
            return False
        if self.angular_bounds != other.angular_bounds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_mode(self):
        """Message field 'speed_mode'."""
        return self._speed_mode

    @speed_mode.setter
    def speed_mode(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedMode
            assert \
                isinstance(value, McLocomotionSpeedMode), \
                "The 'speed_mode' field must be a sub message of type 'McLocomotionSpeedMode'"
        self._speed_mode = value

    @builtins.property
    def forward_bounds(self):
        """Message field 'forward_bounds'."""
        return self._forward_bounds

    @forward_bounds.setter
    def forward_bounds(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedBounds
            assert \
                isinstance(value, McLocomotionSpeedBounds), \
                "The 'forward_bounds' field must be a sub message of type 'McLocomotionSpeedBounds'"
        self._forward_bounds = value

    @builtins.property
    def lateral_bounds(self):
        """Message field 'lateral_bounds'."""
        return self._lateral_bounds

    @lateral_bounds.setter
    def lateral_bounds(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedBounds
            assert \
                isinstance(value, McLocomotionSpeedBounds), \
                "The 'lateral_bounds' field must be a sub message of type 'McLocomotionSpeedBounds'"
        self._lateral_bounds = value

    @builtins.property
    def angular_bounds(self):
        """Message field 'angular_bounds'."""
        return self._angular_bounds

    @angular_bounds.setter
    def angular_bounds(self, value):
        if __debug__:
            from aimdk_msgs.msg import McLocomotionSpeedBounds
            assert \
                isinstance(value, McLocomotionSpeedBounds), \
                "The 'angular_bounds' field must be a sub message of type 'McLocomotionSpeedBounds'"
        self._angular_bounds = value
