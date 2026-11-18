# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/TaskMasterState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TaskMasterState(type):
    """Metaclass of message 'TaskMasterState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TM_MAIN_STATE_IDLE': 0,
        'TM_MAIN_STATE_RELOCALIZATION': 1,
        'TM_MAIN_STATE_MAPPING': 2,
        'TM_MAIN_STATE_FIX_LINE_INTRO': 3,
        'TM_MAIN_STATE_RECORDING_PATH': 4,
        'TM_MAIN_STATE_PILOT': 5,
        'TM_SUB_STATE_NONE': 0,
        'TM_SUB_STATE_RESUME': 1,
        'TM_SUB_STATE_PAUSE': 2,
        'SLAM_STATE_IDLE': 0,
        'SLAM_STATE_RELOCALIZATION': 1,
        'SLAM_STATE_MAPPING': 2,
        'SLAM_STATE_LOCALIZATION': 3,
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
                'aimdk_msgs.msg.TaskMasterState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__task_master_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__task_master_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__task_master_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__task_master_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__task_master_state

            from aimdk_msgs.msg import FixLineIntroState
            if FixLineIntroState.__class__._TYPE_SUPPORT is None:
                FixLineIntroState.__class__.__import_type_support__()

            from aimdk_msgs.msg import PilotState
            if PilotState.__class__._TYPE_SUPPORT is None:
                PilotState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TM_MAIN_STATE_IDLE': cls.__constants['TM_MAIN_STATE_IDLE'],
            'TM_MAIN_STATE_RELOCALIZATION': cls.__constants['TM_MAIN_STATE_RELOCALIZATION'],
            'TM_MAIN_STATE_MAPPING': cls.__constants['TM_MAIN_STATE_MAPPING'],
            'TM_MAIN_STATE_FIX_LINE_INTRO': cls.__constants['TM_MAIN_STATE_FIX_LINE_INTRO'],
            'TM_MAIN_STATE_RECORDING_PATH': cls.__constants['TM_MAIN_STATE_RECORDING_PATH'],
            'TM_MAIN_STATE_PILOT': cls.__constants['TM_MAIN_STATE_PILOT'],
            'TM_SUB_STATE_NONE': cls.__constants['TM_SUB_STATE_NONE'],
            'TM_SUB_STATE_RESUME': cls.__constants['TM_SUB_STATE_RESUME'],
            'TM_SUB_STATE_PAUSE': cls.__constants['TM_SUB_STATE_PAUSE'],
            'SLAM_STATE_IDLE': cls.__constants['SLAM_STATE_IDLE'],
            'SLAM_STATE_RELOCALIZATION': cls.__constants['SLAM_STATE_RELOCALIZATION'],
            'SLAM_STATE_MAPPING': cls.__constants['SLAM_STATE_MAPPING'],
            'SLAM_STATE_LOCALIZATION': cls.__constants['SLAM_STATE_LOCALIZATION'],
        }

    @property
    def TM_MAIN_STATE_IDLE(self):
        """Message constant 'TM_MAIN_STATE_IDLE'."""
        return Metaclass_TaskMasterState.__constants['TM_MAIN_STATE_IDLE']

    @property
    def TM_MAIN_STATE_RELOCALIZATION(self):
        """Message constant 'TM_MAIN_STATE_RELOCALIZATION'."""
        return Metaclass_TaskMasterState.__constants['TM_MAIN_STATE_RELOCALIZATION']

    @property
    def TM_MAIN_STATE_MAPPING(self):
        """Message constant 'TM_MAIN_STATE_MAPPING'."""
        return Metaclass_TaskMasterState.__constants['TM_MAIN_STATE_MAPPING']

    @property
    def TM_MAIN_STATE_FIX_LINE_INTRO(self):
        """Message constant 'TM_MAIN_STATE_FIX_LINE_INTRO'."""
        return Metaclass_TaskMasterState.__constants['TM_MAIN_STATE_FIX_LINE_INTRO']

    @property
    def TM_MAIN_STATE_RECORDING_PATH(self):
        """Message constant 'TM_MAIN_STATE_RECORDING_PATH'."""
        return Metaclass_TaskMasterState.__constants['TM_MAIN_STATE_RECORDING_PATH']

    @property
    def TM_MAIN_STATE_PILOT(self):
        """Message constant 'TM_MAIN_STATE_PILOT'."""
        return Metaclass_TaskMasterState.__constants['TM_MAIN_STATE_PILOT']

    @property
    def TM_SUB_STATE_NONE(self):
        """Message constant 'TM_SUB_STATE_NONE'."""
        return Metaclass_TaskMasterState.__constants['TM_SUB_STATE_NONE']

    @property
    def TM_SUB_STATE_RESUME(self):
        """Message constant 'TM_SUB_STATE_RESUME'."""
        return Metaclass_TaskMasterState.__constants['TM_SUB_STATE_RESUME']

    @property
    def TM_SUB_STATE_PAUSE(self):
        """Message constant 'TM_SUB_STATE_PAUSE'."""
        return Metaclass_TaskMasterState.__constants['TM_SUB_STATE_PAUSE']

    @property
    def SLAM_STATE_IDLE(self):
        """Message constant 'SLAM_STATE_IDLE'."""
        return Metaclass_TaskMasterState.__constants['SLAM_STATE_IDLE']

    @property
    def SLAM_STATE_RELOCALIZATION(self):
        """Message constant 'SLAM_STATE_RELOCALIZATION'."""
        return Metaclass_TaskMasterState.__constants['SLAM_STATE_RELOCALIZATION']

    @property
    def SLAM_STATE_MAPPING(self):
        """Message constant 'SLAM_STATE_MAPPING'."""
        return Metaclass_TaskMasterState.__constants['SLAM_STATE_MAPPING']

    @property
    def SLAM_STATE_LOCALIZATION(self):
        """Message constant 'SLAM_STATE_LOCALIZATION'."""
        return Metaclass_TaskMasterState.__constants['SLAM_STATE_LOCALIZATION']


class TaskMasterState(metaclass=Metaclass_TaskMasterState):
    """
    Message class 'TaskMasterState'.

    Constants:
      TM_MAIN_STATE_IDLE
      TM_MAIN_STATE_RELOCALIZATION
      TM_MAIN_STATE_MAPPING
      TM_MAIN_STATE_FIX_LINE_INTRO
      TM_MAIN_STATE_RECORDING_PATH
      TM_MAIN_STATE_PILOT
      TM_SUB_STATE_NONE
      TM_SUB_STATE_RESUME
      TM_SUB_STATE_PAUSE
      SLAM_STATE_IDLE
      SLAM_STATE_RELOCALIZATION
      SLAM_STATE_MAPPING
      SLAM_STATE_LOCALIZATION
    """

    __slots__ = [
        '_main_state',
        '_sub_state',
        '_slam_state',
        '_loc_map_id',
        '_loc_map_name',
        '_fix_line_intro_state',
        '_pilot_state',
        '_reserve_info',
    ]

    _fields_and_field_types = {
        'main_state': 'uint8',
        'sub_state': 'uint8',
        'slam_state': 'uint8',
        'loc_map_id': 'uint64',
        'loc_map_name': 'string',
        'fix_line_intro_state': 'aimdk_msgs/FixLineIntroState',
        'pilot_state': 'aimdk_msgs/PilotState',
        'reserve_info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'FixLineIntroState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['aimdk_msgs', 'msg'], 'PilotState'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.main_state = kwargs.get('main_state', int())
        self.sub_state = kwargs.get('sub_state', int())
        self.slam_state = kwargs.get('slam_state', int())
        self.loc_map_id = kwargs.get('loc_map_id', int())
        self.loc_map_name = kwargs.get('loc_map_name', str())
        from aimdk_msgs.msg import FixLineIntroState
        self.fix_line_intro_state = kwargs.get('fix_line_intro_state', FixLineIntroState())
        from aimdk_msgs.msg import PilotState
        self.pilot_state = kwargs.get('pilot_state', PilotState())
        self.reserve_info = kwargs.get('reserve_info', str())

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
        if self.main_state != other.main_state:
            return False
        if self.sub_state != other.sub_state:
            return False
        if self.slam_state != other.slam_state:
            return False
        if self.loc_map_id != other.loc_map_id:
            return False
        if self.loc_map_name != other.loc_map_name:
            return False
        if self.fix_line_intro_state != other.fix_line_intro_state:
            return False
        if self.pilot_state != other.pilot_state:
            return False
        if self.reserve_info != other.reserve_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def main_state(self):
        """Message field 'main_state'."""
        return self._main_state

    @main_state.setter
    def main_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'main_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'main_state' field must be an unsigned integer in [0, 255]"
        self._main_state = value

    @builtins.property
    def sub_state(self):
        """Message field 'sub_state'."""
        return self._sub_state

    @sub_state.setter
    def sub_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sub_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sub_state' field must be an unsigned integer in [0, 255]"
        self._sub_state = value

    @builtins.property
    def slam_state(self):
        """Message field 'slam_state'."""
        return self._slam_state

    @slam_state.setter
    def slam_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'slam_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'slam_state' field must be an unsigned integer in [0, 255]"
        self._slam_state = value

    @builtins.property
    def loc_map_id(self):
        """Message field 'loc_map_id'."""
        return self._loc_map_id

    @loc_map_id.setter
    def loc_map_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loc_map_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'loc_map_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._loc_map_id = value

    @builtins.property
    def loc_map_name(self):
        """Message field 'loc_map_name'."""
        return self._loc_map_name

    @loc_map_name.setter
    def loc_map_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'loc_map_name' field must be of type 'str'"
        self._loc_map_name = value

    @builtins.property
    def fix_line_intro_state(self):
        """Message field 'fix_line_intro_state'."""
        return self._fix_line_intro_state

    @fix_line_intro_state.setter
    def fix_line_intro_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import FixLineIntroState
            assert \
                isinstance(value, FixLineIntroState), \
                "The 'fix_line_intro_state' field must be a sub message of type 'FixLineIntroState'"
        self._fix_line_intro_state = value

    @builtins.property
    def pilot_state(self):
        """Message field 'pilot_state'."""
        return self._pilot_state

    @pilot_state.setter
    def pilot_state(self, value):
        if __debug__:
            from aimdk_msgs.msg import PilotState
            assert \
                isinstance(value, PilotState), \
                "The 'pilot_state' field must be a sub message of type 'PilotState'"
        self._pilot_state = value

    @builtins.property
    def reserve_info(self):
        """Message field 'reserve_info'."""
        return self._reserve_info

    @reserve_info.setter
    def reserve_info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reserve_info' field must be of type 'str'"
        self._reserve_info = value
