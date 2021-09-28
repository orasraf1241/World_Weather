def div(a, b):
    """This funcs divide to numbers"""
    try:
        return a / b
        print("or asrf")
    except ZeroDivisionError:
        print("tried to divide by zero")
        return None
    except TypeError:
        print("Your input not good")
    print("or as212")


if __name__ == "__main__":
    div(1, "0")
    div(1, 0)
    print(div(1, 5))
    print("File1 __name__ = %s" %__name__)