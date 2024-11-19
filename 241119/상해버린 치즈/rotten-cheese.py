N, M, D, S = map(int, input().split())
arrD = [list(map(int, input().split())) for _ in range(D)]
arrS = [list(map(int, input().split())) for _ in range(S)]

Max = 0

for i in range(1, M+1):
    arrP = [0]*51
    for j in range(D):
        p, m, t = arrD[j]
        if i == m:
            for k in range(S):
                P, T = arrS[k]
                if p == P and t < T and arrP[p] == 0:
                    arrP[p] = 1

    if sum(arrP) == S:
        cnt = 0
        arrPP = [0]*51
        for j in range(D):
            p, m, t = arrD[j]
            if i == m and arrPP[p] == 0:
                cnt += 1
                arrPP[p] = 1

        Max = max(Max, cnt)

print(Max)