# generated from rosidl_generator_py/resource/_idl.py.em
# with input from aimdk_msgs:msg/FixLineIntroState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FixLineIntroState(type):
    """Metaclass of message 'FixLineIntroState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE': 0,
        'TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS': 1,
        'TM_FIX_LINE_INTRO_STATE_NAVI_RETURN': 2,
        'TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI': 3,
        'TM_FIX_LINE_INTRO_STATE_POI_ACTIONS': 4,
        'TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS': 5,
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
                'aimdk_msgs.msg.FixLineIntroState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fix_line_intro_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fix_line_intro_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fix_line_intro_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fix_line_intro_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fix_line_intro_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE': cls.__constants['TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE'],
            'TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS': cls.__constants['TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS'],
            'TM_FIX_LINE_INTRO_STATE_NAVI_RETURN': cls.__constants['TM_FIX_LINE_INTRO_STATE_NAVI_RETURN'],
            'TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI': cls.__constants['TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI'],
            'TM_FIX_LINE_INTRO_STATE_POI_ACTIONS': cls.__constants['TM_FIX_LINE_INTRO_STATE_POI_ACTIONS'],
            'TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS': cls.__constants['TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS'],
        }

    @property
    def TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE(self):
        """Message constant 'TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE'."""
        return Metaclass_FixLineIntroState.__constants['TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE']

    @property
    def TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS(self):
        """Message constant 'TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS'."""
        return Metaclass_FixLineIntroState.__constants['TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS']

    @property
    def TM_FIX_LINE_INTRO_STATE_NAVI_RETURN(self):
        """Message constant 'TM_FIX_LINE_INTRO_STATE_NAVI_RETURN'."""
        return Metaclass_FixLineIntroState.__constants['TM_FIX_LINE_INTRO_STATE_NAVI_RETURN']

    @property
    def TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI(self):
        """Message constant 'TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI'."""
        return Metaclass_FixLineIntroState.__constants['TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI']

    @property
    def TM_FIX_LINE_INTRO_STATE_POI_ACTIONS(self):
        """Message constant 'TM_FIX_LINE_INTRO_STATE_POI_ACTIONS'."""
        return Metaclass_FixLineIntroState.__constants['TM_FIX_LINE_INTRO_STATE_POI_ACTIONS']

    @property
    def TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS(self):
        """Message constant 'TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS'."""
        return Metaclass_FixLineIntroState.__constants['TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS']


class FixLineIntroState(metaclass=Metaclass_FixLineIntroState):
    """
    Message class 'FixLineIntroState'.

    Constants:
      TM_FIX_LINE_INTRO_STATE_NAVI_TO_NEXT_SITE
      TM_FIX_LINE_INTRO_STATE_SITE_ACTIONS
      TM_FIX_LINE_INTRO_STATE_NAVI_RETURN
      TM_FIX_LINE_INTRO_STATE_NAVI_TO_TARGET_POI
      TM_FIX_LINE_INTRO_STATE_POI_ACTIONS
      TM_FIX_LINE_INTRO_STATE_STANDBY_ACTIONS
    """

    __slots__ = [
        '_set_task_id',
        '_set_task_name',
        '_task_name',
        '_task_id',
        '_map_name',
        '_map_id',
        '_rest_site_number',
        '_fix_line_intro_state',
        '_cur_target_id',
    ]

    _fields_and_field_types = {
        'set_task_id': 'uint64',
        'set_task_name': 'string',
        'task_name': 'string',
        'task_id': 'uint64',
        'map_name': 'string',
        'map_id': 'uint64',
        'rest_site_number': 'uint32',
        'fix_line_intro_state': 'uint8',
        'cur_target_id': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.set_task_id = kwargs.get('set_task_id', int())
        self.set_task_name = kwargs.get('set_task_name', str())
        self.task_name = kwargs.get('task_name', str())
        self.task_id = kwargs.get('task_id', int())
        self.map_name = kwargs.get('map_name', str())
        self.map_id = kwargs.get('map_id', int())
        self.rest_site_number = kwargs.get('rest_site_number', int())
        self.fix_line_intro_state = kwargs.get('fix_line_intro_state', int())
        self.cur_target_id = kwargs.get('cur_target_id', int())

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
        if self.set_task_id != other.set_task_id:
            return False
        if self.set_task_name != other.set_task_name:
            return False
        if self.task_name != other.task_name:
            return False
        if self.task_id != other.task_id:
            return False
        if self.map_name != other.map_name:
            return False
        if self.map_id != other.map_id:
            return False
        if self.rest_site_number != other.rest_site_number:
            return False
        if self.fix_line_intro_state != other.fix_line_intro_state:
            return False
        if self.cur_target_id != other.cur_target_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def set_task_id(self):
        """Message field 'set_task_id'."""
        return self._set_task_id

    @set_task_id.setter
    def set_task_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_task_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'set_task_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._set_task_id = value

    @builtins.property
    def set_task_name(self):
        """Message field 'set_task_name'."""
        return self._set_task_name

    @set_task_name.setter
    def set_task_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'set_task_name' field must be of type 'str'"
        self._set_task_name = value

    @builtins.property
    def task_name(self):
        """Message field 'task_name'."""
        return self._task_name

    @task_name.setter
    def task_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task_name' field must be of type 'str'"
        self._task_name = value

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
    def rest_site_number(self):
        """Message field 'rest_site_number'."""
        return self._rest_site_number

    @rest_site_number.setter
    def rest_site_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rest_site_number' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'rest_site_number' field must be an unsigned integer in [0, 4294967295]"
        self._rest_site_number = value

    @builtins.property
    def fix_line_intro_state(self):
        """Message field 'fix_line_intro_state'."""
        return self._fix_line_intro_state

    @fix_line_intro_state.setter
    def fix_line_intro_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fix_line_intro_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fix_line_intro_state' field must be an unsigned integer in [0, 255]"
        self._fix_line_intro_state = value

    @builtins.property
    def cur_target_id(self):
        """Message field 'cur_target_id'."""
        return self._cur_target_id

    @cur_target_id.setter
    def cur_target_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cur_target_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'cur_target_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._cur_target_id = value
