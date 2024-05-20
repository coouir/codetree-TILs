arr = list(map(int, input().split()))

list_2 = []

for i in arr:
    if i == 0:
        break
    elif i % 2 == 0:
        list_2.append(i)

print(len(list_2), sum(list_2))