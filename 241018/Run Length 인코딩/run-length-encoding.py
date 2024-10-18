A = list(input())
cnt = 0
s = ''
for i in range(1, len(A)):
    cnt += 1
    if A[i-1] != A[i]:
        s += A[i-1]+str(cnt)
        cnt = 0
s += A[-1]+str(cnt+1)
print(len(s), '\n'+s)