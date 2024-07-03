cnt = 0

odd = 1
oddList = []

while True:
    a = input()

    if a == '0':
        break
    else:
        if odd%2 == 1:
            oddList.append(a)
        odd += 1
        cnt += 1

print(cnt)
for i in oddList:
    print(i)