N = int(input())
arr = [list(map(int, input().split())) for i in range(N)]
Mm = [0, 0]
for i in range(N):
    for j in range(N-2):
        Mm.sort()
        x = sum(arr[i][j:j+3])
        if Mm[0] < x:
            Mm[0] = x
        elif Mm[1] < x:
            Mm[1] = x

print(Mm[0]+Mm[1])