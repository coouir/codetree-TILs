def in_range(r, c):
    return (0 <= r < N) and (0 <= c < M)

N, M = map(int, input().split())
arr = [[0 for j in range(M)] for i in range(N)]

dr = [-1, 0, 1, 0]
dc = [0, 1, 0, -1]
r, c, dir = 0, 0, 1

for i in range(1, N*M+1):
    arr[r][c] = i

    nr = r + dr[dir]
    nc = c + dc[dir]
    if not in_range(nr, nc) or arr[nr][nc] != 0:
        dir = (dir + 1) % 4
    r += dr[dir]
    c += dc[dir]

for i in range(N):
    print(*arr[i])


