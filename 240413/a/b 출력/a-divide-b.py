a, b = input().split()
a = int(a); b = int(b)

r = a//b; s = a%b

print(r, end=".")

for i in range(20):
    r = (s*10) // b
    s = (s*10) % b
    
    print(r, end="")