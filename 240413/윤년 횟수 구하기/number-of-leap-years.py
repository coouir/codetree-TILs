n = int(input())
r = 0

for i in range(1, n+1):
    if i%4 == 0:
        if not(i%100 == 0 and i%400 != 0):
            r += 1

print(r)