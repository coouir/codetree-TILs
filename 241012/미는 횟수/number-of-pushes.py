A = input()
B = input()

check = False

for i in range(len(A)-1):
    A = A[1:] + A[0]
    if A == B:
        print(i+1)
        check = True
        break

if not(check):
    print(-1)