import sys

N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

S = sys.maxsize
for i in range(N):
    mX, mY = 40000, 40000
    MX, MY = 0, 0
    for j in range(N):
        if i == j:
            continue
        mX = min(mX, arr[j][0])
        MX = max(MX, arr[j][0])
        mY = min(mY, arr[j][1])
        MY = max(MY, arr[j][1])
    S = min(S, (MX-mX)*(MY-mY))

print(S)