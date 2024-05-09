n = int(input())

for i in range(2*n):
    if i % 2 == 0:
        for a in range(n - i//2):
            print('*', end=' ')
        print()
    else:
        for b in range(int(i/2+0.5)):
            print('*', end=' ')
        print()