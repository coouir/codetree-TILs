arrN = [0]
arrM = [0]

# 거리 = 속도 * 시간

N, M = map(int, input().split())
for i in range(N):
    v, t = map(int, input().split())
    for j in range(t):
        arrN.append(arrN[-1] + v)

for i in range(M):
    v, t = map(int, input().split())
    for j in range(t):
        arrM.append(arrM[-1] + v)

cnt = 0

check = 100 # 2:공동, 1:N, 0:M
for i in range(1, len(arrN)):
    if arrN[i] == arrM[i]:
        if check != 2:
            cnt += 1
        check = 2
    elif arrN[i] > arrM[i]:
        if check != 1:
            cnt += 1
        check = 1
    else:
        if check != 0:
            cnt += 1
        check = 0

print(cnt)