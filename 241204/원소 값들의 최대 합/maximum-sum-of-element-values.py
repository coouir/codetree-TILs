n, m = map(int, input().split())
arr = list(map(int, input().split()))

M = 0

for i in range(n):
    cnt = 1
    s = x = arr[i]
    while (cnt != m):
        x = arr[x-1]
        s += x
        cnt += 1
    M = max(M, s)

print(M)