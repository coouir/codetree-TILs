A = input()
cnt = 0

for i in range(len(A)-1):
    if A[i]+A[i+1] == "((":
        for j in range(i+2, len(A)-1):
            if A[j]+A[j+1] == "))":
                cnt += 1
print(cnt)