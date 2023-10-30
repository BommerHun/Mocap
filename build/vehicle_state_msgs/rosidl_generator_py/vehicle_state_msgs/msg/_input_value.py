# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vehicle_state_msgs:msg/InputValue.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InputValue(type):
    """Metaclass of message 'InputValue'."""

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
            module = import_type_support('vehicle_state_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vehicle_state_msgs.msg.InputValue')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__input_value
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__input_value
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__input_value
            cls._TYPE_SUPPORT = module.type_support_msg__msg__input_value
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__input_value

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InputValue(metaclass=Metaclass_InputValue):
    """Message class 'InputValue'."""

    __slots__ = [
        '_header',
        '_position_x',
        '_position_y',
        '_velocity_x',
        '_velocity_y',
        '_heading_angle',
        '_omega',
        '_duty_cycle',
        '_delta',
        '_erpm',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'position_x': 'double',
        'position_y': 'double',
        'velocity_x': 'double',
        'velocity_y': 'double',
        'heading_angle': 'double',
        'omega': 'double',
        'duty_cycle': 'double',
        'delta': 'double',
        'erpm': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.position_x = kwargs.get('position_x', float())
        self.position_y = kwargs.get('position_y', float())
        self.velocity_x = kwargs.get('velocity_x', float())
        self.velocity_y = kwargs.get('velocity_y', float())
        self.heading_angle = kwargs.get('heading_angle', float())
        self.omega = kwargs.get('omega', float())
        self.duty_cycle = kwargs.get('duty_cycle', float())
        self.delta = kwargs.get('delta', float())
        self.erpm = kwargs.get('erpm', float())

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
        if self.position_x != other.position_x:
            return False
        if self.position_y != other.position_y:
            return False
        if self.velocity_x != other.velocity_x:
            return False
        if self.velocity_y != other.velocity_y:
            return False
        if self.heading_angle != other.heading_angle:
            return False
        if self.omega != other.omega:
            return False
        if self.duty_cycle != other.duty_cycle:
            return False
        if self.delta != other.delta:
            return False
        if self.erpm != other.erpm:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def position_x(self):
        """Message field 'position_x'."""
        return self._position_x

    @position_x.setter
    def position_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_x' field must be of type 'float'"
        self._position_x = value

    @property
    def position_y(self):
        """Message field 'position_y'."""
        return self._position_y

    @position_y.setter
    def position_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_y' field must be of type 'float'"
        self._position_y = value

    @property
    def velocity_x(self):
        """Message field 'velocity_x'."""
        return self._velocity_x

    @velocity_x.setter
    def velocity_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_x' field must be of type 'float'"
        self._velocity_x = value

    @property
    def velocity_y(self):
        """Message field 'velocity_y'."""
        return self._velocity_y

    @velocity_y.setter
    def velocity_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_y' field must be of type 'float'"
        self._velocity_y = value

    @property
    def heading_angle(self):
        """Message field 'heading_angle'."""
        return self._heading_angle

    @heading_angle.setter
    def heading_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_angle' field must be of type 'float'"
        self._heading_angle = value

    @property
    def omega(self):
        """Message field 'omega'."""
        return self._omega

    @omega.setter
    def omega(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'omega' field must be of type 'float'"
        self._omega = value

    @property
    def duty_cycle(self):
        """Message field 'duty_cycle'."""
        return self._duty_cycle

    @duty_cycle.setter
    def duty_cycle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'duty_cycle' field must be of type 'float'"
        self._duty_cycle = value

    @property
    def delta(self):
        """Message field 'delta'."""
        return self._delta

    @delta.setter
    def delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta' field must be of type 'float'"
        self._delta = value

    @property
    def erpm(self):
        """Message field 'erpm'."""
        return self._erpm

    @erpm.setter
    def erpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'erpm' field must be of type 'float'"
        self._erpm = value
