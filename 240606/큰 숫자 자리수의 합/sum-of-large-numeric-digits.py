def f(num):
    if num // 10 == 0:
        return num % 10
    return f(num//10) + num%10

list_ = list(map(int, input().split()))
s = 1
for i in list_:
    s *= i
print(f(s))