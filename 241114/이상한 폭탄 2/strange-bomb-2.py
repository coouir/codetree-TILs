N, K = map(int, input().split())
arr = [int(input()) for _ in range(N)]

M = -1

for i in range(N):
    for j in range(i+1, N):
        if arr[j] == arr[i] and j-i <=K:
            M = max(M, arr[j])

print(M)