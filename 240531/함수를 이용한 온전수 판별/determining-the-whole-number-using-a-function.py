def is_check(num):
    if num % 2 == 0:
        return False
    
    if num % 10 == 5:
        return False
    
    if num % 3 == 0 and num % 9 != 0:
        return False
    
    return True

a, b = tuple(map(int, input().split()))

cnt = 0

for num in range(a, b+1):
    if is_check(num):
        cnt += 1

print(cnt)