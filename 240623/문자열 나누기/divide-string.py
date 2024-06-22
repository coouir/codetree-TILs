n = int(input())
l = input().split()

s = ''
for i in l:
    s += i

def f(s):
    if len(s) <= 5:
        print(s)
        return
    print(s[0:5:1])
    return f(s[5::])

f(s)