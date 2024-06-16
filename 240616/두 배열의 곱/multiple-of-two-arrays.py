nList1 = []
nList2 = []

for a in range(3):
    nList1.append(list(map(int, input().split())))
c = input()
for b in range(3):
    nList2.append(list(map(int, input().split())))

for i in range(3):
    for j in range(3):
        print(nList1[i][j] * nList2[i][j], end=' ')
    print()