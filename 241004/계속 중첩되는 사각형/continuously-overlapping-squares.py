# 빨간색 : 1, 파란색 : 2

arr = [[0]*201 for i in range(201)]
n = int(input())

check = True
for i in range(n):
    x1, y1, x2, y2 = map(int, input().split())
    if check:
        for m in range(x1, x2):
            for n in range(y1, y2):
                arr[100+m][100+n] = 1
        check = False
    else:
        for m in range(x1, x2):
            for n in range(y1, y2):
                arr[100+m][100+n] = 2
        check = True

cnt = 0
for i in range(201):
    for j in range(201):
        if arr[i][j] == 2:
            cnt += 1

print(cnt)