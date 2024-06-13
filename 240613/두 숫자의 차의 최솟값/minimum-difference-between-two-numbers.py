n = int(input())
nList = list(map(int, input().split()))

r = nList[1] - nList[0]
for i in range(1, len(nList)-1):
    if nList[i+1] - nList[i] < r:
        r = nList[i+1] - nList[i]

print(r)