a, b = input().split()
a = int(a); b = int(b)

prod = 1

for i in range(a, b+1):
    prod *= i
print(prod)