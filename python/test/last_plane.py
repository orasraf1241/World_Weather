from functools import reduce
import gc
from operator import ixor


def airport1(list1, list2):
    count1 = 0
    for i, j in zip(list1, list2):
        count1 = count1 + (j - i)

    print(abs(count1))


def airport2(list3):
    print(reduce(ixor, list3))


def plane_on_ground(planes):
    plane_dict = {}
    last = None
    for i in planes:
        plane_dict[i] = planes.count(i)
        print(plane_dict[i])
    for key, value in plane_dict.items():
        if value % 2 != 0:
            last = key
    print(last)


if __name__ == "__main__":
    l1 = [1, 2, 3, 4, 6, 5, 7, 1, 2, 3, 4, 5, 6, 7, 8]
    l2 = [1, 2, 3, 4, 6, 5, 7, 1, 3, 2, 4, 5, 6, 0, 8]

    l3 = [1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 5, 6, 7]
    airport1(l1, l2)
    airport2(l3)
