N = int(input())
arr = list(map(int, input().split()))

m = 100000
for i in range(N):
    s = 0
    for j in range(N):
        if i == j:
            continue
        s += abs(j-i) * arr[j]
    m = min(m, s)

print(m)