def f(a, b):
    check = True 
    for i in range(len(a)):
        for j in range(len(b)):
            if a[i] == b[j]:
                for _ in range(j+1, len(b)):
                    if a[_-j+1] != b[_]:
                        check = False
                return check
        

n1, n2 = tuple(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))

if f(a, b):
    print('Yes')
else:
    print('No')