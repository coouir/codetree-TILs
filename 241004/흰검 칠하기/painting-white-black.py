arr = [[] for i in range(200001)]
now = 100000

#흰색 : 2, 검은색 : 1

n = int(input())
for i in range(n):
    x, D = input().split()
    if D == 'R':
        for i in range(int(x)):
            arr[now+i].append(1)
        now += int(x)-1
    else:
        for i in range(int(x)):
            arr[now-i].append(2)
        now = now - int(x) + 1

cnt_w = 0
cnt_b = 0
cnt_g = 0

for i in range(200001):
    w = 0
    b = 0
    for j in arr[i]:
        if j == 2:
            w += 1
        if j == 1:
            b += 1
    if w >= 2 and b >= 2:
        cnt_g += 1
    else:
        if len(arr[i]) != 0:
            if arr[i][-1] == 2:
                cnt_w += 1
            else:
                cnt_b += 1
            
print(cnt_w, cnt_b, cnt_g)