string = input()

nList = []

for i in range(len(string)):
    if i%2 == 1:
        nList.append(string[i])

for s in nList[::-1]:
    print(s, end='')