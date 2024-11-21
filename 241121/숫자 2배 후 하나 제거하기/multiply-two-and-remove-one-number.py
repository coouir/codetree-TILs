import sys

n = int(input())
arr = list(map(int, input().split()))

m = sys.maxsize

for i in range(n):
    arr[i] *= 2
    for j in range(n):
        arrR = []
        for k in range(n):
            if k != j:
                arrR.append(arr[k])
        sum_diff = 0
        for k in range(n-2):
            sum_diff += abs(arrR[k+1] - arrR[k])
        
        m = min(m, sum_diff)
    arr[i] //= 2

print(m)