def f(a, b):
    check = True

    if len(a) < len(b):
        return False
    
    for i in range(len(a)):
        if a[i] == b[0]:
            check = True
            for j in range(len(b)):
                if a[i+j] != b[j]:
                    check = False
            if check == True:
                return check
    return check
            

n1, n2 = tuple(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))

if f(a, b):
    print('Yes')
else:
    print('No')