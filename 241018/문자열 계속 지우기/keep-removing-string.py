A = input(); B = input()

while True:
    x = A.replace(B, '')
    if A == x:
        break
    else:
        A = x

print(A)