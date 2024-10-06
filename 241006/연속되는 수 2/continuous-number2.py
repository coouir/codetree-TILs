M = 0

N = int(input())
arr = [int(input()) for i in range(N)]
for i in range(N):
    if i == 0 or arr[i] != arr[i-1]:
        cnt = 1
        for j in range(i+1, N):
            if arr[i] == arr[j]:
                cnt += 1
            else:
                break
        M = max(M, cnt)

print(M)