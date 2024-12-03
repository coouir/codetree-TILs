arr = [list(map(int, input())) for _ in range(3)]

cnt = 0

arrR = []

for i in range(3):
    if (arr[i][0] == arr[i][1] and arr[i][0] != arr[i][2]):
        if [arr[i][0], arr[i][1], arr[i][2]] not in arrR:
            cnt += 1
            arrR.append([arr[i][0], arr[i][1], arr[i][2]])
    elif (arr[i][0] != arr[i][1] and arr[i][0] == arr[i][2]):
        if [arr[i][0], arr[i][1], arr[i][2]] not in arrR:
            cnt += 1
            arrR.append([arr[i][0], arr[i][1], arr[i][2]])
    elif (arr[i][0] != arr[i][1] and arr[i][1] == arr[i][2]):
        if [arr[i][0], arr[i][1], arr[i][2]] not in arrR:
            cnt += 1
            arrR.append([arr[i][0], arr[i][1], arr[i][2]])

for i in range(3):
    if (arr[0][i] == arr[1][i] and arr[0][i] != arr[2][i]):
        if [arr[0][i], arr[1][i], arr[2][i]] not in arrR:
            cnt += 1
            arrR.append([arr[0][i], arr[1][i], arr[2][i]])
    elif (arr[0][i] != arr[1][i] and arr[0][i] == arr[2][i]):
        if [arr[0][i], arr[1][i], arr[2][i]] not in arrR:
            cnt += 1
            arrR.append([arr[0][i], arr[1][i], arr[2][i]])
    elif (arr[0][i] != arr[1][i] and arr[1][i] == arr[2][i]):
        if [arr[0][i], arr[1][i], arr[2][i]] not in arrR:
            cnt += 1
            arrR.append([arr[0][i], arr[1][i], arr[2][i]])

if (arr[0][0] == arr[1][1] and arr[0][0] != arr[2][2]):
    if [arr[0][0], arr[1][1], arr[2][2]] not in arrR:
            cnt += 1
            arrR.append([arr[0][0], arr[1][1], arr[2][2]])
elif (arr[0][0] != arr[1][1] and arr[0][0] == arr[2][2]):
    if [arr[0][0], arr[1][1], arr[2][2]] not in arrR:
            cnt += 1
            arrR.append([arr[0][0], arr[1][1], arr[2][2]])
elif (arr[0][0] != arr[1][1] and arr[1][1] == arr[2][2]):
    if [arr[0][0], arr[1][1], arr[2][2]] not in arrR:
            cnt += 1
            arrR.append([arr[0][0], arr[1][1], arr[2][2]])

if (arr[0][2] == arr[1][1] and arr[0][2] != arr[2][0]):
    if [arr[0][2], arr[1][1], arr[2][0]] not in arrR:
            cnt += 1
            arrR.append([arr[0][2], arr[1][1], arr[2][0]])
elif (arr[0][2] != arr[1][1] and arr[0][2] == arr[2][0]):
    if [arr[0][2], arr[1][1], arr[2][0]] not in arrR:
            cnt += 1
            arrR.append([arr[0][2], arr[1][1], arr[2][0]])
elif (arr[0][2] != arr[1][1] and arr[1][1] == arr[2][0]):
    if [arr[0][2], arr[1][1], arr[2][0]] not in arrR:
            cnt += 1
            arrR.append([arr[0][2], arr[1][1], arr[2][0]])
    
print(cnt)