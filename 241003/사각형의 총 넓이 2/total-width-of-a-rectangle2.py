N = int(input())
# -100 ~ 100
arr = [[0]*201 for i in range(201)]
for i in range(N):
    x1, y1, x2, y2 = map(int, input().split())
    for m in range(x1, x2):
        for n in range(y1, y2):
            arr[m+100][n+100] = 1

cnt = 0
for i in range(201):
    for j in range(201):
        if arr[i][j] == 1:
            cnt += 1
print(cnt)