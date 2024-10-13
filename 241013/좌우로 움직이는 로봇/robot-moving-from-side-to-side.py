n, m = map(int, input().split())
arrN = [0]
arrM = [0]

for i in range(n):
    t, d = input().split()
    if d == 'L':
        for j in range(int(t)):
            arrN.append(arrN[-1]-1)
    else:
        for j in range(int(t)):
            arrN.append(arrN[-1]+1)

for i in range(m):
    t, d = input().split()
    if d == 'L':
        for j in range(int(t)):
            arrM.append(arrM[-1]-1)
    else:
        for j in range(int(t)):
            arrM.append(arrM[-1]+1)
if len(arrN) < len(arrM):
    for i in range(len(arrM)-len(arrN)):
        arrN.append(arrN[-1])
elif len(arrN) > len(arrM):
    for i in range(len(arrN)-len(arrM)):
        arrM.append(arrM[-1])
cnt = 0
for i in range(1, len(arrN)):
    if arrN[i] == arrM[i]:
        if arrN[i-1] != arrM[i-1]:
            cnt += 1

print(cnt)