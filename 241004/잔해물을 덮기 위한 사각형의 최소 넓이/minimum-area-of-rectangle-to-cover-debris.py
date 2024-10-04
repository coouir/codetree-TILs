x1A, y1A, x2A, y2A = map(int, input().split())
x1B, y1B, x2B, y2B = map(int, input().split())

arr = [[0]*2001 for i in range(2001)]

S = (x2A-x1A) * (y2A-y1A)

for i in range(x1A, x2A+1):
    for j in range(y1A, y2A+1):
        arr[i+1000][j+1000] = 1

s = 0
for i in range(x1B, x2B+1):
    for j in range(y1B, y2B+1):
        if arr[i+1000][j+1000] == 1:
            arr[i+1000][j+1000] = 0

points = []
for i in range(2001):
    for j in range(2001):
        if arr[i][j] == 1:
            points.append([i, j])

w = abs(points[-1][0]-points[0][0])
points.sort(key = lambda s: [s[1]])
h = abs(points[-1][1]-points[0][1])
print(w*h)