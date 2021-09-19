def is_even(arg):
    """ this funcs check is the number is even or odd"""
    if arg % 2 == 1:
        print("not even")
    else:
        print("even")


def print_str(str, number=1):
    "this func print the string number of time but if the user dont insert number the func s print the str once"
    for x in range(number):
        print(str)


def leap_year(year):
    "check if is a leap year"
    if (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)):
        return True
    return False


def revers(num1):
    "this func revers the num"
    print(str(num1)[::-1])


def grades(x):

    if 0 < x < 10:
        print('F')

    elif 10 < x < 30:
        print('E')

    elif 30 < x < 50:
        print("D")

    elif 50 < x < 70:
        print('C')

    elif 70 < x < 90:
        print('B')

    elif 90 < x < 100:
        print('A')


def main():
    is_even(3)
    print_str("or asraf 5", 5)
    leap_year(400)
    leap_year(4)
    print(leap_year(300))
    revers(1234)
    grades(76)
    print("Hello World!")


chr
if __name__ == "__main__":
    main()
