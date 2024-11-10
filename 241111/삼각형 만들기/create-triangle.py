N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

S = 0

for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            x1, y1 = arr[i][0], arr[i][1]
            x2, y2 = arr[j][0], arr[j][1]
            x3, y3 = arr[k][0], arr[k][1]
            S = max(S, abs((x1*y2)+(x2*y3)+(x3*y1))-((x2*y1)+(x3*y2)+(x1*y3)))
print(S)