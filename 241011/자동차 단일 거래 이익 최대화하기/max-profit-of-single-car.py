n = int(input())
arrN = list(map(int, input().split()))

Max = 0

for i in range(n):
    x = sorted(arrN[:i])
    if len(x) != 0:
        Max = max(Max, arrN[i]-x[0])

print(Max)