arr = input().split()

sum_ = 0
cnt = 0

for i in arr:
    if int(i) < 250:
        sum_ += int(i)
        cnt += 1
    else:
        break

print(sum_, round(sum_/cnt, 1))