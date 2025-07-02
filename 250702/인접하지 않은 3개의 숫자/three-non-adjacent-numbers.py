N = int(input())
arr = [0] + list(map(int, input().split())) + [0]
prefix = [0 for _ in range(N+2)]
suffix = [0 for _ in range(N+2)]

for i in range(1, N+1):
    prefix[i] = max(arr[i], prefix[i-1])

for i in range(1, N+1)[::-1]:
    suffix[i] = max(arr[i], suffix[i+1])

answer = 0
for i in range(3, N-1):
    answer = max(answer, arr[i] + prefix[i-2] + suffix[i+2])

print(answer)
