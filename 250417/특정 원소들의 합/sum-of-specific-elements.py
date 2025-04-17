arr = [list(map(int, input().split())) for i in range(4)]

cnt = 0
for i in range(4):
    for j in range(4):
        if j>i: break
        cnt += arr[i][j]

print(cnt)