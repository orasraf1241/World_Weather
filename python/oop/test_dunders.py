class Calculator:

    def add_numbers(num1, num2):
        return num1 + num2


class ItayHomo:
    a = [1, 2, 3, 5, 5]
    @staticmethod
    def p_print():
        return "we dont need self "


class Dates:
    def __init__(self, date):
        self.date = date

    def getDate(self):
        return self.date

    @staticmethod
    def toDashDate(date):
        return date.replace("/", "-")


class Point:
    a = 56

    def __init__(self, x=0.0, y=0.0):
        self.x = x
        self.y = y

    def __str__(self):
        return "(" + str(self.x) + "," + str(self.y) + ")"

    @staticmethod
    def foo():
        """or  asdasd asaf"""
        print("is static method")

    def __add__(self, other):
        x = self.x + other.x
        y = self.y + other.y
        return Point(x, y)


def foo():
    return "foo"


def bar():
    return "bar"


class Example:
    def __init__(self):
        print("Instance Created")

    # Defining __call__ method
    def __call__(self, a, b):
        print(a * b)




# __call__ method will be called
if __name__ == "__main__":
    p1 = Point(1, 2)
    p5 = p1.__dict__
    p2 = Point(1, 2)
    print(p1.foo.__doc__)
    print(id(p1))
    p1 += p2
    print(id(p1))
    foo, bar = bar, foo
    print(foo(),bar())
    print(Point.foo())

    # Instance created
    ans = Example()
    ans(10, 20)
