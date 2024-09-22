a, b, c = map(int, input().split())
d, h, m = 11, 11, 11

if a == 11 and b == 11 and c < 11:
    print(-1)
elif a == 11 and b < 11:
    print(-1)
else:
    cnt = 0
    while True:
        if d == a and h == b and m == c:
            break
        m += 1
        cnt += 1
        if m == 60:
            h += 1
            m = 0
        
        if h == 24:
            d += 1
            h = 0
    print(cnt)