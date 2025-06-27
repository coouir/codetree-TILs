A = input()

cnt = 0
for i in range(len(A)):
    for j in range(i+1, len(A)):
        if not(A[i] == '(' and A[j] == ')'):
            continue
        cnt += 1

print(cnt)