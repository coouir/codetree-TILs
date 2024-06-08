def f(a, b):
    check = True
    cnt = 1
    s = a.index(b[0])
    for i in b[1::]:
        if a[s+cnt] != i:
            check = False
        cnt += 1
    return check

n1, n2 = tuple(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))

if f(a, b):
    print('Yes')
else:
    print('No')