import math
import numbers


class Point:
    """this class create point you cant insert only int by defult is (0,0)"""
    __counter = 0

    def __init__(self, x=0.0, y=0.0):
        if isinstance(x, numbers.Number) and isinstance(y, numbers.Number):
            self.x = float(x)
            self.y = float(y)
            Point.__counter += 1
        else:
            self.x = 0
            self.y = 0
            print("you need to insert a number ")

    def __del__(self):
        Point.__counter -= 1
        del self

    def __str__(self):
        """This method print the x and y var """
        return "Point" + "(" + str(self.x) + "," + str(self.y) + ")"

    def __add__(self, other):
        """this method take 2 Point and addition aim and return new point"""
        x = self.x + other.x
        y = self.y + other.y
        return Point(x, y)

    def __iadd__(self, other):
        """this method take 2 Point and addition aim and return new point"""
        self.x += other.x
        self.y += other.y
        return self

    def __sub__(self, other):
        """this method take 2 Point and sun aim and return new point"""
        x = self.x - other.x
        y = self.y - other.y
        return Point(x, y)

    def __isub__(self, other):
        """this method take 2 Point and sun aim and return new point"""
        self.x -= other.x
        self.y -= other.y
        return self

    def __mul__(self, other):
        x = self.x * other.x
        y = self.y * other.y
        return Point(x, y)

    def __imul__(self, other):
        self.x *= other
        self.y *= other
        return self

    def __len__(self):
        return len(self.__dict__)

    def __truediv__(self, other):
        if other.x != 0 and other.y != 0:
            x = self.x / other.x
            y = self.y / other.y
        return Point(x, y)

    def __itruediv__(self, other):
        if other.x != 0:
            self.x /= other
            self.y /= other
        return self

    @staticmethod
    def get_counter():
        return Point.__counter

    def distance_from_origin(self):
        """this func check the distance"""
        return math.sqrt(self.x ** 2 + self.y ** 2)


if __name__ == "__main__":
    """EX1 """
    a = Point(2, 2)
    b = Point(2, 2)
    c = Point(1, 2, 3)
    # a /= 2
    print(c)
    a.z = 5

    print(a.__len__())

    """EX2"""
    # print(a*b)
    print(id(a))

    p1_id = id(a)
    print(a)
    print(id(a) == p1_id)

    list_of_point = []
    for i in range(10):
        list_of_point.append(Point())
    print(Point.get_counter())
    for i in range(10):
        list_of_point[i].__del__()
    print(Point.get_counter())
