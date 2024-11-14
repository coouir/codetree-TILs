N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

cnt = 0

for i in range(N):
    x1 = arr[i][0]
    x2 = arr[i][1]
    for j in range(N):
        if i == j:
            continue
        x3 = arr[j][0]
        x4 = arr[j][1]

        if x1 < x3 < x4 < x2:
            cnt += 1
        elif x3 < x1 < x2 < x4:
            cnt += 1
print(cnt)