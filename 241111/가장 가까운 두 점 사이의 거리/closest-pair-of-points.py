import sys

n = int(input())
arr = [list(map(int, input().split())) for _ in range(n)]

d = sys.maxsize

for i in range(n):
    for j in range(i+1, n):
        d = min(d, (arr[i][0]-arr[j][0])**2 + (arr[i][1]-arr[j][1])**2)

print(d)