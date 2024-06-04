n = int(input())

for i in range(n):
    for a in range(n-1-i):
        print(' ', end=' ')
    for b in range(2*i+1):
        print('*', end=' ')
    print()