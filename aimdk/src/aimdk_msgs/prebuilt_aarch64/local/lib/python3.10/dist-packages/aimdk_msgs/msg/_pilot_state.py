# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/PilotState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PilotState(type):
    """Metaclass of message 'PilotState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TM_PILOT_STATE_NAVI_TO_TARGET': 0,
        'TM_PILOT_STATE_TARGET_ACTIONS': 1,
        'TM_PILOT_STATE_NAVI_RETURN': 2,
        'TM_PILOT_STATE_STANDBY_ACTIONS': 3,
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
                'aimdk_msgs.msg.PilotState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pilot_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pilot_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pilot_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pilot_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pilot_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TM_PILOT_STATE_NAVI_TO_TARGET': cls.__constants['TM_PILOT_STATE_NAVI_TO_TARGET'],
            'TM_PILOT_STATE_TARGET_ACTIONS': cls.__constants['TM_PILOT_STATE_TARGET_ACTIONS'],
            'TM_PILOT_STATE_NAVI_RETURN': cls.__constants['TM_PILOT_STATE_NAVI_RETURN'],
            'TM_PILOT_STATE_STANDBY_ACTIONS': cls.__constants['TM_PILOT_STATE_STANDBY_ACTIONS'],
        }

    @property
    def TM_PILOT_STATE_NAVI_TO_TARGET(self):
        """Message constant 'TM_PILOT_STATE_NAVI_TO_TARGET'."""
        return Metaclass_PilotState.__constants['TM_PILOT_STATE_NAVI_TO_TARGET']

    @property
    def TM_PILOT_STATE_TARGET_ACTIONS(self):
        """Message constant 'TM_PILOT_STATE_TARGET_ACTIONS'."""
        return Metaclass_PilotState.__constants['TM_PILOT_STATE_TARGET_ACTIONS']

    @property
    def TM_PILOT_STATE_NAVI_RETURN(self):
        """Message constant 'TM_PILOT_STATE_NAVI_RETURN'."""
        return Metaclass_PilotState.__constants['TM_PILOT_STATE_NAVI_RETURN']

    @property
    def TM_PILOT_STATE_STANDBY_ACTIONS(self):
        """Message constant 'TM_PILOT_STATE_STANDBY_ACTIONS'."""
        return Metaclass_PilotState.__constants['TM_PILOT_STATE_STANDBY_ACTIONS']


class PilotState(metaclass=Metaclass_PilotState):
    """
    Message class 'PilotState'.

    Constants:
      TM_PILOT_STATE_NAVI_TO_TARGET
      TM_PILOT_STATE_TARGET_ACTIONS
      TM_PILOT_STATE_NAVI_RETURN
      TM_PILOT_STATE_STANDBY_ACTIONS
    """

    __slots__ = [
        '_target_name',
        '_target_id',
        '_intro_task_name',
        '_intro_task_id',
        '_map_name',
        '_map_id',
        '_pilot_state',
    ]

    _fields_and_field_types = {
        'target_name': 'string',
        'target_id': 'uint64',
        'intro_task_name': 'string',
        'intro_task_id': 'uint64',
        'map_name': 'string',
        'map_id': 'uint64',
        'pilot_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_name = kwargs.get('target_name', str())
        self.target_id = kwargs.get('target_id', int())
        self.intro_task_name = kwargs.get('intro_task_name', str())
        self.intro_task_id = kwargs.get('intro_task_id', int())
        self.map_name = kwargs.get('map_name', str())
        self.map_id = kwargs.get('map_id', int())
        self.pilot_state = kwargs.get('pilot_state', int())

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
        if self.target_name != other.target_name:
            return False
        if self.target_id != other.target_id:
            return False
        if self.intro_task_name != other.intro_task_name:
            return False
        if self.intro_task_id != other.intro_task_id:
            return False
        if self.map_name != other.map_name:
            return False
        if self.map_id != other.map_id:
            return False
        if self.pilot_state != other.pilot_state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_name(self):
        """Message field 'target_name'."""
        return self._target_name

    @target_name.setter
    def target_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_name' field must be of type 'str'"
        self._target_name = value

    @builtins.property
    def target_id(self):
        """Message field 'target_id'."""
        return self._target_id

    @target_id.setter
    def target_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'target_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._target_id = value

    @builtins.property
    def intro_task_name(self):
        """Message field 'intro_task_name'."""
        return self._intro_task_name

    @intro_task_name.setter
    def intro_task_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'intro_task_name' field must be of type 'str'"
        self._intro_task_name = value

    @builtins.property
    def intro_task_id(self):
        """Message field 'intro_task_id'."""
        return self._intro_task_id

    @intro_task_id.setter
    def intro_task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'intro_task_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'intro_task_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._intro_task_id = value

    @builtins.property
    def map_name(self):
        """Message field 'map_name'."""
        return self._map_name

    @map_name.setter
    def map_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'map_name' field must be of type 'str'"
        self._map_name = value

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
    def pilot_state(self):
        """Message field 'pilot_state'."""
        return self._pilot_state

    @pilot_state.setter
    def pilot_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pilot_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pilot_state' field must be an unsigned integer in [0, 255]"
        self._pilot_state = value
