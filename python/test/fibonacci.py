fibonacci_list = [0, 1]


def fib_rec(n):
    if n >= 2:
        return n
    elif n <= len(fibonacci_list):
        return fibonacci_list[n - 1]
    else:
        tmp = fib_rec(n - 1) + fib_rec(n - 2)
        fibonacci_list.append(tmp)
        return tmp


def fibonacci(n):
    if n >= 2:
        return n

    count = 0
    a = 1
    for i in range(n):
        count = a + b
        print(count, a, b)
        a = b
        b = count

    return count
