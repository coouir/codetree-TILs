N = int(input())
arr = [list(map(int, input().split())) for i in range(N)]

M = 0
I, J = 0, 0
for i in range(N):
    for j in range(N-2):
        x = sum(arr[i][j:j+3])
        if M <= x:
            M = x
            I, J = i, J
m = 0
for i in range(N):
    for j in range(N-2):
        if i == I and (j == J or j == J+1 or j == J+2 or j == J-1 or j == J-2):
            continue
        m = max(m, sum(arr[i][j:j+3]))

print(M+m)