n, m = tuple(map(int, input().split()))

nList = []

for a in range(n):
    l = []
    for b in range(m):
        l.append(0)
    nList.append(l)

cnt = 0
for i in range(m):
    if i%2 == 0:
        for j in range(n):
            nList[j][i] = cnt
            cnt += 1
    else:
        for j in range(n-1, -1, -1):
            nList[j][i] = cnt
            cnt += 1

for p in range(n):
    for q in range(m):
        print(nList[p][q], end=' ')
    print()