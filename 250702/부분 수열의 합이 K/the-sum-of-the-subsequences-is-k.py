N, K = map(int, input().split())

arr = [0] + list(map(int, input().split()))
prefix = [0 for _ in range(N+1)]

for i in range(1, N+1):
    prefix[i] = arr[i] + prefix[i-1]

cnt = 0
for i in range(1, N+1):
    for j in range(i, N+1):
        s = prefix[j] - prefix[i-1]
        if s == K:
            cnt += 1

print(cnt)