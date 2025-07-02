N = int(input())

H = [0 for _ in range(N+2)] # 주먹
S = [0 for _ in range(N+2)] # 가위 
P = [0 for _ in range(N+2)] # 보자기
for i in range(N):
    B = input()
    if B == 'H':
        H[i+1] = 1
    elif B == 'S':
        S[i+1] = 1
    elif B == 'P':
        P[i+1] = 1

prefixH = [0 for _ in range(N+2)] # 주먹 > 가위
prefixS = [0 for _ in range(N+2)] # 가위 > 보자기
prefixP = [0 for _ in range(N+2)] # 보자기 > 주먹

suffixH = [0 for _ in range(N+2)] # 주먹 > 가위
suffixS = [0 for _ in range(N+2)] # 가위 > 보자기
suffixP = [0 for _ in range(N+2)] # 보자기 > 주먹
for i in range(1, N+1):
    prefixH[i] = S[i] + prefixH[i-1]
    prefixS[i] = P[i] + prefixS[i-1]
    prefixP[i] = H[i] + prefixP[i-1]

for i in range(1, N+1)[::-1]:
    suffixH[i] = S[i] + suffixH[i+1]
    suffixS[i] = P[i] + suffixS[i+1]
    suffixP[i] = H[i] + suffixP[i+1]

answer = 0
for i in range(N+1):
    answer = max(answer, max(prefixH[i], prefixS[i], prefixP[i]) + max(suffixH[i+1], suffixS[i+1], suffixP[i+1]))

print(answer)
