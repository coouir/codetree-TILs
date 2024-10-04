x1A, y1A, x2A, y2A = map(int, input().split())
x1B, y1B, x2B, y2B = map(int, input().split())

arr = [[0]*2001 for i in range(2001)]

for i in range(x1A, x2A+1):
    for j in range(y1A, y2A+1):
        arr[i+1000][j+1000] = 1

for i in range(x1B+1, x2B):
    for j in range(y1B+1, y2B):
            arr[i+1000][j+1000] = 0

points = []
for i in range(2001):
    for j in range(2001):
        if arr[i][j] == 1:
            points.append([i, j])

if len(points) != 0:
    w = abs(points[-1][0]-points[0][0])
    points.sort(key = lambda s: [s[1]])
    h = abs(points[-1][1]-points[0][1])
    print(w*h)
else:
    print(0)