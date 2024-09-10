n = int(input())
arr = list(map(int, input().split()))

m = 500000
for i in range(n):
    s = 0
    for j in range(n):
        if i != j:
            s += abs(i-j)*arr[j]
    m = min(m, s)
print(m)