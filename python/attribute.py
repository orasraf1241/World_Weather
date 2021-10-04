class Vehicle:
    """Question 3 - test"""
    kind = 'car'

    def __init__(self, manufacture, model):
        self.manufacture = manufacture
        self.model = model

    def __repr__(self):
        return "<{manu}, {model}>".format(manu=self.manufacture, modle=self.model)


class X:

    __slots__ = 'a'

    def __init__(self, a):
        self.a = a

    def __getattr__(self, item):
        """Exercises 1 - when you try to access to non exsiting instance attributes """
        print("Impossible to find an attribute named ",item)

    def __setattr__(self, key, value):
        """Exception is raised when trying to add new attribute"""
        if key == 'a':
            super(X, self).__setattr__(key, value)
        else:
            raise AttributeError("you cant add a new attribute")


if __name__ == "__main__":
    car = Vehicle("Toyota", "Corolla")
    car.x = 3
    a = X(1)
    a.c = 5
    X(1).b