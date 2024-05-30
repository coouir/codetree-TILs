def contains_369(num):
    while num > 0:
        if num % 10 in [3, 6, 9]:
            return True
        num //= 10
    return False

def is_369_number(num):
    return contains_369(num) or (num%3==0)


a, b = tuple(map(int, input().split()))

cnt = 0

for num in range(a, b+1):
    if is_369_number(num):
        cnt += 1

print(cnt)