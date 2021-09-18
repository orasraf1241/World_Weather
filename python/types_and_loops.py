





def is_even(arg):
    if arg%2 == 1:
        print("not even")
    else:
        print("even")

def leap_year(year):
    if( year % 4 == 0 and (year % 100 != 0 or year % 400 == 0) ):
        return True
    return False

def revers(num1):
    print(int(num1[::-1]))

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
        print( 'B')

    elif 90 < x < 100:
        print('A')





def main():
    array = ["or asrf", "dana", "yoad", "asda", 2]
    a = 'a h'
    b = "bbb hbfvjhf"
    c = """ cs"""
    is_even(5)
    for x in array:
        print(a.format(),type(b),type(c))

    print("Hello World!")

if __name__ == "__main__":
    main()