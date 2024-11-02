N = int(input())

arr = [0]*101
for i in range(N):
    p, a = input().split()
    arr[int(p)] = a

M = 0
for i in range(101):
    if arr[i] == 'G' or arr[i] == 'H':
        cntG = 0
        cntH = 0
        if arr[i] == 'G':
            cntG += 1
        if arr[i] == 'H':
            cntH += 1

        d = 0

        for j in range(i+1, 101):
            if arr[j] == 'G':
                cntG += 1
                if cntG == 0 or cntH == 0 or cntG == cntH:
                    d = max(d, j-i)
            elif arr[j] == 'H':
                cntH += 1
                if cntG == 0 or cntH == 0 or cntG == cntH:
                    d = max(d, j-i)
        M = max(M, d)

print(M)