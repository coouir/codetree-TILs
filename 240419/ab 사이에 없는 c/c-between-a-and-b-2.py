a, b, c = input().split()
a = int(a); b = int(b); c = int(c)

s = True

for i in range(a, b+1):
    if i%c == 0:
        s = False

if s == True:
    print('YES')
else:
    print('NO')