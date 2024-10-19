N, K, P, T = map(int, input().split());

arrInfected = [0]*(N+1)
arrInfected[P] = 1

arrCnt = [0]*(N+1)

arr = [list(map(int, input().split())) for _ in range(T)]
arr.sort(key = lambda x: [x[0]])

for i in range(T):
    x, y = arr[i][1], arr[i][2]
    if arrInfected[x] == 1:
        arrCnt[x] += 1
    if arrInfected[y] == 1:
        arrCnt[y] += 1
    
    if arrInfected[x] == 1 and arrCnt[x] <= K:
        arrInfected[y] = 1
    if arrInfected[y] == 1 and arrCnt[y] <= K:
        arrInfected[x] = 1

print(''.join(map(str, arrInfected[1:])))