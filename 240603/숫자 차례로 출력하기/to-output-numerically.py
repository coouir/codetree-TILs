n = int(input())

def print1(num):
    if num == 0:
        return
    print1(num-1)
    print(num, end=' ')

def print2(num):
    if num == 0:
        return
    print(num, end=' ')
    print2(num-1)

print1(n)
print()
print2(n)