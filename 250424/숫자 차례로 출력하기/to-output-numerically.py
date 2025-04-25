def A(n):
    if (n == 0):
        return 0

    A(n-1)
    print(n, end=' ')

def B(n):
    if (n == 0):
        return 0
    
    print(n, end=' ')
    B(n-1)

N = int(input())
A(N)
print()
B(N)