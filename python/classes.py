import math
import numbers


class Point:
    """this class create point you cant insert only int by defult is (0,0)"""

    def __init__(self, x=0.0, y=0.0):
        if isinstance(x, numbers.Number) and isinstance(y, numbers.Number):
            self.x = float(x)
            self.y = float(y)
        else:
            raise TypeError("you need to insert a number ")

    def distance_from_origin(self):
        """this func check the distance"""
        return math.sqrt(self.x ** 2 + self.y ** 2)

    def __str__(self):
        rep = 'this is point the x vlaue is:' + str(self.x) + 'and y is:' + str(self.y)
        return rep


class X:
    """Exampel class"""

    def __init__(self, a, b):
        self.a = a
        self.b = b

    def foo(self):
        print("foooooooooooooo")


class B:
    def foo(self):
        return "B"


class D(B):
    def foo(self):
        return "D"

    def bar(self):
        print("or is the king")


class E(D):
    def foo(self):
        return "E"


if __name__ == "__main__":
    """question 11"""
    b = B()
    d = D()
    e = E()
    e.bar()

    print(issubclass(TypeError, BaseException))
    a = Point(1, 1)
    # for i in a.__dict__:
    #     print(i)
    print(a.__repr__())
    # print(a.distance_from_origin())
    # print(a.x, a.y)
