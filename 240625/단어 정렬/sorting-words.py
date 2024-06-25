n = int(input())

lString = []

for i in range(n):
    lString.append(input())

lString = sorted(lString)

for j in lString:
    print(j)