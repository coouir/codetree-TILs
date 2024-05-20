arr = input().split()
a = []

for i in arr:
    if int(i) == 0:
        break
    else:
        a.append(int(i))

a = a[::-1]
for i in a:
    print(i, end=' ')