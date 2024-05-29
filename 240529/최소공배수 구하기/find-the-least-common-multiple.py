def a(n, m):
    for i in range(1, 10000):
        if i%n == 0 and i%m == 0:
            print(i)
            break

n, m = input().split()
n = int(n); m = int(m)

a(n,m)