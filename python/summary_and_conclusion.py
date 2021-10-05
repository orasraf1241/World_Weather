import items as items


def name_of_file(path):
    """ Question 1 : return the name of the file"""
    list_path = path.split("/")
    return list_path[len(list_path) - 1]


def convert_to_cap(path):
    """Question 2 : this func get path of file and change the file to cap letter """
    try:
        with open(path, 'r') as f:
            upper_file = f.read().upper()
            print(upper_file)

    except FileNotFoundError:
        raise "the file not found"
    except Exception:
        raise "error to read the file"


def is_prime(num):
    """Question 3 :this func check if num is prime number"""
    for i in range(2, num - 1):
        if num % i == 0:
            return False
    return True


def using_lambada():
    """Question 4 :This func for parachutist lambda """
    a = 2
    b = 3
    c = lambda a: a ** 2
    d = lambda a, b: a + b
    print(c(a))
    print(d(a, b))


def list_withot_dunders():
    """Question 5 - this func print all the method in str without danders method """
    new_list = []
    for i in dir(str):
        if i[2:] != "__" and i[:2] != "__":
            new_list.append(i)
    print(new_list)


def increment_list(list_of_in):
    """Question 6 - this func receive list and increment all the value by 1 """
    for i in range(len(list_of_in)):
        list_of_in[i] += 1
    print(list_of_in)


def del_str_from_list(list_n):
    """Question 7 - receive a list and delete all the str element"""
    for i in list_n:
        if isinstance(i, str):
            list_n.remove(i)

    return list_n


def print_list_enumerate(list1):
    """Question A - This func receive a list and print all the index and the element using enumerate"""
    print(list(enumerate(list1)))


def print_dict_item(dict_p):
    """Question 8 - This func receive a list and print all the index and the element using enumerate"""
    print(dict_p.items())


def list_to_dict(list_p):
    """Question B - This func receive a List and convert it to dict"""
    new_dict = {}
    for i in range(len(list_p)):
        new_dict[i] = list_p[i]
    print(new_dict.items())


class DefaultDict:
    """This class create a new type of dict that if the key not exists its return a default value """
    def __init__(self, default_v):
        self.my_dict = {}
        self.default_v = default_v

    def __setitem__(self, key, value):
        self.my_dict[key] = value

    def __getitem__(self, item):
        if self.my_dict.get(item):
            return self.my_dict.get(item)
        else:
            return self.default_v


if __name__ == "__main__":
    # print(name_of_file("/home/or/Desktop/infinity/git 2/python/oop.py"))
    # convert_to_cap("/home/or/Desktop/infinity/git 2/python/oop.py")
    # using_lambada()
    # print(is_prime(47), is_prime(44))
    # list_withot_dunders()
    # print([i for i in dir(str) if i[2:] != "__" and i[:2] != "__"])
    # increment_list([1, 2, 3, 4, 5, 6, 7])
    # del_str_from_list([1, 2, "gfh", 4, "fdfss", 5])
    print_list_enumerate([1, 2, "gfh", 4, "fdfss", 5])
    print_dict_item({1: 2, 2: 3, 3: 4, 4: 5})
    list_to_dict(['a',2,'c',4,5,6])
    d = DefaultDict(0)
    d['a'] = 'hello'
    print(d['b'])
