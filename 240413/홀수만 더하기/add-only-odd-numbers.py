n = int(input())
r = 0

for i in range(n):
    a = int(input())

    if a%2 == 1 and a%3 == 0:
        r += a
print(r)