n = int(input())

nList = []
for i in range(n):
    l = []
    for j in range(n):
        if i == 0 or j == 0:
            l.append(1)
        else:
            l.append(0)
    nList.append(l)

for a in range(1, n):
    for b in range(1, n):
        nList[a][b] = nList[a-1][b] + nList[a][b-1] + nList[a-1][b-1]

for p in range(n):
    for q in range(n):
        print(nList[p][q], end=' ')
    print()