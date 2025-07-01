N, K = map(int, input().split())

arr = [[0] * (N + 1)] + [[0] + list(map(int, input().split())) for _ in range(N)]

prefix = [[0 for j in range(N+1)] for i in range(N+1)]
for i in range(1, N+1):
    for j in range(1, N+1):
        prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1]

M = 0
for i in range(K, N+1):
    for j in range(K, N+1):
        M = max(M, prefix[i][j] - prefix[i-K][j] - prefix[i][j-K] + prefix[i-K][j-K])

print(M)