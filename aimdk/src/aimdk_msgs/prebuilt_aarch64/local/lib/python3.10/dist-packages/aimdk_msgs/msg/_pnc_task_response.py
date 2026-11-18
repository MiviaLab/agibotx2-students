# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/PncTaskResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'reserve_info'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PncTaskResponse(type):
    """Metaclass of message 'PncTaskResponse'."""

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
        'TASK_STATUS_UNKONW': 0,
        'TASK_STATUS_RUNNING': 1,
        'TASK_STATUS_FAILED': 2,
        'TASK_STATUS_PAUSED': 3,
        'TASK_STATUS_FINISHED': 4,
        'TASK_STATUS_UNKNOW_BLOCK': 10,
        'TASK_STATUS_SPIN_BLOCK': 11,
        'TASK_STATUS_TRAJ_COLLISION_BLOCK': 12,
        'TASK_STATUS_CONTOLLER_COLLISION_BLOCK': 13,
        'TASK_STATUS_SPIN_BLOCK_WITH_HUMAN': 14,
        'TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN': 15,
        'TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN': 16,
        'TASK_STATUS_LOCAL_OPTIMAL_FAILED': 17,
        'TASK_STATUS_GOBAL_PATH_BLOCK': 18,
        'TASK_STATUS_RECOVERY_GLOBAL': 20,
        'TASK_STATUS_RECOVERY_LOCAL': 21,
        'TASK_STATUS_RECOVERY_TIMEOUT': 22,
        'TASK_STATUS_EXPLORE_TO_RECOVERY': 23,
        'TASK_STATUS_EXPLORE_SUCCESS': 24,
        'TASK_STATUS_EXPLORE_FAILED': 25,
        'TASK_STATUS_GOAL_BLOCK_CONTINUE': 30,
        'TASK_STATUS_GOAL_BLOCK_ABORT': 31,
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
                'aimdk_msgs.msg.PncTaskResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pnc_task_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pnc_task_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pnc_task_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pnc_task_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pnc_task_response

            from aimdk_msgs.msg import MessageHeader
            if MessageHeader.__class__._TYPE_SUPPORT is None:
                MessageHeader.__class__.__import_type_support__()

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
            'TASK_STATUS_UNKONW': cls.__constants['TASK_STATUS_UNKONW'],
            'TASK_STATUS_RUNNING': cls.__constants['TASK_STATUS_RUNNING'],
            'TASK_STATUS_FAILED': cls.__constants['TASK_STATUS_FAILED'],
            'TASK_STATUS_PAUSED': cls.__constants['TASK_STATUS_PAUSED'],
            'TASK_STATUS_FINISHED': cls.__constants['TASK_STATUS_FINISHED'],
            'TASK_STATUS_UNKNOW_BLOCK': cls.__constants['TASK_STATUS_UNKNOW_BLOCK'],
            'TASK_STATUS_SPIN_BLOCK': cls.__constants['TASK_STATUS_SPIN_BLOCK'],
            'TASK_STATUS_TRAJ_COLLISION_BLOCK': cls.__constants['TASK_STATUS_TRAJ_COLLISION_BLOCK'],
            'TASK_STATUS_CONTOLLER_COLLISION_BLOCK': cls.__constants['TASK_STATUS_CONTOLLER_COLLISION_BLOCK'],
            'TASK_STATUS_SPIN_BLOCK_WITH_HUMAN': cls.__constants['TASK_STATUS_SPIN_BLOCK_WITH_HUMAN'],
            'TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN': cls.__constants['TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN'],
            'TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN': cls.__constants['TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN'],
            'TASK_STATUS_LOCAL_OPTIMAL_FAILED': cls.__constants['TASK_STATUS_LOCAL_OPTIMAL_FAILED'],
            'TASK_STATUS_GOBAL_PATH_BLOCK': cls.__constants['TASK_STATUS_GOBAL_PATH_BLOCK'],
            'TASK_STATUS_RECOVERY_GLOBAL': cls.__constants['TASK_STATUS_RECOVERY_GLOBAL'],
            'TASK_STATUS_RECOVERY_LOCAL': cls.__constants['TASK_STATUS_RECOVERY_LOCAL'],
            'TASK_STATUS_RECOVERY_TIMEOUT': cls.__constants['TASK_STATUS_RECOVERY_TIMEOUT'],
            'TASK_STATUS_EXPLORE_TO_RECOVERY': cls.__constants['TASK_STATUS_EXPLORE_TO_RECOVERY'],
            'TASK_STATUS_EXPLORE_SUCCESS': cls.__constants['TASK_STATUS_EXPLORE_SUCCESS'],
            'TASK_STATUS_EXPLORE_FAILED': cls.__constants['TASK_STATUS_EXPLORE_FAILED'],
            'TASK_STATUS_GOAL_BLOCK_CONTINUE': cls.__constants['TASK_STATUS_GOAL_BLOCK_CONTINUE'],
            'TASK_STATUS_GOAL_BLOCK_ABORT': cls.__constants['TASK_STATUS_GOAL_BLOCK_ABORT'],
        }

    @property
    def TASK_TYPE_NONE(self):
        """Message constant 'TASK_TYPE_NONE'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_NONE']

    @property
    def TASK_TYPE_PLANNING_NAVI_TO_GOAL(self):
        """Message constant 'TASK_TYPE_PLANNING_NAVI_TO_GOAL'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_PLANNING_NAVI_TO_GOAL']

    @property
    def TASK_TYPE_PLANNING_NAVI_TO_POSE_2D(self):
        """Message constant 'TASK_TYPE_PLANNING_NAVI_TO_POSE_2D'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_PLANNING_NAVI_TO_POSE_2D']

    @property
    def TASK_TYPE_LINEAR_NAVI_TO_RELATIVE(self):
        """Message constant 'TASK_TYPE_LINEAR_NAVI_TO_RELATIVE'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_LINEAR_NAVI_TO_RELATIVE']

    @property
    def TASK_TYPE_LINEAR_NAVI_TO_GOAL(self):
        """Message constant 'TASK_TYPE_LINEAR_NAVI_TO_GOAL'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_LINEAR_NAVI_TO_GOAL']

    @property
    def TASK_TYPE_LINEAR_NAVI_TO_POSE_2D(self):
        """Message constant 'TASK_TYPE_LINEAR_NAVI_TO_POSE_2D'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_LINEAR_NAVI_TO_POSE_2D']

    @property
    def TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL(self):
        """Message constant 'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_DIRECT_NAVI_TO_RELATIVE_GOAL']

    @property
    def TASK_TYPE_DIRECT_NAVI_TO_RELATIVE(self):
        """Message constant 'TASK_TYPE_DIRECT_NAVI_TO_RELATIVE'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_DIRECT_NAVI_TO_RELATIVE']

    @property
    def TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD(self):
        """Message constant 'TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_SPIN_TURN_AND_MOVE_FORWARD']

    @property
    def TASK_TYPE_SPIN_TURN(self):
        """Message constant 'TASK_TYPE_SPIN_TURN'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_SPIN_TURN']

    @property
    def TASK_TYPE_MOVE_FORWARD(self):
        """Message constant 'TASK_TYPE_MOVE_FORWARD'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_MOVE_FORWARD']

    @property
    def TASK_TYPE_PRECISE_NAVI_TO_GOAL(self):
        """Message constant 'TASK_TYPE_PRECISE_NAVI_TO_GOAL'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_PRECISE_NAVI_TO_GOAL']

    @property
    def TASK_TYPE_NO_MAP_FOLLOW(self):
        """Message constant 'TASK_TYPE_NO_MAP_FOLLOW'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_NO_MAP_FOLLOW']

    @property
    def TASK_TYPE_AUTO_EXPLORE(self):
        """Message constant 'TASK_TYPE_AUTO_EXPLORE'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_AUTO_EXPLORE']

    @property
    def TASK_TYPE_VOICE_CONTROL(self):
        """Message constant 'TASK_TYPE_VOICE_CONTROL'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_VOICE_CONTROL']

    @property
    def TASK_TYPE_RELATIVE_TARGET_TRACKING(self):
        """Message constant 'TASK_TYPE_RELATIVE_TARGET_TRACKING'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_RELATIVE_TARGET_TRACKING']

    @property
    def TASK_TYPE_PLANNING_NAVI_WITH_RL(self):
        """Message constant 'TASK_TYPE_PLANNING_NAVI_WITH_RL'."""
        return Metaclass_PncTaskResponse.__constants['TASK_TYPE_PLANNING_NAVI_WITH_RL']

    @property
    def TASK_STATUS_UNKONW(self):
        """Message constant 'TASK_STATUS_UNKONW'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_UNKONW']

    @property
    def TASK_STATUS_RUNNING(self):
        """Message constant 'TASK_STATUS_RUNNING'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_RUNNING']

    @property
    def TASK_STATUS_FAILED(self):
        """Message constant 'TASK_STATUS_FAILED'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_FAILED']

    @property
    def TASK_STATUS_PAUSED(self):
        """Message constant 'TASK_STATUS_PAUSED'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_PAUSED']

    @property
    def TASK_STATUS_FINISHED(self):
        """Message constant 'TASK_STATUS_FINISHED'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_FINISHED']

    @property
    def TASK_STATUS_UNKNOW_BLOCK(self):
        """Message constant 'TASK_STATUS_UNKNOW_BLOCK'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_UNKNOW_BLOCK']

    @property
    def TASK_STATUS_SPIN_BLOCK(self):
        """Message constant 'TASK_STATUS_SPIN_BLOCK'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_SPIN_BLOCK']

    @property
    def TASK_STATUS_TRAJ_COLLISION_BLOCK(self):
        """Message constant 'TASK_STATUS_TRAJ_COLLISION_BLOCK'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_TRAJ_COLLISION_BLOCK']

    @property
    def TASK_STATUS_CONTOLLER_COLLISION_BLOCK(self):
        """Message constant 'TASK_STATUS_CONTOLLER_COLLISION_BLOCK'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_CONTOLLER_COLLISION_BLOCK']

    @property
    def TASK_STATUS_SPIN_BLOCK_WITH_HUMAN(self):
        """Message constant 'TASK_STATUS_SPIN_BLOCK_WITH_HUMAN'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_SPIN_BLOCK_WITH_HUMAN']

    @property
    def TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN(self):
        """Message constant 'TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN']

    @property
    def TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN(self):
        """Message constant 'TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN']

    @property
    def TASK_STATUS_LOCAL_OPTIMAL_FAILED(self):
        """Message constant 'TASK_STATUS_LOCAL_OPTIMAL_FAILED'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_LOCAL_OPTIMAL_FAILED']

    @property
    def TASK_STATUS_GOBAL_PATH_BLOCK(self):
        """Message constant 'TASK_STATUS_GOBAL_PATH_BLOCK'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_GOBAL_PATH_BLOCK']

    @property
    def TASK_STATUS_RECOVERY_GLOBAL(self):
        """Message constant 'TASK_STATUS_RECOVERY_GLOBAL'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_RECOVERY_GLOBAL']

    @property
    def TASK_STATUS_RECOVERY_LOCAL(self):
        """Message constant 'TASK_STATUS_RECOVERY_LOCAL'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_RECOVERY_LOCAL']

    @property
    def TASK_STATUS_RECOVERY_TIMEOUT(self):
        """Message constant 'TASK_STATUS_RECOVERY_TIMEOUT'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_RECOVERY_TIMEOUT']

    @property
    def TASK_STATUS_EXPLORE_TO_RECOVERY(self):
        """Message constant 'TASK_STATUS_EXPLORE_TO_RECOVERY'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_EXPLORE_TO_RECOVERY']

    @property
    def TASK_STATUS_EXPLORE_SUCCESS(self):
        """Message constant 'TASK_STATUS_EXPLORE_SUCCESS'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_EXPLORE_SUCCESS']

    @property
    def TASK_STATUS_EXPLORE_FAILED(self):
        """Message constant 'TASK_STATUS_EXPLORE_FAILED'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_EXPLORE_FAILED']

    @property
    def TASK_STATUS_GOAL_BLOCK_CONTINUE(self):
        """Message constant 'TASK_STATUS_GOAL_BLOCK_CONTINUE'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_GOAL_BLOCK_CONTINUE']

    @property
    def TASK_STATUS_GOAL_BLOCK_ABORT(self):
        """Message constant 'TASK_STATUS_GOAL_BLOCK_ABORT'."""
        return Metaclass_PncTaskResponse.__constants['TASK_STATUS_GOAL_BLOCK_ABORT']


class PncTaskResponse(metaclass=Metaclass_PncTaskResponse):
    """
    Message class 'PncTaskResponse'.

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
      TASK_STATUS_UNKONW
      TASK_STATUS_RUNNING
      TASK_STATUS_FAILED
      TASK_STATUS_PAUSED
      TASK_STATUS_FINISHED
      TASK_STATUS_UNKNOW_BLOCK
      TASK_STATUS_SPIN_BLOCK
      TASK_STATUS_TRAJ_COLLISION_BLOCK
      TASK_STATUS_CONTOLLER_COLLISION_BLOCK
      TASK_STATUS_SPIN_BLOCK_WITH_HUMAN
      TASK_STATUS_TRAJ_COLLISION_BLOCK_WITH_HUMAN
      TASK_STATUS_CONTOLLER_COLLISION_BLOCK_WITH_HUMAN
      TASK_STATUS_LOCAL_OPTIMAL_FAILED
      TASK_STATUS_GOBAL_PATH_BLOCK
      TASK_STATUS_RECOVERY_GLOBAL
      TASK_STATUS_RECOVERY_LOCAL
      TASK_STATUS_RECOVERY_TIMEOUT
      TASK_STATUS_EXPLORE_TO_RECOVERY
      TASK_STATUS_EXPLORE_SUCCESS
      TASK_STATUS_EXPLORE_FAILED
      TASK_STATUS_GOAL_BLOCK_CONTINUE
      TASK_STATUS_GOAL_BLOCK_ABORT
    """

    __slots__ = [
        '_header',
        '_task_type',
        '_task_id',
        '_map_id',
        '_task_status',
        '_reserve_info',
    ]

    _fields_and_field_types = {
        'header': 'aimdk_msgs/MessageHeader',
        'task_type': 'uint8',
        'task_id': 'uint64',
        'map_id': 'uint64',
        'task_status': 'uint8',
        'reserve_info': 'uint8[64]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'MessageHeader'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 64),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from aimdk_msgs.msg import MessageHeader
        self.header = kwargs.get('header', MessageHeader())
        self.task_type = kwargs.get('task_type', int())
        self.task_id = kwargs.get('task_id', int())
        self.map_id = kwargs.get('map_id', int())
        self.task_status = kwargs.get('task_status', int())
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
        if self.task_id != other.task_id:
            return False
        if self.map_id != other.map_id:
            return False
        if self.task_status != other.task_status:
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
    def task_status(self):
        """Message field 'task_status'."""
        return self._task_status

    @task_status.setter
    def task_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'task_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'task_status' field must be an unsigned integer in [0, 255]"
        self._task_status = value

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
