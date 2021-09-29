import math
import numbers


class Point:
    """this class create point you cant insert only int by defult is (0,0)"""

    def __init__(self, x=0.0, y=0.0):
        if isinstance(x, numbers.Number) and isinstance(y, numbers.Number):
            self.x = float(x)
            self.y = float(y)
        else:
            self.x = 0
            self.y = 0
            print("you need to insert a number ")

    def distance_from_origin(self):
        return math.sqrt(self.x**2 + self.y ** 2)


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


if __name__ == "__main__":
    """question 11"""

    a = Point(1, 1)
    print(a.distance_from_origin())
    print(a.x, a.y)

