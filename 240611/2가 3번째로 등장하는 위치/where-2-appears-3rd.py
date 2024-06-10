n = int(input())
nList = list(map(int, input().split()))

cnt = 1
for i in range(len(nList)):
    if cnt == 3:
        print(i+1)
        break
    if nList[i] == 2:
        cnt += 1