n = int(input())

aList = list(map(int, input().split()))
bList = list(map(int, input().split()))

aList = sorted(aList); bList = sorted(bList)

check = True
for i in range(len(aList)):
    if aList[i] != bList[i]:
        check = False

if check:
    print('Yes')
else:
    print('No')