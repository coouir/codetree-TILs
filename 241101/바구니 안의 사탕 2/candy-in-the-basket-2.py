N, K = map(int, input().split())
arr = [0]*101

for i in range(N):
    c, p = map(int, input().split())
    arr[p] += c

M = 0
for i in range(len(arr)):
    M = max(M, sum(arr[i-K:i+K+1]))

print(M)