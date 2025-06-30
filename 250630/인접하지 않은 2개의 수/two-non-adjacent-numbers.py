N = int(input())
arr = list(map(int, input().split()))

M = 0
for i in range(N):
    for j in range(i+2, N):
        M = max(M, arr[i]+arr[j])

print(M)