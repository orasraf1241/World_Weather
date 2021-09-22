def div(a, b):
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
