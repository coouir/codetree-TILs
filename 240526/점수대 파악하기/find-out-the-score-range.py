score = list(map(int, input().split()))

cnt_score = [0] * 11

for i in score:
    if i == 0:
        break
    else:
        cnt_score[i//10] += 1

for j in range(10, 0, -1):
    print(f'{j*10} - {cnt_score[j]}')