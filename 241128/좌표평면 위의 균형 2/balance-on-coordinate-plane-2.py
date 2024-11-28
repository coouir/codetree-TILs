N = int(input())
arr = [list(map(int, input().split())) for _ in range(N)]

M = 100

for X in range(2, 101, 2):
    for Y in range(2, 101, 2):
        Q1, Q2, Q3, Q4 = 0, 0, 0, 0
        for n in range(N):
            x, y = arr[n][0], arr[n][1]
            if x < X:
                if y > Y:
                    Q2 += 1
                elif y < Y:
                    Q3 += 1
            elif x > X:
                if y > Y:
                    Q1 += 1
                elif y < Y:
                    Q4 += 1
        M = min(M, max(Q1, Q2, Q3, Q4))

print(M)
