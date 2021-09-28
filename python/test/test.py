import gc
import time
from urllib import request


def read_file():
    f = open("or.txt", "w")
    for x in range(100000):
        f.write(str(x) + " ")


def read1():
    with open("b.txt", "a") as f:
        for i in range(100):
            f.write(str(i), " ")


def closure_func(string):
    """try to use """
    print("string before change", string)

    def infunc():
        x = 5
        print("in the func")
        string = "or asraf"
    infunc()
    return string

def seven_boom1(num):
    """
    use for loop
    :param num: number int from user
    :return: "7-boom" list from 0 to number
    """
    arr = []
    i = 0
    for i in range(num):
        arr.append(i)

    return arr

def seven_boom1(num):
    """
    use for loop
    :param num: number int from user
    :return: "7-boom" list from 0 to number
    """
    arr = []
    i = 0
    for i in range(num):
        if i % 7 == 0 and i != 0:
            arr.append("boom")
        else:
            arr.append(i)

    return arr


def seven_boom2(num):
    """
    use list comprehension
    :param num: number int from user
    :return: "7-boom" list from 0 to number
    """
    arr = ["boom" if "7" in str(i) else i*1 for i in range(100)]
    return arr

from operator import index


def list_to_dict(my_list):
    """
    without a dict comprehension
    :param my_list: list from user
    :return: dictionary where keys - indexes, values - list elements
    """
    length = len(my_list)
    i = 0
    i_list = []
    # create list of indexes
    while i < length:
        i_list.append(i)
        i += 1
    # create dict from two lists
    res = {}
    for key in i_list:
        for value in my_list:
            res[key] = value
            my_list.remove(value)
            break
    return res


def list_dict(my_list):
    """
    use dict  comprehension
    :param my_list: list from user
    :return: dict
    """

    res = {k: v for k, v in enumerate(my_list)}
    return res

def seven_boom3(num):
    """
    use map
    :param num: number int from user
    :return: "7-boom" list from 0 to number
    """
    arr = list(map(lambda i: "boom" if '7' in str(i) else i*1, range(num)))
    return arr

if __name__ == "__main__":
    print(closure_func("or"))
    # read1()
    # print()
    # time.sleep(10)
    print(seven_boom3(100))
    print(seven_boom2(100))
    print(seven_boom1(100))
    print(list_to_dict(['a','b','c','d']))
    print(list_dict(['a','b','c','d']))
    print("i am still running")
