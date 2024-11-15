N, B = map(int, input().split())
arr = [int(input()) for _ in range(N)]
arr.sort()

M = 0
for i in range(N):
    cntC = arr[i]/2
    cntP = 1
    for j in range(N):
        if i == j:
            continue
        cntC += arr[j]
        if cntC >= B:
            M = max(M, cntP)
            break
        else:
            cntP += 1

print(M)
