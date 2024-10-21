N, M = map(int, input().split())

arr = [[0]*(N+2) for _ in range(N+2)]

dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0] # 동, 남, 서, 북

for j in range(M):
    r, c = map(int, input().split())
    arr[r][c] = 1
    cnt = 0
    for j in range(4):
        if arr[r+dxs[j]][c+dys[j]] == 1:
            cnt += 1
    if cnt >= 3:
        print(1)
    else:
        print(0)