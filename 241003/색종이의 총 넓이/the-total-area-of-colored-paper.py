N = int(input())
arr = [[0]*201 for i in range(201)]

for i in range(N):
    x, y = map(int, input().split())
    for m in range(x, x+8):
        for n in range(y, y+8):
            arr[m+100][n+100] = 1

cnt = 0
for i in range(201):
    for j in range(201):
        if arr[i][j] == 1:
            cnt += 1

print(cnt)