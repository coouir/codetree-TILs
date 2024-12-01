N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

for i in range(0, 11):
    for j in range(0, 11):
        x, y = i, j
        
        arrN = []
        for n in range(N):
            xN, yN = arr[n]
            if x != xN and y != yN:
                arrN.append([xN, yN])

        xM, yM = arrN[0]
        checkX = 1
        checkY = 1
        for m in range(1, len(arrN)):
            if xM != arrN[m][0]:
                checkX = 0
            if yM != arrN[m][1]:
                checkY = 0
        if checkX == 1 or checkY == 1:
            print(1)
            exit()

for i in range(0, 11):
    for j in range(i+1, 11):
        for m in range(j+1, 11):
            arrPX = []
            arrPY = []
            for n in range(N):
                xN, yN = arr[n]
                if xN in [i, j, m]:
                    arrPX.append(arr[n])
                if yN in [i, j, m]:
                    arrPY.append(arr[n])
            if len(arrPX) == N or len(arrPY) == N:
                print(1)
                exit()
print(0)