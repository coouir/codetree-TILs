n = int(input())

for i in range(n):
    for a in range(n-1-i):
        print(' ', end='')

    for b in range(i+1):
        print('*', end=' ')
    print()

for i in range(n-1):
    for c in range(i+1):
        print(' ', end='')
    
    for d in range(n-1-i):
        print('*', end=' ')
    print()