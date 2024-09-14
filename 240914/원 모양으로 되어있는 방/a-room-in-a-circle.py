import sys

N = int(input())
arr = [int(input()) for i in range(N)]

M = sys.maxsize
for i in range(N):
    d = 0 
    for j in range(i+1, N):
        d += arr[j]*(j-i)
    for k in range(i):
        d += arr[k]*(N-i+k)
    M = min(M, d)
print(M)