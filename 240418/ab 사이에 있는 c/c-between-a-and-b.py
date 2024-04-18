a, b, c = input().split()
a = int(a); b = int(b); c = int(c)

s = False

for i in range(a, b+1):
    if i%c == 0:
        s = True

if s == True:
    print("YES")
else:
    print("NO")