a, b = input().split()
a = int(a); b = int(b)
print(a, end=" ")

for i in range(a, b+1):
    
    if b > a:
        if a%2 != 0:
            a *= 2
        else:
            a += 3

        print(a, end=" ")