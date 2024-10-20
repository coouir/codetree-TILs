arr = list(input())

x, y = 0, 0
dir_num = 3

dx, dy = [1, 0, -1, 0], [0, -1, 0, 1]

time = 0
for c in arr:
    if c == 'L':
        dir_num = (dir_num + 1) % 4
    elif c == 'R':
        dir_num = (dir_num + 3) % 4
    else:
        x, y = x + dx[dir_num], y + dy[dir_num]
    time += 1

    if x == 0 and y == 0:
        print(time)
        exit()

print(-1)