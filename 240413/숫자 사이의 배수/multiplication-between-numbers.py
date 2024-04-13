a, b = input().split()
a = int(a); b = int(b)

r = 0
c = 0

for i in range(a, b+1):
    if i%5 == 0 or i%7 == 0:
        r += i
        c += 1

print(r, round(r/c, 1))