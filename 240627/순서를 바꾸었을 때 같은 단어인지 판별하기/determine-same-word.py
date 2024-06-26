a = input(); b = input()
aList = list(a); bList = list(b)

if len(aList) == len(bList):
    for i in range(len(aList)):
        if aList[i] in bList:
            bList.pop(bList.index(aList[i]))
    
    if len(bList) == 0:
        print('Yes')
    else:
        print('No')
else:
    print('No')