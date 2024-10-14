n = int(input())
arr = []
for i in range(n):
    arr.append(list(map(int, input().split())))

dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0]

def f(x, y):
    return 0 <= x < n and 0 <= y < n

cnt = 0
for i in range(n):
    for j in range(n):
        c = 0
        for dx, dy in zip(dxs, dys):
            nx, ny = i + dx, j + dy
            if f(nx, ny) and arr[nx][ny] == 1:
                c += 1
        if c >= 3:
            cnt += 1
print(cnt)