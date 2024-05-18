start, end = input().split()
start = int(start); end = int(end)

cnt = 0 

for i in range(start, end+1):

    sum_ = 0
    for j in range(1, i+1):
        if i%j == 0:
            sum_ += 1
    if sum_ == 3:
        cnt += 1
        
print(cnt)