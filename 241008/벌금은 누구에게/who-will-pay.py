N, M, K = map(int, input().split())

arr = [0] * (N+1)

for i in range(M):
    x = int(input())
    arr[x] += 1
    if arr[x] >= K:
        print(x)
        exit()

print(-1)