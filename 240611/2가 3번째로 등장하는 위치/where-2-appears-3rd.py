n = int(input())
nList = list(map(int, input().split()))

cnt = 0
for i in range(len(nList)):
    if nList[i] == 2:
        cnt += 1
    if cnt == 3:
        print(i+1)
        break