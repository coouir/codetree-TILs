nList = []
for i in range(5):
    l = []
    for j in range(5):
        l.append(0)
    nList.append(l)


for a in range(5):
    for b in range(5):
        if a == 0:
            nList[a][b] = 1
        elif b == 0:
            nList[a][b] = 1
        else:
            nList[a][b] = nList[a][b-1] + nList[a-1][b]

for p in range(5):
    for q in range(5):
        print(nList[p][q], end=' ')
    print()