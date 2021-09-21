
def squerd_numbers1(list):
    """ this funcs print all the squered number between 1 to 100"""
    for x in range(1,11):
        x = x ** 2
        list.append(x)

    print("Ex1\n",list )
    del list

def squerd_numbers2(list):
    count = 1

    while(count < 11):
        list.append(count ** 2)
        count += 1

    print(list ,"\n\n")


def even_numbers(list = []):
    """ this funcs print all the even numbers between 1 to 100 """
    count = 0

    for x in range(0,101):
        if(x % 2 == 0 ):
            list.append(x)

    print("Ex2\n",list )
    del list
    list = []

    while (count < 101):
        if (count % 2 == 0):
            list.append(count)
        count += 1
    print(list ,"\n\n")


def dict_str(str):
    "this functs create dict from string and return the dict "
    dict = {}

    for x in str:
        dict[x] = dict.get(x,0) +1

    print("Ex3\n",dict ,"\n\n")
    return dict



def enumerate_use(list1):
    """ this functs take a list and print all the data with the iterators num"""
    print("EX4\n",list(enumerate(list1)),"\n\n")


def is_contining(list1 , list2):
    """ this funncs check if the list is equels"""

    """options 1"""
    for i ,j in zip(list1,list2):
        print(i,j)
        if(i != j):
           print("This list in not contains(check 1) \n\n")

    """ option 2"""
    if(len(list1) == len(list2)):
        for i in range(len(list1)):
            if(list1[i] != list2[i]):
                print("This list in not contains(check 2) \n\n")
    else:
        print("This list in not contains(check 2) \n\n")

    """option 3 """
    it = 0

    if(len(list1) == len(list2)):
        while(it < len(list1)):
            if(list1[it] != list2[it]):
                print("This list in not contains(check 3) \n\n")
            it += 1
    else:
        print("This list in not contains(check 3) \n\n")
    print("The list is equals \n\n")



def rotation(list,roatt = 0):
    """option 1"""
    print("\n\n before rotation :",list)
    list = list[roatt:] + list[:roatt]
    print("after rotation",list)


def main():
    list = []

    squerd_numbers1(list)
    squerd_numbers2(list)

    del list
    list = []

    even_numbers(list)
    dict_str(["or","asraf", " is","is","or", "or asraf"])

    list1 = ["or","asraf", " is","is","or","or"]
    list2 = ["or","asraf", " is","is","or", "or"]


    is_contining(list1,list2)
    enumerate_use(list1)

    roatlist = [1,2,3,4,5,6,7]
    rotation(roatlist,2)


if __name__ == "__main__":
    main()
