def squared_number_for():
    """Exercise 1 - this funcs print all the squared number between 1 to 100"""
    square_list = []
    for x in range(1, 11):
        x = x ** 2
        square_list.append(x)

    print("Ex1\n", square_list)


def squared_number_while():
    """Exercise 1 - this funcs print all the squared number between 1 to 100"""

    square_list = []
    count = 1
    while count < 11:
        square_list.append(count ** 2)
        count += 1

    print(square_list, "\n")


def even_numbers_for():
    """Exercise 2 - This funcs print all the even numbers between 1 to 100 using for loop"""
    even_list = []
    for x in range(0, 101):
        if x % 2 == 0:
            even_list.append(x)

    print("Ex2\n", even_list)


def even_numbers_while():
    """Exercise 2 - This funcs print all the even numbers between 1 to 100 using while loop """
    count = 0
    even_list = []
    while count < 101:
        if count % 2 == 0:
            even_list.append(count)
        count += 1
    print(even_list, "\n\n")


def dictionary_str(string):
    """Exercise 3 - This functions create dict from string and return the dict"""
    dictionary = {}

    for x in string:
        dictionary[x] = dictionary.get(x, 0) + 1

    print("Ex3\n", dictionary, "\n\n")
    return dictionary


def enumerate_use(list1):
    """Exercise 4 - this functions take a list and print all the data with the iterators num"""

    print("EX4\n", list(enumerate(list1)), "\n\n")


def is_equal_for_in(list1, list2):
    """Exercise 5 -  This functions check if the list is equals using for each """
    for i, j in zip(list1, list2):
        print(i, j)
        if i != j:
            print("This list in not contains(check 1) \n\n")


def is_equal_for_range(list1, list2):
    """Exercise 5 -  This funcs check if the list is equals using for loop with range"""
    if len(list1) == len(list2):
        for i in range(len(list1)):
            if list1[i] != list2[i]:
                print("This list in not contains(check 2) \n\n")
    else:
        print("This list in not contains(check 2) \n\n")


def is_equal_for_while(list1, list2):
    """Exercise 5 -  This funcs check if the list is equals using while"""
    it = 0
    if len(list1) == len(list2):
        while it < len(list1):
            if list1[it] != list2[it]:
                print("This list in not contains(check 3) \n\n")
            it += 1
    else:
        print("This list in not contains(check 3) \n\n")
    print("The list is equals \n\n")


def rotation(shift_list, shift=0):
    print("\n\n before rotation :", shift_list)
    shift_list = shift_list[shift:] + shift_list[:shift]
    print("after rotation", shift_list)


if __name__ == "__main__":
    even_numbers_for()
    even_numbers_while()
    dictionary_str(["or", "asraf", " is", "is", "or", "or asraf"])
    test_list1 = ["or", "asraf", " is", "is", "or", "or"]
    test_list2 = ["or", "asraf", " is", "is", "or", "or"]
    is_equal_for_while(test_list1, test_list2)
    is_equal_for_in(test_list1, test_list2)
    is_equal_for_range(test_list1, test_list2)
    enumerate_use(test_list1)
    rotation([1, 2, 3, 4, 5, 6, 7], 2)
