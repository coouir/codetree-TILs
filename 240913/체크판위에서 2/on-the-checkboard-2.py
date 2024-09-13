R, C = map(int, input().split())
arr = []
for i in range(R):
    arr.append(list(input().split()))

now = arr[0][0]
cnt = 0

for i in range(1, R):
    for j in range(1, C):
        if arr[i][j] != now:
            a = arr[i][j]
            for k in range(i+1, R):
                for l in range(j+1, C):
                    if arr[k][l] != a:
                        b = arr[k][l]
                        for m in range(k+1, R):
                            for n in range(l+1, C):
                                if arr[m][n] != b and m == R-1 and n == C-1:
                                    cnt += 1

print(cnt)