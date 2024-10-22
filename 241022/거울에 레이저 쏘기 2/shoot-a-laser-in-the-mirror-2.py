N = int(input())

arr = []
for i in range(N+2):
    if i == 0 or i == (N+1):
        arr.append([0]*(N+2))
    else:
        arr.append([0]+list(input())+[0])

cnt = 1
for i in range(1, N+1):
    arr[0][i] = cnt
    cnt += 1
for i in range(1, N+1):
    arr[i][N+1] = cnt
    cnt += 1
for i in range(1, N+1):
    arr[N+1][N+1-i] = cnt
    cnt += 1
for i in range(1, N+1):
    arr[N+1-i][0] = cnt
    cnt += 1

def in_range(x, y):
    return not(0 <= x < (N+2) and 0 <= y < (N+2))

dxs, dys = [0, 1, -1, 0], [1, 0, 0, -1]

d_x, d_y = 0, 0
d = 0
K = int(input())
for i in range(N+2):
    for j in range(N+2):
        if arr[i][j] == K:
            d_x, d_y = i, j
            for dir_num in range(4):
                x, y = i+dxs[dir_num], j+dys[dir_num]
                if in_range(x, y):
                    d = 3-dir_num

if d == 2:
    d = 3
elif d == 3:
    d = 2
dxs, dys = [0, 1, 0, -1], [1, 0, -1, 0] #동남서북
d_x, d_y = d_x + dxs[d], d_y + dys[d]
cnt = 0
while(not(str(arr[d_x][d_y]).isdigit())):
    if arr[d_x][d_y] == '/':
        if d == 0:
            d = 3
        elif d == 1:
            d = 2
        elif d == 2:
            d = 1
        else:
            d == 0
    else:
        if d == 0:
            d = 1
        elif d == 1:
            d = 0
        elif d == 2:
            d = 3
        else:
            d = 2
    d_x, d_y = d_x + dxs[d], d_y + dys[d]
    cnt += 1

print(cnt)