def fa(n):
    return n%3 == 0

def fb(n):
    check = False
    for j in str(n):
        if j == '3' or j == '6' or j =='9':
            check = True
    return check
        

cnt = 0
a, b = tuple(map(int, input().split()))
for i in range(a, b+1):
    if fa(i) or fb(i):
        cnt += 1
    

print(cnt)