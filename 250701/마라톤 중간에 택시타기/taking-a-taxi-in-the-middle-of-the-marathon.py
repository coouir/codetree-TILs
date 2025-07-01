N = int(input())

arr = [list(map(int, input().split())) for i in range(N)]
prefix = [0 for i in range(N)]
suffix = [0 for i in range(N)]

for i in range(1, N):
    prefix[i] = prefix[i-1] + abs(arr[i][0] - arr[i-1][0]) + abs(arr[i][1] - arr[i-1][1])
for i in range(N-2, -1, -1):
    suffix[i] = suffix[i+1] + abs(arr[i][0] - arr[i+1][0]) + abs(arr[i][1] - arr[i+1][1])

m = 1<<60
for i in range(1, N-1):
    m = min(m, prefix[i-1] + suffix[i+1] + abs(arr[i+1][0] - arr[i-1][0]) + abs(arr[i+1][1] - arr[i-1][1]))

print(m)