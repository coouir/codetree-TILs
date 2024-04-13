a, b = input().split()
a = int(a); b = int(b)
while a <= b:
    print(a, end=" ")
    if a%2 == 1:
        a *= 2
    else:
        a += 3