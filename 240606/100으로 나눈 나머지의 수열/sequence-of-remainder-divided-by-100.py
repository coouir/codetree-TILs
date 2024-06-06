def f(num):
    if num == 1:
        return 2
    elif num == 2:
        return 4
    return f(num-1) * f(num-2) % 100

n = int(input())
print(f(n))