nList = []

n = int(input())

for i in range(n):
    nList.append(input())

c = input()
cnt = 0
s = 0

for j in nList:
    if j[0] == c:
        cnt += 1
        s += len(j)

f = f"{round(s/cnt, 2):.2f}"
print(cnt, f)