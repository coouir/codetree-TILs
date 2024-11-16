N, C, G, H = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(N)]

def f(x, y, t):
    if t < x:
        return C
    elif x <= t <= y:
        return G
    else:
        return H
M = 0
for i in range(0, 1001):
    cnt = 0
    for j in range(N):
        cnt += f(arr[j][0], arr[j][1], i)
        M = max(M, cnt)

print(M)