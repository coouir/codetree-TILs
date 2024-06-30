a, b = input().split()

sa = ''
for i in a:
    if not(i.isdigit()):
        break
    sa += i

sb = ''
for i in b:
    if not(i.isdigit()):
        break
    sb += i

print(int(sa)+int(sb))