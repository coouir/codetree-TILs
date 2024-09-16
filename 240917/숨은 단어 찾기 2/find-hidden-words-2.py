N, M = map(int, input().split())
arr = [list(input()) for i in range(N)]

cnt = 0

# 1
for i in range(N):
    for j in range(M-2):
        if arr[i][j:j+3] == ['L','E','E'] or arr[i][j:j+3] == ['E','E','L']:
            cnt += 1

# 2
for i in range(N-2):
    for j in range(M):
        if arr[i][j]+arr[i+1][j]+arr[i+2][j] == "LEE" or arr[i][j]+arr[i+1][j]+arr[i+2][j] == "EEL":
            cnt += 1

# 3
for i in range(N-2):
    for j in range(M-2):
        if arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2] == "LEE" or arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2] == "EEL":
            cnt += 1

# 4
for i in range(N-2):
    for j in range(2, M):
        if arr[i][j]+arr[i+1][j-1]+arr[i+2][j-2] == "LEE" or arr[i][j]+arr[i+1][j-1]+arr[i+2][j-2] == "EEL":
            cnt += 1
            
print(cnt)