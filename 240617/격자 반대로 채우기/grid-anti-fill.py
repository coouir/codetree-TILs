n = int(input())

nList = []

for i in range(n):
    l = []
    for j in range(n):
        l.append(0)
    nList.append(l)

cnt = 1
for j in range(n-1, -1, -1):
    if n%2 == 0:
        if j%2 == 1:
            for i in range(n-1, -1, -1):
                nList[i][j] = cnt
                cnt += 1
        else: 
            for i in range(n):
                nList[i][j] = cnt
                cnt += 1 
    else:
        if j%2 == 0:
            for i in range(n-1, -1, -1):
                nList[i][j] = cnt
                cnt += 1
        else: 
            for i in range(n):
                nList[i][j] = cnt
                cnt += 1 

for p in range(n):
    for q in range(n):
        print(nList[p][q], end=' ')
    print()