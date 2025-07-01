N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]
prefix = [0 for _ in range(N)]
suffix = [0 for _ in range(N)]

for i in range(1, N):
    prefix[i] = abs(arr[i][0] - arr[i-1][0]) + abs(arr[i][1] - arr[i-1][1]) + prefix[i-1]

for i in range(0, N-1)[::-1]:
    suffix[i] = abs(arr[i][0] - arr[i+1][0]) + abs(arr[i][1] - arr[i+1][1]) + suffix[i+1]

answer = 1<<30
for i in range(1, N-1):
    answer = min(answer, prefix[i-1] + suffix[i+1] + abs(arr[i+1][0] - arr[i-1][0]) + abs(arr[i+1][1] - arr[i-1][1]))

print(answer)