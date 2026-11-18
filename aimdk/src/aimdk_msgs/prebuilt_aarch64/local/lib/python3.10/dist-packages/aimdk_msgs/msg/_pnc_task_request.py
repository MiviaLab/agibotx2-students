# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/PncTaskRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'reserve_info'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PncTaskRequest(type):
    """Metaclass of message 'PncTaskRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TASK_TYPE_NONE': 0,
        'TASK_TYPE_PLANNING_NAVI_TO_GOAL': 1,
        'TASK_TYPE_PLANNING_NAVI_TO_POSE_2D': 2,
        'TASK_TYPE_LINEAR_NAVI_TO_RELATIVE': 3,
        'TASK_TYPE_LINEAR_NAVI_TO_GOAL': 4,
        'TASK_TYPE_LINEAR_NAVI_TO_POSE_2D': 5,
        'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL': 6,
        'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE': 7,
        'TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD': 8,
        'TASK_TYPE_SPIN_TURN': 9,
        'TASK_TYPE_MOVE_FORWARD': 10,
        'TASK_TYPE_PRECISE_NAVI_TO_GOAL': 11,
        'TASK_TYPE_NO_MAP_FOLLOW': 12,
        'TASK_TYPE_AUTO_EXPLORE': 13,
        'TASK_TYPE_VOICE_CONTROL': 14,
        'TASK_TYPE_RELATIVE_TARGET_TRACKING': 15,
        'TASK_TYPE_PLANNING_NAVI_WITH_RL': 16,
        'TASK_TYPE_SWARM_CONTROL_NAVI_MODE': 17,
        'TASK_REQUEST_NONE': 0,
        'TASK_REQUEST_START': 1,
        'TASK_REQUEST_STOP': 2,
        'TASK_REQUEST_PAUSE': 3,
        'TASK_REQUEST_RESUME': 4,
        'TASK_REQUEST_STATUS_INQUIRY': 5,
        'NORMAL': 0,
        'NO_PERCEPTION': 1,
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
                'aimdk_msgs.msg.PncTaskRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pnc_task_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pnc_task_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pnc_task_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pnc_task_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pnc_task_request

            from aimdk_msgs.msg import MessageHeader
            if MessageHeader.__class__._TYPE_SUPPORT is None:
                MessageHeader.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TASK_TYPE_NONE': cls.__constants['TASK_TYPE_NONE'],
            'TASK_TYPE_PLANNING_NAVI_TO_GOAL': cls.__constants['TASK_TYPE_PLANNING_NAVI_TO_GOAL'],
            'TASK_TYPE_PLANNING_NAVI_TO_POSE_2D': cls.__constants['TASK_TYPE_PLANNING_NAVI_TO_POSE_2D'],
            'TASK_TYPE_LINEAR_NAVI_TO_RELATIVE': cls.__constants['TASK_TYPE_LINEAR_NAVI_TO_RELATIVE'],
            'TASK_TYPE_LINEAR_NAVI_TO_GOAL': cls.__constants['TASK_TYPE_LINEAR_NAVI_TO_GOAL'],
            'TASK_TYPE_LINEAR_NAVI_TO_POSE_2D': cls.__constants['TASK_TYPE_LINEAR_NAVI_TO_POSE_2D'],
            'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL': cls.__constants['TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL'],
            'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE': cls.__constants['TASK_TYPE_DIRECT_NAVI_TO_RELATIVE'],
            'TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD': cls.__constants['TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD'],
            'TASK_TYPE_SPIN_TURN': cls.__constants['TASK_TYPE_SPIN_TURN'],
            'TASK_TYPE_MOVE_FORWARD': cls.__constants['TASK_TYPE_MOVE_FORWARD'],
            'TASK_TYPE_PRECISE_NAVI_TO_GOAL': cls.__constants['TASK_TYPE_PRECISE_NAVI_TO_GOAL'],
            'TASK_TYPE_NO_MAP_FOLLOW': cls.__constants['TASK_TYPE_NO_MAP_FOLLOW'],
            'TASK_TYPE_AUTO_EXPLORE': cls.__constants['TASK_TYPE_AUTO_EXPLORE'],
            'TASK_TYPE_VOICE_CONTROL': cls.__constants['TASK_TYPE_VOICE_CONTROL'],
            'TASK_TYPE_RELATIVE_TARGET_TRACKING': cls.__constants['TASK_TYPE_RELATIVE_TARGET_TRACKING'],
            'TASK_TYPE_PLANNING_NAVI_WITH_RL': cls.__constants['TASK_TYPE_PLANNING_NAVI_WITH_RL'],
            'TASK_TYPE_SWARM_CONTROL_NAVI_MODE': cls.__constants['TASK_TYPE_SWARM_CONTROL_NAVI_MODE'],
            'TASK_REQUEST_NONE': cls.__constants['TASK_REQUEST_NONE'],
            'TASK_REQUEST_START': cls.__constants['TASK_REQUEST_START'],
            'TASK_REQUEST_STOP': cls.__constants['TASK_REQUEST_STOP'],
            'TASK_REQUEST_PAUSE': cls.__constants['TASK_REQUEST_PAUSE'],
            'TASK_REQUEST_RESUME': cls.__constants['TASK_REQUEST_RESUME'],
            'TASK_REQUEST_STATUS_INQUIRY': cls.__constants['TASK_REQUEST_STATUS_INQUIRY'],
            'NORMAL': cls.__constants['NORMAL'],
            'NO_PERCEPTION': cls.__constants['NO_PERCEPTION'],
        }

    @property
    def TASK_TYPE_NONE(self):
        """Message constant 'TASK_TYPE_NONE'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_NONE']

    @property
    def TASK_TYPE_PLANNING_NAVI_TO_GOAL(self):
        """Message constant 'TASK_TYPE_PLANNING_NAVI_TO_GOAL'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_PLANNING_NAVI_TO_GOAL']

    @property
    def TASK_TYPE_PLANNING_NAVI_TO_POSE_2D(self):
        """Message constant 'TASK_TYPE_PLANNING_NAVI_TO_POSE_2D'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_PLANNING_NAVI_TO_POSE_2D']

    @property
    def TASK_TYPE_LINEAR_NAVI_TO_RELATIVE(self):
        """Message constant 'TASK_TYPE_LINEAR_NAVI_TO_RELATIVE'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_LINEAR_NAVI_TO_RELATIVE']

    @property
    def TASK_TYPE_LINEAR_NAVI_TO_GOAL(self):
        """Message constant 'TASK_TYPE_LINEAR_NAVI_TO_GOAL'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_LINEAR_NAVI_TO_GOAL']

    @property
    def TASK_TYPE_LINEAR_NAVI_TO_POSE_2D(self):
        """Message constant 'TASK_TYPE_LINEAR_NAVI_TO_POSE_2D'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_LINEAR_NAVI_TO_POSE_2D']

    @property
    def TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL(self):
        """Message constant 'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL']

    @property
    def TASK_TYPE_DIRECT_NAVI_TO_RELATIVE(self):
        """Message constant 'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_DIRECT_NAVI_TO_RELATIVE']

    @property
    def TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD(self):
        """Message constant 'TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD']

    @property
    def TASK_TYPE_SPIN_TURN(self):
        """Message constant 'TASK_TYPE_SPIN_TURN'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_SPIN_TURN']

    @property
    def TASK_TYPE_MOVE_FORWARD(self):
        """Message constant 'TASK_TYPE_MOVE_FORWARD'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_MOVE_FORWARD']

    @property
    def TASK_TYPE_PRECISE_NAVI_TO_GOAL(self):
        """Message constant 'TASK_TYPE_PRECISE_NAVI_TO_GOAL'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_PRECISE_NAVI_TO_GOAL']

    @property
    def TASK_TYPE_NO_MAP_FOLLOW(self):
        """Message constant 'TASK_TYPE_NO_MAP_FOLLOW'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_NO_MAP_FOLLOW']

    @property
    def TASK_TYPE_AUTO_EXPLORE(self):
        """Message constant 'TASK_TYPE_AUTO_EXPLORE'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_AUTO_EXPLORE']

    @property
    def TASK_TYPE_VOICE_CONTROL(self):
        """Message constant 'TASK_TYPE_VOICE_CONTROL'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_VOICE_CONTROL']

    @property
    def TASK_TYPE_RELATIVE_TARGET_TRACKING(self):
        """Message constant 'TASK_TYPE_RELATIVE_TARGET_TRACKING'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_RELATIVE_TARGET_TRACKING']

    @property
    def TASK_TYPE_PLANNING_NAVI_WITH_RL(self):
        """Message constant 'TASK_TYPE_PLANNING_NAVI_WITH_RL'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_PLANNING_NAVI_WITH_RL']

    @property
    def TASK_TYPE_SWARM_CONTROL_NAVI_MODE(self):
        """Message constant 'TASK_TYPE_SWARM_CONTROL_NAVI_MODE'."""
        return Metaclass_PncTaskRequest.__constants['TASK_TYPE_SWARM_CONTROL_NAVI_MODE']

    @property
    def TASK_REQUEST_NONE(self):
        """Message constant 'TASK_REQUEST_NONE'."""
        return Metaclass_PncTaskRequest.__constants['TASK_REQUEST_NONE']

    @property
    def TASK_REQUEST_START(self):
        """Message constant 'TASK_REQUEST_START'."""
        return Metaclass_PncTaskRequest.__constants['TASK_REQUEST_START']

    @property
    def TASK_REQUEST_STOP(self):
        """Message constant 'TASK_REQUEST_STOP'."""
        return Metaclass_PncTaskRequest.__constants['TASK_REQUEST_STOP']

    @property
    def TASK_REQUEST_PAUSE(self):
        """Message constant 'TASK_REQUEST_PAUSE'."""
        return Metaclass_PncTaskRequest.__constants['TASK_REQUEST_PAUSE']

    @property
    def TASK_REQUEST_RESUME(self):
        """Message constant 'TASK_REQUEST_RESUME'."""
        return Metaclass_PncTaskRequest.__constants['TASK_REQUEST_RESUME']

    @property
    def TASK_REQUEST_STATUS_INQUIRY(self):
        """Message constant 'TASK_REQUEST_STATUS_INQUIRY'."""
        return Metaclass_PncTaskRequest.__constants['TASK_REQUEST_STATUS_INQUIRY']

    @property
    def NORMAL(self):
        """Message constant 'NORMAL'."""
        return Metaclass_PncTaskRequest.__constants['NORMAL']

    @property
    def NO_PERCEPTION(self):
        """Message constant 'NO_PERCEPTION'."""
        return Metaclass_PncTaskRequest.__constants['NO_PERCEPTION']


class PncTaskRequest(metaclass=Metaclass_PncTaskRequest):
    """
    Message class 'PncTaskRequest'.

    Constants:
      TASK_TYPE_NONE
      TASK_TYPE_PLANNING_NAVI_TO_GOAL
      TASK_TYPE_PLANNING_NAVI_TO_POSE_2D
      TASK_TYPE_LINEAR_NAVI_TO_RELATIVE
      TASK_TYPE_LINEAR_NAVI_TO_GOAL
      TASK_TYPE_LINEAR_NAVI_TO_POSE_2D
      TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL
      TASK_TYPE_DIRECT_NAVI_TO_RELATIVE
      TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD
      TASK_TYPE_SPIN_TURN
      TASK_TYPE_MOVE_FORWARD
      TASK_TYPE_PRECISE_NAVI_TO_GOAL
      TASK_TYPE_NO_MAP_FOLLOW
      TASK_TYPE_AUTO_EXPLORE
      TASK_TYPE_VOICE_CONTROL
      TASK_TYPE_RELATIVE_TARGET_TRACKING
      TASK_TYPE_PLANNING_NAVI_WITH_RL
      TASK_TYPE_SWARM_CONTROL_NAVI_MODE
      TASK_REQUEST_NONE
      TASK_REQUEST_START
      TASK_REQUEST_STOP
      TASK_REQUEST_PAUSE
      TASK_REQUEST_RESUME
      TASK_REQUEST_STATUS_INQUIRY
      NORMAL
      NO_PERCEPTION
    """

    __slots__ = [
        '_header',
        '_task_type',
        '_task_request',
        '_pnc_mode',
        '_task_id',
        '_map_id',
        '_target_pose',
        '_reference_line',
        '_target_pose_radius',
        '_max_forward_speed',
        '_trajectory_pos',
        '_trajectory_vel',
        '_play_timestamp',
        '_time_duration',
        '_reserve_info',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'task_type': 'uint8',
        'task_request': 'uint8',
        'pnc_mode': 'uint8',
        'task_id': 'uint64',
        'map_id': 'uint64',
        'target_pose': 'geometry_msgs/PoseStamped',
        'reference_line': 'sequence<geometry_msgs/Pose2D>',
        'target_pose_radius': 'double',
        'max_forward_speed': 'float',
        'trajectory_pos': 'sequence<geometry_msgs/Pose2D>',
        'trajectory_vel': 'sequence<geometry_msgs/Twist>',
        'play_timestamp': 'uint64',
        'time_duration': 'uint64',
        'reserve_info': 'uint8[64]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist')),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 64),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        self.task_type = kwargs.get('task_type', int())
        self.task_request = kwargs.get('task_request', int())
        self.pnc_mode = kwargs.get('pnc_mode', int())
        self.task_id = kwargs.get('task_id', int())
        self.map_id = kwargs.get('map_id', int())
        from geometry_msgs.msg import PoseStamped
        self.target_pose = kwargs.get('target_pose', PoseStamped())
        self.reference_line = kwargs.get('reference_line', [])
        self.target_pose_radius = kwargs.get('target_pose_radius', float())
        self.max_forward_speed = kwargs.get('max_forward_speed', float())
        self.trajectory_pos = kwargs.get('trajectory_pos', [])
        self.trajectory_vel = kwargs.get('trajectory_vel', [])
        self.play_timestamp = kwargs.get('play_timestamp', int())
        self.time_duration = kwargs.get('time_duration', int())
        if 'reserve_info' not in kwargs:
            self.reserve_info = numpy.zeros(64, dtype=numpy.uint8)
        else:
            self.reserve_info = numpy.array(kwargs.get('reserve_info'), dtype=numpy.uint8)
            assert self.reserve_info.shape == (64, )

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
        if self.task_type != other.task_type:
            return False
        if self.task_request != other.task_request:
            return False
        if self.pnc_mode != other.pnc_mode:
            return False
        if self.task_id != other.task_id:
            return False
        if self.map_id != other.map_id:
            return False
        if self.target_pose != other.target_pose:
            return False
        if self.reference_line != other.reference_line:
            return False
        if self.target_pose_radius != other.target_pose_radius:
            return False
        if self.max_forward_speed != other.max_forward_speed:
            return False
        if self.trajectory_pos != other.trajectory_pos:
            return False
        if self.trajectory_vel != other.trajectory_vel:
            return False
        if self.play_timestamp != other.play_timestamp:
            return False
        if self.time_duration != other.time_duration:
            return False
        if any(self.reserve_info != other.reserve_info):
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
    def task_type(self):
        """Message field 'task_type'."""
        return self._task_type

    @task_type.setter
    def task_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_type' field must be an unsigned integer in [0, 255]"
        self._task_type = value

    @builtins.property
    def task_request(self):
        """Message field 'task_request'."""
        return self._task_request

    @task_request.setter
    def task_request(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_request' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_request' field must be an unsigned integer in [0, 255]"
        self._task_request = value

    @builtins.property
    def pnc_mode(self):
        """Message field 'pnc_mode'."""
        return self._pnc_mode

    @pnc_mode.setter
    def pnc_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pnc_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pnc_mode' field must be an unsigned integer in [0, 255]"
        self._pnc_mode = value

    @builtins.property
    def task_id(self):
        """Message field 'task_id'."""
        return self._task_id

    @task_id.setter
    def task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'task_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._task_id = value

    @builtins.property
    def map_id(self):
        """Message field 'map_id'."""
        return self._map_id

    @map_id.setter
    def map_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'map_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'map_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._map_id = value

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'target_pose' field must be a sub message of type 'PoseStamped'"
        self._target_pose = value

    @builtins.property
    def reference_line(self):
        """Message field 'reference_line'."""
        return self._reference_line

    @reference_line.setter
    def reference_line(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
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
                 all(isinstance(v, Pose2D) for v in value) and
                 True), \
                "The 'reference_line' field must be a set or sequence and each value of type 'Pose2D'"
        self._reference_line = value

    @builtins.property
    def target_pose_radius(self):
        """Message field 'target_pose_radius'."""
        return self._target_pose_radius

    @target_pose_radius.setter
    def target_pose_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_pose_radius' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_pose_radius' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_pose_radius = value

    @builtins.property
    def max_forward_speed(self):
        """Message field 'max_forward_speed'."""
        return self._max_forward_speed

    @max_forward_speed.setter
    def max_forward_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_forward_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_forward_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_forward_speed = value

    @builtins.property
    def trajectory_pos(self):
        """Message field 'trajectory_pos'."""
        return self._trajectory_pos

    @trajectory_pos.setter
    def trajectory_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose2D
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
                 all(isinstance(v, Pose2D) for v in value) and
                 True), \
                "The 'trajectory_pos' field must be a set or sequence and each value of type 'Pose2D'"
        self._trajectory_pos = value

    @builtins.property
    def trajectory_vel(self):
        """Message field 'trajectory_vel'."""
        return self._trajectory_vel

    @trajectory_vel.setter
    def trajectory_vel(self, value):
        if __debug__:
            from geometry_msgs.msg import Twist
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
                 all(isinstance(v, Twist) for v in value) and
                 True), \
                "The 'trajectory_vel' field must be a set or sequence and each value of type 'Twist'"
        self._trajectory_vel = value

    @builtins.property
    def play_timestamp(self):
        """Message field 'play_timestamp'."""
        return self._play_timestamp

    @play_timestamp.setter
    def play_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'play_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'play_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._play_timestamp = value

    @builtins.property
    def time_duration(self):
        """Message field 'time_duration'."""
        return self._time_duration

    @time_duration.setter
    def time_duration(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_duration' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'time_duration' field must be an unsigned integer in [0, 18446744073709551615]"
        self._time_duration = value

    @builtins.property
    def reserve_info(self):
        """Message field 'reserve_info'."""
        return self._reserve_info

    @reserve_info.setter
    def reserve_info(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'reserve_info' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 64, \
                "The 'reserve_info' numpy.ndarray() must have a size of 64"
            self._reserve_info = value
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
                 len(value) == 64 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'reserve_info' field must be a set or sequence with length 64 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._reserve_info = numpy.array(value, dtype=numpy.uint8)
