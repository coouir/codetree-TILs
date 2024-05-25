cnt = [0] * 4

for i in range(3):
    arr = input().split()
    if arr[0] == 'Y':
        if int(arr[1]) >= 37:
            cnt[0] += 1
        else:
            cnt[2] += 1
    else:
        if int(arr[1]) >= 37:
            cnt[1] += 1
        else:
            cnt[3] += 1

for i in range(4):
    print(cnt[i], end=' ')

if cnt[0] >= 2:
    print('E')