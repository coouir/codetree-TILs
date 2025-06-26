def in_range(r, c):
    return (0 <= r and r < N) and (0 <= c and c < N)

N = int(input())
arr = [[0 for j in range(N)] for i in range(N)]

r, c, dir = N-1, N-1, 3
dr = [-1, 0, 1, 0]
dc = [0, 1, 0, -1]

for i in range(N*N, 0, -1):
    arr[r][c] = i

    nr = r + dr[dir]
    nc = c + dc[dir]

    if not in_range(nr, nc) or arr[nr][nc] != 0:
        dir = (dir + 1) % 4
    
    r += dr[dir]
    c += dc[dir]

for i in range(N):
    print(*arr[i])


