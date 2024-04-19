n = int(input())
s = True

for i in range(2, n):
    if n%i == 0:
        s = False

if s == True:
    print('P')
else:
    print('C')