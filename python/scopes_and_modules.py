from MyPackage import *
import types_and_loops as tal


def is_global_var(var_name):
    """Exercises 1 - This funcs check if "v" in the global vars """
    if var_name in globals():
        print("The name you looking for is global ", var_name)


if __name__ == "__main__":
    _bar()
    bar()
    foo()
    _foo()

    var = "or"
    print(tal.revers(123456))  # EX2
    is_global_var('var')
