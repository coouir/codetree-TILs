def in_range(r, c):
    return (0 <= r and r < 19) and (0 <= c and c < 19)

arr = [list(map(int, input().split())) for i in range(19)]

dr = [-1, -1, -1, 0, 0, 1, 1, 1]
dc = [-1, 0, 1, -1, 1, -1, 0, 1]

for i in range(19):
    for j in range(19):
        if arr[i][j] == 0:
            continue

        cnt = 0
        for k in range(4):
            r, c = i, j
            for l in range(2):
                r += dr[k]
                c += dc[k]
                if in_range(r, c) and arr[r][c] == arr[i][j]:
                    cnt += 1

            r, c = i, j
            for l in range(2):
                r += dr[7-k]
                c += dc[7-k]
                if in_range(r, c) and arr[r][c] == arr[i][j]:
                    cnt += 1
            if cnt == 4:
                print(arr[i][j])
                print(i+1, j+1)
                exit()

print(0)
