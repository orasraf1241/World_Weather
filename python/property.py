from numbers import Number


class Point:
    """this class create point you cant insert only int by defult is (0,0)"""

    def __init__(self, x=0.0, y=0.0):
        """ Exercises 1 build constructor"""
        if isinstance(x, Number) and isinstance(y, Number):
            self.__x = float(x)
            self.__y = float(y)
        else:
            self.x = 0
            self.y = 0
            print("you need to insert a number ")

    @property
    def x(self):
        return self.__x

    @x.setter
    def x(self, val):
        if isinstance(val, Number):
            self.__x = val
        else:
            raise TypeError("You need to insert a number !")

    @x.deleter
    def x1(self):
        """Delete method for x """
        print("You cant delete x")

    @property
    def y(self):
        """getter method"""
        return self.__y

    @y.setter
    def y(self, val):
        """set the data for y """
        if isinstance(self, val):
            self.__y = val
        else:
            raise TypeError("You need to insert a number !")

    @y.deleter
    def y(self):
        """Delete method for x """
        print("You cant delete x")

    def __str__(self):
        """Print the data"""
        return str(p.__x) + "," + str(p.__y)


class Property:
    """Exercises 2 implement descriptor class"""

    def __init__(self, fget, fset=None, fdel=None, doc=None):
        """constructor for property"""
        self.fget = fget
        self.fset = fset
        self.fdel = fdel

    def __get__(self, instance, objtype=None):
        """implementation geter for property class """
        if instance is None:
            return self
        if self.fget is None:
            raise AttributeError("No attribute")
        return self.fget(instance)

    def __set__(self, instance, value):
        """implementation setter for property class """
        if self.fset is None:
            raise AttributeError("cant set attribute")
        self.fset(instance, value)

    def __delete__(self, obj):
        """implementation delete for property class """
        if self.fdel is None:
            raise AttributeError("cant delete attribute")
        self.fdel(obj)

    def getter(self, fget):
        self.fget = fget
        return self

    def setter(self, fset):
        self.fset = fset
        return self

    def deleter(self, fdel):
        print("i am in dele func")
        self.fdel = fdel
        return self


class X:
    def __init__(self, val):
        """Constructor"""
        self.__x = int(val)

    @Property
    def x(self):
        """add the option for getter"""
        return self.__x

    @x.setter
    def x(self, val):
        """add the option for setter"""
        self.__x = int(val)

    @x.deleter
    def x(self):
        """add the option for del object """
        print("i am in dele func")
        del self.__x


if __name__ == "__main__":
    """EX1"""
    p = Point(3, 3)
    p.x = 10
    del p.x
    print(p)


    """EX2"""
    a = X(0)
    print(a.x)
    a.x = 1
    del (a.x)
