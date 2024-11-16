N, M, D, S = map(int, input().split())
arrD = [list(map(int, input().split())) for _ in range(D)]
arrS = [list(map(int, input().split())) for _ in range(S)]

arr = [0]*51

M = 0
arrD.sort(key = lambda x: [x[1]])
for i in range(D):
    for j in range(S):
        if arrD[i][0] == arrS[j][0] and arrD[i][2] < arrS[j][1]:
            arr[arrD[i][1]] += 1

M = 0
for i in range(51):
    if arr[i] == S:
        cnt = 0
        for j in range(D):
            if arrD[j][1] == i:
                cnt += 1
        M = max(M, cnt)

print(M)