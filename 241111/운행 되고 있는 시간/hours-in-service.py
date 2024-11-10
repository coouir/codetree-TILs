N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

M = 0

for i in range(N):
    t = [0]*1001
    for j in range(N):
        if i == j:
            continue
        for k in range(arr[j][0], arr[j][1]):
            t[k] = 1
    
    M = max(M, sum(t))

print(M)