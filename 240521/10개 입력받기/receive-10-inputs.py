arr = list(map(int, input().split()))

number = []

for i in arr:
    if i == 0:
        break
    else:
        number.append(i)

print(sum(number), '{:.1f}'.format(sum(number)/len(number)))