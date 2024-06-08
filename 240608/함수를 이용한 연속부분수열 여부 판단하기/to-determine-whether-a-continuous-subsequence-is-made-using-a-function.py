def f(a, b):
    check = True 
    cnt = 1
    for i in range(len(a)):
        for j in range(len(b)):
            if a[i] == b[j]:
                for _ in b[j+1::]:
                    if _ != a[i+cnt]:
                        check = False
                return check
        

n1, n2 = tuple(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))

if f(a, b):
    print('Yes')
else:
    print('No')