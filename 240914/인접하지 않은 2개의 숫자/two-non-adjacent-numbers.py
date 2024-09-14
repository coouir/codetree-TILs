n = int(input())
arr = list(map(int, input().split()))

M = 0
for i in range(n):
    if i == 0:
        x = arr[2:]
        M = max(M, arr[0]+max(x))
    elif i == n-1:
        x = arr[:n-2]
        M = max(M, arr[n-1]+max(x))
    else:
        x = arr[:i-1]+arr[i+2:]
        M = max(M, arr[i]+max(x))
print(M)