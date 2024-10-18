n, m = map(int, input().split())

arr = [[0]*m for _ in range(n)]

N = 1
def diagonal(x, y):
    global N
    if not(0 <= x < n and 0 <= y < m):
        return 
    arr[x][y] = N
    N += 1
    return diagonal(x+1, y-1)

for i in range(n):
    for j in range(m):
        if arr[i][j] == 0:
            diagonal(i, j)

for i in range(n):
    for j in range(m):
        print(arr[i][j], end=' ')
    print()