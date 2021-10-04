class X:

    __slots__ = 'a'

    def __init__(self, a):
        self.a = a

    def __getattr__(self, item):
        """Exercises 1 - when you try to access to non exsiting instance attributes """
        print("Impossible to find an attribute named ",item)


class Y:
    def __init__(self, a):
        self.a = a

    def __getattr__(self, item):
        """Exercises 1 - when you try to access to non exsiting instance attributes """
        print("Impossible to find an attribute named ",item)

    def __setattr__(self, key, value):
        """Exception is raised when trying to add new attribute"""
        if key == 'a':
            self.a = value
        else:
            raise AttributeError("you cant add a new attribute")


if __name__ == "__main__":
    x = X(5)
    if x.b:
        print("test failed __slots__")
    else:
        print("successful , __slots__")

    x.b = 10
    if x.b:
        print("X __slots__")
    else:
        print("test successful ,__slots__ ")

    y = Y(10)

    try:
        y.b = 5
    except AttributeError:
        print("successful ,__setattr__")
    else:
        print("test failed, __setattr__")