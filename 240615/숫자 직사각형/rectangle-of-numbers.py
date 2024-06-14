n, m = tuple(map(int, input().split()))

nList = []

for i in range(n):
    l = []
    for j in range(m):
        l.append(0)
    nList.append(l)

num = 1

for i in range(n):
    for j in range(m):
        nList[i][j] = num
        num += 1
for a in nList:
    for b in a:
        print(b, end=' ')
    print()