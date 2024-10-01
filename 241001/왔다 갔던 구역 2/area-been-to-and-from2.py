n = int(input())
arr = [0]*2001
now = 1001

for i in range(n):
    x, D = input().split()
    if D == 'L':
        for j in range(int(x)):
            now -= 1
            arr[now] += 1
    else:
        for j in range(int(x)):
            now += 1
            arr[now] += 1
cnt = 0
for i in range(len(arr)):
    if arr[i] >= 2:
        cnt += 1

print(cnt)