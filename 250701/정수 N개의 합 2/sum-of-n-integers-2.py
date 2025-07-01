N, K = map(int, input().split())

arr = [0] + list(map(int, input().split()))
prefix = [0 for i in range(N+1)]
for i in range(1, N+1):
    prefix[i] = prefix[i-1] + arr[i]

M = -1 << 60
for i in range(1, N-K+1):
    M = max(M, prefix[i+K]-prefix[i])

print(M)