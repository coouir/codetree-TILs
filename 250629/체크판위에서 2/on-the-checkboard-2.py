R, C = map(int, input().split())
arr = [input().split() for i in range(R)]

cnt = 0
for i in range(1, R-1):
    for j in range(1, C-1):
        for k in range(i+1, R-1):
            for l in range(j+1, C-1):
                if arr[i][j] == arr[0][0]:
                    continue
                if arr[k][l] != arr[0][0]:
                    continue
                if arr[k][l] == arr[R-1][C-1]:
                    continue
                
                cnt += 1

print(cnt)