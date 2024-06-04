def s(num):
    if num == 1:
        return 1
    if num == 2:
        return 2
    return num + s(num-2)

n = int(input())
print(s(n))