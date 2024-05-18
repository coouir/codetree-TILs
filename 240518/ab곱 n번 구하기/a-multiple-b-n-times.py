n = int(input())

for i in range(n):
    a, b = input().split()
    a = int(a); b = int(b)

    sum_ = 1

    for j in range(a, b+1):
        sum_ *= j
    print(sum_)