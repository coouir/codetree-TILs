from collections import deque

d = deque(list(input()))
arr = list(input())

for c in arr:
    if c == 'L':
        d.rotate(-1)
    else:
        d.rotate(1)
print(''.join(d))