X, Y = map(int, input().split())

M = 0 
for i in range(X, Y+1):
    M = max(M, sum(list(map(int, list(str(i))))))
print(M)