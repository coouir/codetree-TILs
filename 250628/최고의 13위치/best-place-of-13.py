N = int(input())
arr = [list(map(int, input().split())) for i in range(N)]

M = 0
for i in range(N):
    for j in range(N-2):
        M = max(M, arr[i][j] + arr[i][j+1] + arr[i][j+2])

print(M)