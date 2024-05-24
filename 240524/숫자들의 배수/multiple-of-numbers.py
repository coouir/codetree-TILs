n = int(input())
arr = []

i = 1
while True:
    cnt = 0
    for _ in arr:
        if _%5 == 0:
            cnt += 1
    if cnt == 2:
        break
    arr.append(n*i)
    i += 1

for j in arr:
    print(j, end=' ')