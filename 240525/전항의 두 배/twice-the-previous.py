arr = list(map(int, input().split()))

for i in range(8):
    arr.append(arr[-1] + 2*arr[-2])

for j in arr:
    print(j, end=' ')