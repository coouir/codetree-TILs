cnt = 0

def f(num):
    global cnt
    if num == 1:
        return
        
    cnt += 1

    if num%2 == 0:
        return f(num = num // 2)
    else:
        return f(num = num // 3)

n = int(input())
f(n)
print(cnt)