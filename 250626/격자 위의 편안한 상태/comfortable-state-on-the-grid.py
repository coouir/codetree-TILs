def in_range(r, c):
    return (0 <= r < N) and (0 <= c < N)

dr = [-1, 0, 1, 0]
dc = [0, 1, 0, -1]

N, M = map(int, input().split())
arr = [[0 for j in range(N)] for i in range(N)]

for i in range(M):
    r, c = map(int, input().split())
    r -= 1
    c -= 1
    arr[r][c] = 1

    cnt = 0
    for k in range(4):
        nr = r + dr[k]
        nc = c + dc[k]
        if in_range(nr, nc) and arr[nr][nc] == 1:
            cnt += 1
    
    if cnt == 3:
        print(1)
    else:
        print(0)
        