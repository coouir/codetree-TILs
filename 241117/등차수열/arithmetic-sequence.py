n = int(input())
arr = list(map(int, input().split()))

M = 0 

for k in range(1, max(arr)):
    cnt = 0
    for i in range(n):
        for j in range(i+1, n):
            if arr[j]-k == k-arr[i]:
                cnt += 1
    M = max(M, cnt)

print(M)