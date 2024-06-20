nList = []

for i in range(10):
    nList.append(input())

c = input()

che = False

for j in nList:
    if j[-1] == c:
        print(j)
        che = True

if che == False:
    print('None')