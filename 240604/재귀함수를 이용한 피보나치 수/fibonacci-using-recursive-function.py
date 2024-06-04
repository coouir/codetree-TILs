def f(num):
    if num == 1:
        return 1
    if num == 2:
        return 1
    return f(num-1) + f(num-2)

n = int(input())
print(f(n))