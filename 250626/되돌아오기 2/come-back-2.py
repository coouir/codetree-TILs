x, y, dir = 0, 0, 0
dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

t = 0

str = input()
for char in str:
    t += 1
    if char == 'L':
        dir = (dir + 3)%4
    elif char == 'R':
        dir = (dir + 1)%4
    elif char == 'F':
        x += dx[dir]
        y += dy[dir]

        if x == 0 and y == 0:
            print(t)
            exit()

print(-1)