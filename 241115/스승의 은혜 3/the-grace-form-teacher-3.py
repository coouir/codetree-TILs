N, B = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(N)]

arr = sorted(arr, key = lambda x: [x[0]])

M = 0
for i in range(N):
    cntC = arr[i][0]/2 + arr[i][1]
    cntP = 1
    for j in range(N):
        if i == j:
            continue
        cntC += (arr[j][0]+arr[j][1])
        if cntC > B:
            break
        else:
            cntP += 1
    M = max(M, cntP)

print(M)
