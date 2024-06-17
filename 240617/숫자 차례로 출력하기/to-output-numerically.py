def f(n):
    if n == 0:
        return
    f(n-1)
    print(n, end=' ')
def g(n):
    if n == 0:
        return
    print(n, end=' ')
    f(n-1)

n = int(input())
f(n)
print()
g(n)