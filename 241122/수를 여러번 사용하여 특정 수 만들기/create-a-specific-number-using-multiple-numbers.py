A, B, C = map(int, input().split())

M = 0

for i in range(C):
    for j in range(C):
        if (A*i + B*j <= C):
            M = max(M, A*i + B*j)
        else:
            break
print(M)