a, b = input().split()
a = int(a); b = int(b)

while a <= b:
    if a%2 == 0:
        print(a, end=" ")
    a += 1