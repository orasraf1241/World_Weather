def print_file_upper1(file_name):
    """This func print the file content in capital letters"""
    with open(file_name, 'r') as f:
        print(f.read().upper())


def print_file_upper2(file_name):
    """This func print the file content in capital letters"""
    try:
        file = open(file_name, 'r')
        print(file.read().upper())
    except FileNotFoundError:
        raise print("The file is not found")
    except IOError:
        raise IOError
    finally:
        file.close()


if __name__ == "__main__":
    print_file_upper1("or.txt")
    print_file_upper2("or.txt")