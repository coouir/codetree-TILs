N = int(input())
arr = []
for i in range(N):
    arr.append(list(map(int, input().split())))
m = 1000000
for i in range(1, N-1):
    x = arr[:i] + arr[i+1:]
    d = 0
    for j in range(len(x)-1):
        d += abs(x[j][0]-x[j+1][0]) + abs(x[j][1]-x[j+1][1])
    m = min(m, d)

print(m)