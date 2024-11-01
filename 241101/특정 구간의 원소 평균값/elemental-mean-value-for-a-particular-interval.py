N = int(input())
arr = list(map(int, input().split()))

cnt = 0

for i in range(N):
    for j in range(i, N):
        a = sum(arr[i:j+1]) / (j+1-i)
        check = False
        for m in range(i, j+1):
            if arr[m] == a:
                check = True
                break
        if check:
            cnt += 1

print(cnt)