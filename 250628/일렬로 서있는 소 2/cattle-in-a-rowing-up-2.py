N = int(input())
arr = list(map(int, input().split()))

cnt = 0
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if not (arr[i] <= arr[j] and arr[j] <= arr[k]):
                continue
            cnt += 1

print(cnt)