arr = list(map(int, input().split()))

sum_2 = 0
sum_3 = 0
cnt = 0

for i in range(1, len(arr), 2):
    sum_2 += arr[i]

for j in range(2, len(arr), 3):
    cnt += 1
    sum_3 += arr[j]

print(sum_2, sum_3/cnt)