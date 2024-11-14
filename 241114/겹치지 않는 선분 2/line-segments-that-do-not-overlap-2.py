N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

cnt = 0

for i in range(N):
    check = True
    for j in range(N):
        if i == j:
            continue
        x1 = arr[i][0]
        x2 = arr[i][1]
        x3 = arr[j][0]
        x4 = arr[j][1]
        
        if x1 <= x2:
            if x3 < x1 and x4 < x2:
                continue
            elif x1 < x3 and x2 < x4:
                continue
        else:
            if x4 < x2 and x3 < x1:
                continue
            elif x2 < x4 and x1 < x3:
                continue
        check = False
        break
    if check:
        cnt += 1

print(cnt)