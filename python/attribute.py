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
            super(Y, self).__setattr__(key, value)
        else:
            raise AttributeError("you cant add a new attribute")


if __name__ == "__main__":
    a = X(1)
    y = Y(1)
    print(a.a)
    print(y.a)
    y.x = 5
    X(1).b