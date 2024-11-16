X, Y = map(int, input().split())
cnt = 0

for i in range(X, Y+1):
    arr = [0]*10
    for j in list(map(int, list(str(i)))):
        arr[j] += 1
    
    checkN = 0
    check0 = False
    for m in range(10):
        if arr[m] != 0:
            checkN += 1
        if arr[m] == 1:
            check0 = True
        
    if checkN == 2 and check0:
        cnt += 1

print(cnt)