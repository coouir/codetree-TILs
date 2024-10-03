x1A, y1A, x2A, y2A = map(int, input().split())
x1B, y1B, x2B, y2B = map(int, input().split())
x1M, y1M, x2M, y2M = map(int, input().split())

arr = [[0]*2001 for i in range(2001)]

for i in range(x1A, x2A):
    for j in range(y1A, y2A):
        arr[i][j] = 1

for i in range(x1B, x2B):
    for j in range(y1B, y2B):
        arr[i][j] = 1

for i in range(x1M, x2M):
    for j in range(y1M, y2M):
        arr[i][j] = 0

cnt = 0
for i in range(2001):
    for j in range(2001):
        if arr[i][j] == 1:
            cnt += 1

print(cnt)