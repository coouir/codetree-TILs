def f(num):
    if num == 1:
        return 0
    return f(num//2) + 1 if num % 2 == 0 else f(3*num+1) + 1

n = int(input())
print(f(n))