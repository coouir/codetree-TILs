import sys

m = sys.maxsize

N, S = map(int, input().split())
arr = list(map(int, input().split()))


for i in range(N):
    for j in range(i+1, N):
        x = sum(arr)-(arr[i]+arr[j])
        m = min(m, abs(x-S))
print(m)