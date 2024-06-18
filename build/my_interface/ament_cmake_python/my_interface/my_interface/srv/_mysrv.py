# generated from rosidl_generator_py/resource/_idl.py.em
# with input from my_interface:srv/Mysrv.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mysrv_Request(type):
    """Metaclass of message 'Mysrv_Request'."""

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
            module = import_type_support('my_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interface.srv.Mysrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mysrv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mysrv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mysrv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mysrv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mysrv__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mysrv_Request(metaclass=Metaclass_Mysrv_Request):
    """Message class 'Mysrv_Request'."""

    __slots__ = [
        '_first',
        '_second',
    ]

    _fields_and_field_types = {
        'first': 'int64',
        'second': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.first = kwargs.get('first', int())
        self.second = kwargs.get('second', int())

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
        if self.first != other.first:
            return False
        if self.second != other.second:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def first(self):
        """Message field 'first'."""
        return self._first

    @first.setter
    def first(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'first' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'first' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._first = value

    @builtins.property
    def second(self):
        """Message field 'second'."""
        return self._second

    @second.setter
    def second(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'second' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'second' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._second = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Mysrv_Response(type):
    """Metaclass of message 'Mysrv_Response'."""

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
            module = import_type_support('my_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interface.srv.Mysrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__mysrv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__mysrv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__mysrv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__mysrv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__mysrv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mysrv_Response(metaclass=Metaclass_Mysrv_Response):
    """Message class 'Mysrv_Response'."""

    __slots__ = [
        '_sum',
        '_multiply',
        '_division',
    ]

    _fields_and_field_types = {
        'sum': 'int64',
        'multiply': 'int64',
        'division': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sum = kwargs.get('sum', int())
        self.multiply = kwargs.get('multiply', int())
        self.division = kwargs.get('division', float())

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
        if self.sum != other.sum:
            return False
        if self.multiply != other.multiply:
            return False
        if self.division != other.division:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def sum(self):  # noqa: A003
        """Message field 'sum'."""
        return self._sum

    @sum.setter  # noqa: A003
    def sum(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sum' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sum' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sum = value

    @builtins.property
    def multiply(self):
        """Message field 'multiply'."""
        return self._multiply

    @multiply.setter
    def multiply(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'multiply' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'multiply' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._multiply = value

    @builtins.property
    def division(self):
        """Message field 'division'."""
        return self._division

    @division.setter
    def division(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'division' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'division' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._division = value


class Metaclass_Mysrv(type):
    """Metaclass of service 'Mysrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('my_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'my_interface.srv.Mysrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__mysrv

            from my_interface.srv import _mysrv
            if _mysrv.Metaclass_Mysrv_Request._TYPE_SUPPORT is None:
                _mysrv.Metaclass_Mysrv_Request.__import_type_support__()
            if _mysrv.Metaclass_Mysrv_Response._TYPE_SUPPORT is None:
                _mysrv.Metaclass_Mysrv_Response.__import_type_support__()


class Mysrv(metaclass=Metaclass_Mysrv):
    from my_interface.srv._mysrv import Mysrv_Request as Request
    from my_interface.srv._mysrv import Mysrv_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
