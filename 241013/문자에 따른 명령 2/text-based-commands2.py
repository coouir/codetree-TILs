dir_num = 3 
x, y = 0, 0
dx, dy = [1, 0, -1, 0], [0, -1, 0, 1]

arr = list(input())
for c in arr:
    if c == 'L':
        dir_num = (dir_num + 3) % 4
    elif c == 'R':
        dir_num = (dir_num + 1) % 4
    else:
        x, y = x+dx[dir_num], y+dy[dir_num]

print(x, y)