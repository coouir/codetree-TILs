N = int(input())

arr = [[0]*11]*11

x, y = 0, 0
dxs, dys = [1, -1, 0, 0], [0, 0, -1, 1] #동서남북
dir_num = 0
cnt = 0
for i in range(N):
    d, dd = input().split()
    if d == 'E':
        dir_num = 0
    elif d == 'S':
        dir_num = 2
    elif d == 'W':
        dir_num = 1
    elif d == 'N':
        dir_num = 3
    
    for j in range(int(dd)):
        cnt += 1
        x, y = x + dxs[dir_num], y + dys[dir_num]
        if x == 0 and y == 0:
            print(cnt)
            break