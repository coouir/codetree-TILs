n = int(input())

for i in range(n):
    for j in range(i+1):
        print('*', end=' ')
    print()

for k in range(n-1):
    for m in range(n-k-1):
        print('*', end=' ')
    print()