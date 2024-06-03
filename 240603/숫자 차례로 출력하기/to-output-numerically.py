n = int(input())

def a(num, n):
    if num == n+1:
        return
    print(num, end=' ')
    a(num+1, n)

def b(n):
    if n == 0:
        return 
    print(n, end=' ')
    b(n-1)
a(1, n)
print()
b(n)