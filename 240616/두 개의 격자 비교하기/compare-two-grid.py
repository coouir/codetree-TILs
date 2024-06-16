n, m = tuple(map(int, input().split()))

nList1 = []; nList2 = []

for i in range(2):
    for j in range(n):
        if i == 0:
            nList1.append(list(map(int, input().split())))
        else:
            nList2.append(list(map(int, input().split())))

for a in range(n):
    for b in range(m):
        if nList1[a][b] == nList2[a][b]:
            print(0, end=' ')
        else:
            print(1, end=' ')
    print()