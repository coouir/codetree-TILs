n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]
cnt = 0

for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            x = [0]*101
            for m in range(n):
                if m == i or m == j or m == k:
                    continue
                for o in range(arr[m][0], arr[m][1]+1):
                    x[o] += 1
            check = True
            for l in x:
                if l >= 2:
                    check = False
                    break
            if check:
                cnt += 1

print(cnt)