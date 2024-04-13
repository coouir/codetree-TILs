a_3, a_5 = 0, 0

for i in range(10):
    a = int(input())
    if a%3 == 0:
        a_3 += 1
    if a%5 == 0:
        a_5 += 1

print(a_3, a_5)