arr = list(map(int, input().split()))
total = sum(arr)

m = 2999997

for i in range(6):
    for j in range(i+1, 6):
        for k in range(j+1, 6):
            s = arr[i] + arr[j] + arr[k]
            m = min(m, abs(s- (total-s)))

print(m)