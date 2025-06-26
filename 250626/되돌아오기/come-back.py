x, y = 0, 0
dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]

mapper = {
    'N' : 0,
    'E' : 1,
    'S' : 2,
    'W' : 3 
}

cnt = 0

N = int(input())
for i in range(N):
    d, dist = map(str, input().split())
    dist = int(dist)
    
    for j in range(dist):
        x += dx[mapper[d]]
        y += dy[mapper[d]]

        cnt += 1
        if x == 0 and y == 0:
            print(cnt)
            exit()

print(-1)