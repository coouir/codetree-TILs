nList = list(map(int, input().split()))
nListUn = []; nListUp = []

for i in nList:
    if i < 500:
        nListUn.append(i)
    else:
        nListUp.append(i)

print(max(nListUn), min(nListUp))