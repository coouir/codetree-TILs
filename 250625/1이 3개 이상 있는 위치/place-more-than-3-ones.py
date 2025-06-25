def in_range(x, y):
    return 0 <= x < N and 0 <= y < N

dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

N = int(input())
arr = [list(map(int, input().split())) for i in range(N)]

count = 0
for x in range(N):
    for y in range(N):
        cnt = 0
        for k in range(4):
            nx = x + dx[k]
            ny = y + dy[k]
            if in_range(nx, ny) and arr[nx][ny] == 1:
                cnt += 1
        if (cnt >= 3):
            count += 1

print(count)
