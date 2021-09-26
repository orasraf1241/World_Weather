import gc
import time
from urllib import request


def foo(X):
    x = 5


# def using_open():
#     f = open("last_plane.py", "r")
#     try:
#         print(f.read())
#     finally:
#         f.close()
#         print("finally !!")
#
#
# def using_open2():
#     file = open('last_plane.py')
#     print(file.read())
#
#     f = open("rds", "r")
#     print(f.read())
#     f.close()


def read_file():
    f = open("or.txt", "w")
    for x in range(100000):
        f.write(str(x)+" ")



if __name__ == "__main__":
    print(gc.collect())
    print(len(gc.get_objects()))
    # print(using_open())
    read_file()
    time.sleep(100)
    print("done")

    print("i am still running")
