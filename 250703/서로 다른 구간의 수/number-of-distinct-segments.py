N = int(input())

arr = [list(map(int, input().split())) for _ in range(N)]

points = []
for i, (a, b) in enumerate(arr):
    points.append([a, +1, i])
    points.append([b, -1, i])
points.sort()

ans = 0

segs = set()
for x, v, index in points:
    if v == +1:
        if not segs:
            ans += 1
        segs.add(index)
    else:
        segs.remove(index)

print(ans)