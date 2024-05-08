n = int(input())

for i in range(n):
    for a in range(i):
        print(' ', end=' ')
    
    for b in range(2*n-1-2*i):
        print('*', end=' ')
    print()

for i in range(n-1):

    for c in range(n-i-2):
        print(' ', end=' ')

    for d in range(3+2*i):
        print('*', end=' ')
    print()