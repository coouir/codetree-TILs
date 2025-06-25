def in_range(x, y):
    return (1 <= x and x <= N) and (1 <= y and y <= N)

dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

mapper = {
    'U' : 0,
    'R' : 1,
    'D' : 2,
    'L' : 3, 
}

N, T = map(int, input().split())
R, C, D = map(str, input().split())
R, C = int(R), int(C)
dir = mapper[D]

for _ in range(T):
    nx = R + dx[dir]
    ny = C + dy[dir]

    if not in_range(nx, ny):
        dir = (dir + 2) % 4
    else:
        R = nx
        C = ny

print(R, C)
