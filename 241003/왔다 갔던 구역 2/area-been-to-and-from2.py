arr = [0] * 2001
now = 1000
n = int(input())
for i in range(n):
    x, D = input().split()
    arr[now] += 1
    if D == 'L':
        for j in range(int(x)-1):
            now -= 1
            arr[now] += 1
        now -= 1
    else:
        for j in range(int(x)-1):
            now += 1
            arr[now] += 1
        now += 1

cnt = 0
for i in range(2001):
    if arr[i] >= 2:
        cnt += 1

print(cnt)