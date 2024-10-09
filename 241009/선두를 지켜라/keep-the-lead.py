N, M = map(int, input().split())

arrN = [0]
arrM = [0]

for i in range(N):
    v, t = map(int, input().split())
    for j in range(t):
        arrN.append(arrN[-1]+v)

for i in range(M):
    v, t = map(int, input().split())
    for j in range(t):
        arrM.append(arrM[-1]+v)

check = 0
start = 0
cnt = 0

#첫 번째 선두
for i in range(1, len(arrN)):
    if arrN[i] > arrM[i]:
        check = 0
        start = i+1
        break
    elif arrN[i] < arrM[i]:
        check = 1
        start = i+1
        break

for i in range(start, len(arrN)):
    if check == 0 and arrN[i] < arrM[i]:
        check = 1
        cnt += 1
    elif check == 1 and arrN[i] > arrM[i]:
        check = 0
        cnt += 1

print(cnt)