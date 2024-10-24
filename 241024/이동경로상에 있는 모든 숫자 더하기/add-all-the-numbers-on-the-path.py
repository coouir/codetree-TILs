N, T = map(int, input().split())
C = list(input())
arr = [list(map(int, input().split())) for _ in range(N)]

x = y = N//2
dir_num = 3
dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0]

def in_range(x, y):
    return 0 <= x < N and 0 <= y < N

cnt = arr[x][y]
for c in C:
    if c == 'L':
        dir_num = (dir_num+3)%4
    elif c == 'R':
        dir_num = (dir_num+1)%4
    else:
        nx, ny = x + dxs[dir_num], y + dys[dir_num]
        if in_range(nx, ny):
            x, y = x + dxs[dir_num], y + dys[dir_num]
            cnt += arr[x][y]

print(cnt)