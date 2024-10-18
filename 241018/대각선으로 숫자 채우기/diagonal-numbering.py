n, m = map(int, input().split())
arr = [[0]*m for _ in range(n)]

number = 1
def f(x, y):
    global number
    if not(0 <= x < n and 0 <= y < m):
        return 
    arr[x][y] = number
    number += 1
    return f(x+1, y-1)

for i in range(n):
    for j in range(m):
        if arr[i][j] == 0:
            f(i, j)

for i in range(n):
    for j in range(m):
        print(arr[i][j], end=' ')
    print()