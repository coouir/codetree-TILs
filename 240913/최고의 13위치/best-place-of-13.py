N = int(input())
arr = []
for i in range(N):
    arr.append(list(map(int, input().split())))

m = 0
for i in range(N):
    for j in range(N-2):
        m = max(m, arr[i][j]+arr[i][j+1]+arr[i][j+2])

print(m)