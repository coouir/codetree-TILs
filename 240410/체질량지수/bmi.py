import math

h, w = input().split()
h = int(h); w = int(w)

b = (10000*w)/(h*h)

print(math.trunc(b))

if b >= 25:
    print("Obesity")