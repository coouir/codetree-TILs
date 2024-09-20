a, b, c, d = map(int, input().split())

m = 0

while True:
    if a == c and b == d:
        break
    m += 1
    b += 1
    
    if b == 60:
        a += 1
        b = 0

print(m)