N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]
M = 0

for i in range(1, 4):
    n = i
    cnt = 0
    for j in range(N):
        a, b, c = arr[j]
        if a == n:
            n = b
        elif b == n:
            n = a

        if c == n:
            cnt += 1
    M = max(M, cnt)

print(M)

