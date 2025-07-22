N, M = map(int, input().split())
arr = [int(input()) for _ in range(N)]

answer = -1

s = 1
e = max(arr)
while s <= e:
    mid = (s+e) // 2

    cnt = 0
    for i in range(N):
        cnt += arr[i] // mid
    
    if cnt >= M:
        answer = mid
        s = mid + 1
    else:
        e = mid - 1

print(answer)