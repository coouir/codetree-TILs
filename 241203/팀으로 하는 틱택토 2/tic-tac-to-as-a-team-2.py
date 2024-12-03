arr = [list(map(int, input())) for _ in range(3)]

cnt = 0
for i in range(3):
    if (arr[i][0] == arr[i][1] and arr[i][0] != arr[i][2]):
        cnt += 1
    elif (arr[i][0] != arr[i][1] and arr[i][0] == arr[i][2]):
        cnt += 1
    elif (arr[i][0] != arr[i][1] and arr[i][1] == arr[i][2]):
        cnt += 1

for i in range(3):
    if (arr[0][i] == arr[1][i] and arr[0][i] != arr[2][i]):
        cnt += 1
    elif (arr[0][i] != arr[1][i] and arr[0][i] == arr[2][i]):
        cnt += 1
    elif (arr[0][i] != arr[1][i] and arr[1][i] == arr[2][i]):
        cnt += 1

if (arr[0][0] == arr[1][1] and arr[0][0] != arr[2][2]):
    cnt += 1
elif (arr[0][0] != arr[1][1] and arr[0][0] == arr[2][2]):
    cnt += 1
elif (arr[0][0] != arr[1][1] and arr[1][1] == arr[2][2]):
    cnt += 1

if (arr[0][2] == arr[1][1] and arr[0][2] != arr[2][1]):
    cnt += 1
elif (arr[0][2] != arr[1][1] and arr[0][2] == arr[2][1]):
    cnt += 1
elif (arr[0][2] != arr[1][1] and arr[1][1] == arr[2][1]):
    cnt += 1
    
print(cnt)