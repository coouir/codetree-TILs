N = int(input())
arr = [list(map(int, input().split())) for i in range(N)]

m = 1 << 60

for i in range(1, N-1):
    x, y = arr[0][0], arr[0][1]
    d = 0

    for j in range(1, N):
        if i == j:
            continue
        d += abs(arr[j][0] - x) + abs(arr[j][1] - y)
        x, y = arr[j][0], arr[j][1]
    m = min(m, d)

print(m)