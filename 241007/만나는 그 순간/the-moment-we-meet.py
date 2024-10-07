N, M = map(int, input().split())

arrN = [0]
arrM = [0]

for i in range(N):
    d, t = input().split()
    if d == 'L':
        for j in range(int(t)):
            arrN.append(arrN[-1]-1)
    else:
        for j in range(int(t)):
            arrN.append(arrN[-1]+1)

for i in range(M):
    d, t = input().split()
    if d == 'L':
        for j in range(int(t)):
            arrM.append(arrM[-1]-1)
    else:
        for j in range(int(t)):
            arrM.append(arrM[-1]+1)

for i in range(1, len(arrN)):
    if arrN[i] == arrM[i]:
        print(i)
        exit()
print(-1)