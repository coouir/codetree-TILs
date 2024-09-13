a = input()

m = 0
for i in range(len(a)):
    x = a
    if a[i] == '1':
        x = a[:i]+'0'+a[i+1:]
    else:
        x = '0b'+ a[:i]+'1'+a[i+1:]
    m = max(m, int(x, 2))
print(m)