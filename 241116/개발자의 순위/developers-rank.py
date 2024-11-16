K, N = map(int, input().split())
arr = [list(map(int, input().split())) for _ in range(K)]
cnt = 0

for i in range(N):
    for j in range(i+1, N):

        check = False

        for k in range(1, K):
            for a in range(N):
                for b in range(i+1, N):
                    if arr[0][i] == arr[k][a] and arr[0][j] == arr[k][b]:
                        check = True

            if check == True and k != K-1:
                check = False
            else:
                break

        if check:
            cnt += 1
print(cnt)
