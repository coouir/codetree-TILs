list_ = input()
sum = 0

for i in list_:
    if '0' <= i <= '9':
        sum += int(i)

print(sum)