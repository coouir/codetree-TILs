n = int(input())

for i in range(n):
    for a in range(n-i):
        print('*', end='')
    
    for b in range(2*i):
        print(' ', end='')
    
    for c in range(n-i):
        print('*', end='')
    print()