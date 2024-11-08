import sys

arr = list(map(int, input().split()))
d = sys.maxsize

for i in range(5):
    for j in range(i+1, 5):

        for a in range(5):
            if a == i or a == j:
                continue
            
            x = arr[i] + arr[j]
            y = arr[a]
            z = sum(arr) - (x+y)
            if x != y and y != z and x != z:
                d = min(d, max(x,y,z) - min(x,y,z))

if d == sys.maxsize:
    print(-1)
else:
    print(d)