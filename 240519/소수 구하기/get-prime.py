n = int(input())

for i in range(1, n+1):
    sum_ = 0
    for j in range(1, i+1):
        if i%j == 0:
            sum_ += 1
    if sum_ == 2:
        print(i, end=' ')