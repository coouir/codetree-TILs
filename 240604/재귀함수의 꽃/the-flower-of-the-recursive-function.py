def f(num):
    if num == 0:
        return
    print(num, end=' ')
    f(num-1)
    print(num, end=' ')

n = int(input())
f(n)