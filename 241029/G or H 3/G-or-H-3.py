N, K = map(int, input().split())

arr = [0]*(10001)
for i in range(N):
    x, y = input().split()
    arr[int(x)] = y

Max = 0
for i in range(1, 10000-K):
    cnt = 0
    for j in range(i, i+K+1):
        if arr[j] == 'G':
            cnt += 1
        elif arr[j] == 'H':
            cnt += 2
    Max = max(Max, cnt)

print(Max)