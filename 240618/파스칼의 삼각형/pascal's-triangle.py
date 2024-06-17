n = int(input())
nList = []

for i in range(n):
    l = []
    for j in range(i+1):
        if j == 0:
            l.append(1)
        else:
            l.append(0)
    nList.append(l)

for a in range(1, n):
    for b in range(1, a+1):
        try:
            nList[a][b] = nList[a-1][b-1] + nList[a-1][b]
        except:
            nList[a][b] = nList[a-1][b-1]

for p in range(n):
    for q in range(p+1):
        print(nList[p][q], end=' ')
    print()