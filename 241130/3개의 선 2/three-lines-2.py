N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

for i in range(N):
    x, y = arr[i]
    arrJ = []
    for j in range(N):
        if i == j:
            continue
        xj, yj = arr[j]
        if x != xj and y != yj:
            arrJ.append([xj, yj])
    
    xJ, yJ = arrJ[0]
    checkX = 1
    checkY = 1
    for j in range(1, len(arrJ)):
        if xJ != arrJ[j][0]:
            checkX = 0
        if yJ != arrJ[j][1]:
            checkY = 0
    if checkX == 1 or checkY == 1:
        print(1)
        exit()

print(0)
