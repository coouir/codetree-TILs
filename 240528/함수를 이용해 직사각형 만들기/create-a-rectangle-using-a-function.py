def r(n, m):
    for i in range(n):
        print('1'*m)

n, m = input().split()
r(int(n), int(m))