def in_range(r, c):
    return (0 <= r and r < N) and (0 <= c and c < M)

r, c, dir = 0, 0, 2
dr = [-1, 0, 1, 0]
dc = [0, 1, 0, -1]

N, M = map(int, input().split())
arr = [[0 for j in range(M)] for i in range(N)]

for i in range(1, N*M+1):
    arr[r][c] = i

    nr = r + dr[dir]
    nc = c + dc[dir]

    if not in_range(nr, nc) or arr[nr][nc] != 0:
        dir = (dir + 3) % 4
    r = r + dr[dir]
    c = c + dc[dir]

for i in range(N):
    print(*arr[i])
