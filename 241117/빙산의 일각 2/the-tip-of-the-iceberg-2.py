N = int(input())
arr = [int(input()) for _ in range(N)]

M = 1

for i in range(1, max(arr)):
    cnt = 0
    c = False
    for j in range(N):
        if arr[j]-i > 0 and c == False:
            cnt += 1
            c = True
        if arr[j]-i <= 0:
            c = False
    M = max(M, cnt)

print(M)