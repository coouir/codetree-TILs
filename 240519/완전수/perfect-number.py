start, end = input().split()
start = int(start); end = int(end)

cnt = 0

for i in range(start, end+1):
    sum_ = 0

    for j in range(1, i):
        if i%j == 0:
            sum_ += j
    if i == sum_:
        cnt += 1
print(cnt)