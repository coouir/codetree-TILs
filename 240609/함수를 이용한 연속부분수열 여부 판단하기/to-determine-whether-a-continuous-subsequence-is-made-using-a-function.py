def f(a, b):
    check = True

    if len(a) < len(b):
        return False
    
    for i in range(len(a)):
        for j in range(len(b)):
            if a[i] == b[j]:
                cnt = 1
                for _ in range(j+1, len(b)):
                    if a[i+cnt] != b[_]:
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