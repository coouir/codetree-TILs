n = int(input())

if n % 2 == 0:
    for i in range(n):
        for j in range(n):
            if i == 0:
                print('*', end=' ')
            elif (j%2 == 1) and j >= i:
                print('*', end=' ')
            else:
                print(' ', end=' ')
        print()
elif n == 1:
    print('*')
else:
    for i in range(n-1):
        for j in range(n):
            if i == 0:
                print('*', end=' ')
            elif (j%2 == 1) and j >= i:
                print('*', end=' ')
            else:
                print(' ', end=' ')
        print()