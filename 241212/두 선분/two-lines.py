x1, x2, x3, x4 = map(int, input().split())

if not (x2 < x3) or not(x4 < x1):
    print("intersecting")
else:
    print("nonintersecting")