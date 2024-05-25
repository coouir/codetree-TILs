arr = list(map(int, input().split()))

cnt_arr = [0] * 10

for i in arr:
    if i == 0:
        break
    else:
        cnt_arr[i//10] += 1

for i in range(1, 10):
    print(f'{i} - {cnt_arr[i]}')