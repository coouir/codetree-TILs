n = int(input())

for i in range(n):
    if i % 2 == 0:
        for a in range(i//2 + 1):
            print('*', end=' ')
        print()
    else:
        for b in range(n - int(i/2-0.5)):
            print('*', end=' ')
        print()

for i in range(n):
    if n % 2 == 0:
        if i % 2 == 0:
            for c in range(n//2 + 1 + i//2):
                print('*', end=' ')
            print()
        else:
            for d in range(n//2 - int(i/2-0.5)):
                print('*', end=' ')
            print()
    else:
        if i % 2 == 0:
            for c in range(int(n/2 + 0.5)-i//2):
                print('*', end=' ')
            print()
        else:
            for d in range(int(n/2+1.5) + int(i/2-0.5)):
                print('*', end=' ')
            print()