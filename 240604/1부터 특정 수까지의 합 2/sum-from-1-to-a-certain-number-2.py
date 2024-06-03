def s(num):
    if num == 1:
        return 1
    return num + s(num-1)

n = int(input())

print(s(n))