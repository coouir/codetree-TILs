def in_range(r, c):
    return (0 <= r and r < N) and (0 <= c and c < N)

N, T = map(int, input().split())
str = input()
arr = [list(map(int, input().split())) for i in range(N)]

r, c, dir = N//2, N//2, 0
dr = [-1, 0, 1, 0]
dc = [0, 1, 0, -1]

s = arr[r][c]

for i in range(T):
    ch = str[i]
    if ch == 'L':
        dir = (dir + 3) % 4
    elif ch == 'R':
        dir = (dir + 1) % 4
    elif ch == 'F':
        nr = r + dr[dir]
        nc = c + dc[dir]
        if in_range(nr, nc):
            r, c = nr, nc
            s += arr[r][c]

print(s)