def f(num):
    if num == 1:
        return 0

    if num % 2 == 0:
        return f(num // 2) + 1
    else:
        return f(num // 3) + 1

n = int(input())
print(f(n))