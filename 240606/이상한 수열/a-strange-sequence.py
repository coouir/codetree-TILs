def f(num):
    if num <= 2:
        return num
    return f(num//3)+f(num-1)

n = int(input())
print(f(n))