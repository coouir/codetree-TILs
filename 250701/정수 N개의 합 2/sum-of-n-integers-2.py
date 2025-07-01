N, K = map(int, input().split())

arr = [0] + list(map(int, input().split()))
prefix = [0 for i in range(N+1)]

for i in range(1, N+1):
    prefix[i] = arr[i] + prefix[i-1]

answer = -(1 << 30)
for i in range(K, N+1):
    answer = max(answer, prefix[i]-prefix[i-K])

print(answer)