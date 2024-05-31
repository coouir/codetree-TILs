def is_check_2(num):
    s = 0

    while num > 0:
        s += num % 10
        num //= 10
    if s%2 == 0:
        return True
    return False

def is_check(num):
    check = True
    if num == 1:
        return False
    
    for i in range(2, num):
        if num%i == 0:
            check = False
    return check and is_check_2(num)

a, b = tuple(map(int, input().split()))

cnt = 0

for num in range(a, b+1):
    if is_check(num):
        cnt += 1

print(cnt)