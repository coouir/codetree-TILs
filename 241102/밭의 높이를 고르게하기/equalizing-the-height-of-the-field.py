import sys

N, H, T = map(int, input().split())
arr = list(map(int, input().split()))

m = sys.maxsize
for i in range(N-T+1):
    cost = 0
    for j in range(i, i+T):
        if arr[j] < H:
            cost += H-arr[j]
        elif arr[j] > H:
            cost += arr[j]-H
    m = min(m, cost)

print(m)