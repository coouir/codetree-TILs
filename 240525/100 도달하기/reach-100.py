n = int(input())

arr = []; arr.append(1); arr.append(n)

while True:
    arr.append(arr[-2] + arr[-1])
    if arr[-1] > 100:
        break

for i in arr:
    print(i, end=' ')