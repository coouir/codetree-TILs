nList = []

for i in range(4):
    l = list(map(int, input().split()))
    nList.append(l)

sum = 0

for a in range(4):
    for b in range(4):
        if b <= a:
            sum += nList[a][b]

print(sum)