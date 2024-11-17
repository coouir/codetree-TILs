import sys

T, a, b = map(int, input().split())
arr = [0]*1001

for _ in range(T):
    c, x = input().split()
    arr[int(x)] = c

cnt = 0
for i in range(a, b+1):
    minS, minN = sys.maxsize, sys.maxsize
    for j in range(1001):
        if arr[j] == 'S':
            minS = min(minS, abs(i-j))

        if arr[j] == 'N':
            minN = min(minN, abs(i-j))
    if minS <= minN:
        cnt += 1

print(cnt)