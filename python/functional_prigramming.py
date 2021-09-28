import operator
from functools import reduce


# -------------------Ex1-------------------


def sigma1(*numbers):
    """Exercises 1: This funcs take list of int and sum all the number """
    sum_of_list = 0
    for x in numbers:
        sum_of_list += x
    return sum_of_list


def sigma2(*numbers):
    """Exercises 1: This funcs take list of int and sum all the number """
    return sum(numbers)


def sigma3(*numbers):
    """Exercises 1: This funcs take list of int and sum all the number """
    return reduce(operator.add, numbers)


# -------------------Ex2-------------------
def even_list():
    """Exercises 2 this fumcs print all the even number from 1 to 100 """
    return [x if x % 2 == 0 else "even" for x in range(100)]


# -------------EX3__----------------------------------
def map_func(number):
    if number % 7 == 0 or number % 10 == 7:
        return "BOOM"
    else:
        return number


def seven_boom1(number):
    """Exercises 3: using list comprehension this funcs receive number and return a "7-BOOM" list from 0 to number"""
    return [i if i == 0 else "BOOM" if i % 7 == 0 or i % 10 == 7 else i for i in range(1, number)]


def seven_boom2(number):
    """Exercises 3: using list comprehension this funcs receive number and return a "7-BOOM" list from 0 to number"""
    new_list = [x for x in range(1, number)]
    x = map(map_func, new_list)
    return list(x)


def seven_boom3(number):
    """Exercises 3: using list comprehension this funcs receive number and return a "7-BOOM" list from 0 to number"""
    boom_list = []
    for i in range(1, number):
        if i % 7 == 0 or i % 10 == 7:
            boom_list.append("BOOM")
        else:
            boom_list.append(i)
    return boom_list


# ----------------------------EX4----------------------------------------------
def lst_to_dict(list1):
    """This func take list and create dict"""
    return {num: list1[num] for num in range(len(list1))}


# -----------------------------EX5----------------------------------------------
def number_of_argument(*args, **kwargs):
    return len(kwargs) + len(args)


# ----------------------------EX6-----------------------------------------------
def check_hello(*args, **kwargs):
    """this funck if we found """
    for key, value in kwargs.items():
        if key == 'name' and value == 'hello':
            print(value)


# ----------------------------EX7-----------------------------------------------
def make_adder(num1):
    """this funcs return a function that add a number to the argument"""

    def add_func(num2):
        return num1 + num2

    return add_func


# ----------------------------TEST----------------------------------------------


def orasraf(*args):
    print("asdasd")
    print(args)


if __name__ == "__main__":
    # list_com()
    # dictionary_comprehension()
    # set_comprehension()
    print(sigma1(10, 20, 30))
    print(sigma2(10, 20, 30))
    print(sigma3(10, 20, 30))
    even_list()
    print(seven_boom1(100))
    print(seven_boom2(100))
    print(seven_boom3(100))
    lst_to_dict(['a', 'b', 'c', 'd'])
    orasraf(1, "or", 2)
    check_hello(1, 2, 3, name="hello")
    tmp = make_adder(5)
    print(tmp(3))
