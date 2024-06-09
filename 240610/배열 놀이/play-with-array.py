n, q = tuple(map(int, input().split()))
nList = list(map(int, input().split()))

for i in range(q):
    qList = list(map(int, input().split()))
    if qList[0] == 1:
        print(nList[qList[1]-1])
    elif qList[0] == 2:
        try:
            print(nList.index(qList[1])+1)
        except:
            print(0)
    elif qList[0] == 3:
        for j in range(qList[1]-1, qList[2]):
            print(nList[j], end=' ')