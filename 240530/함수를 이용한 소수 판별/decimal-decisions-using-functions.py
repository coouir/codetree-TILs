def is_check(num):
    check = True
    for i in range(2, num):
        if num % i == 0:
            check = False
    return check

a, b = tuple(map(int, input().split()))

sum = 0

for num in range(a, b+1):
    if is_check(num):
        sum += num

print(sum)