dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

x, y = 0, 0

mapper = {
    'N' : 0,
    'E' : 1,
    'S' : 2,
    'W' : 3 
}

N = int(input())
for _ in range(N):
    d, dist = map(str, input().split())
    dist = int(dist)

    x += dx[mapper[d]]*dist
    y += dy[mapper[d]]*dist

print(x, y)