import sys

arr = list(map(int, input().split()))
D = sys.maxsize
for a in range(6):
    for b in range(a+1, 6):
        for c in range(6):
            for d in range(c+1, 6):
                if c == a or c == b or d == a or d == b:
                    continue
                x = arr[a] + arr[b]
                y = arr[c] + arr[d]
                z = sum(arr) - (x+y)
                D = min(D, max(x, y, z)-min(x, y, z))

print(D)