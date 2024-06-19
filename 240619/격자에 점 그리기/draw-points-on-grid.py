n, m = tuple(map(int, input().split()))

nList = []
for i in range(n+1):
    l = []
    for j in range(n+1):
        l.append(0)
    nList.append(l)

for a in range(1,m+1):
    r, c = tuple(map(int, input().split()))
    nList[r][c] = a

for p in range(1, n+1):
    for q in range(1, n+1):
        print(nList[p][q], end=' ')
    print()