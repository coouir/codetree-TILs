dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]
x, y = 0, 0
dir = 0

str = input()
for c in str:
    if c == 'L':
        dir = (dir+3)%4
    elif c == 'R':
        dir = (dir+1)%4
    else:
        x += dx[dir]
        y += dy[dir]

print(x, y)
        

