n = int(input())

arr = []; arr.append(1); arr.append(n)

while True:
    if arr[-2]+arr[-1] > 100:
        arr.append(arr[-2] + arr[-1])
        break
    else:
        arr.append(arr[-2] + arr[-1])

for i in arr:
    print(i, end=' ')