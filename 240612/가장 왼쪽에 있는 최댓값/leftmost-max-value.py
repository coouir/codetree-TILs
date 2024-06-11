def f(nList):
    if len(nList) == 1:
        print(1, end=' ')
        return
    try:
        print(nList.index(max(nList))+1, end=' ')
        return f(nList[0:nList.index(max(nList)):])
    except:
        pass

n = int(input())
nList = list(map(int, input().split()))
f(nList)