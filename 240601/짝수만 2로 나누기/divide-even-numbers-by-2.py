def is_check(num):
    return num%2 == 0

n = int(input())

list = list(map(int, input().split()))

for i in range(len(list)):
    if is_check(list[i]):
        print(list[i]//2, end=' ')
    else:
        print(list[i], end=' ')