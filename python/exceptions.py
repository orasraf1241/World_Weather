def div(a, b):
    """This funcs divide to numbers"""
    try:
        return a / b
    except ZeroDivisionError:
        print("tried to divide by zero")
        return None
    except TypeError:
        print("Your input not good")



if __name__ == "__main__":
    div(1, "0")
    div(1, 0)
    print(div(1, 5))
    print("File1 __name__ = %s" %__name__)