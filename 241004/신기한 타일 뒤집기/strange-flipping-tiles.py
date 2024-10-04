# x L : 왼쪽으로 이동하며 왼쪽으로 뒤집는다. 즉, 타일을 흰색으로 바꾼다
# x R : 오른쪽으로 이동하며 오른쪽으로 뒤집는다. 즉, 타일을 검은색으로 바꾼다
# 흰색 : 2, 검은색 : 1

arr = [0] * 200001
now = 100000

n = int(input())
for i in range(n):
    x, D = input().split()

    if D == 'L':
        for j in range(int(x)):
            arr[now-j] = 2
        now = now - int(x) + 1
    else:
        for j in range(int(x)):
            arr[now+j] = 1
        now += int(x) - 1

cnt_w, cnt_b = 0, 0
for i in range(200001):
    if arr[i] == 2:
        cnt_w += 1
    elif arr[i] == 1:
        cnt_b += 1
print(cnt_w, cnt_b)