def is_check(a, b):
    for i in range(len(a)):
        for j in range(len(b)):
            if a[i] == b[j]:
                c = False
                for _ in range(j+1, len(b)):
                    i += 1
                    if a[i] == b[_]:
                        c = True
                    else:
                        return False
                return c    

n1, n2 = tuple(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))

if is_check(a, b):
    print("Yes")
else:
    print('No')