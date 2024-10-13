def f(d, dd, x, y):
    for j in range(dd):
        x = x + dx[d]
        y = y + dy[d]
    return x, y

N = int(input())

x, y = 0, 0

dx, dy = [1, 0, -1, 0], [0, -1, 0, 1]

for i in range(N):
    d, dd = input().split()
    if d == 'E':
        x, y = f(int(0), int(dd), x, y)
    elif d == 'S':
        x, y = f(int(1), int(dd), x, y)
    elif d == 'W':
        x, y = f(int(2), int(dd), x, y)
    elif d == 'N':
        x, y = f(int(3), int(dd), x, y)

print(x, y)