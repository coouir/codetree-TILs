s = input()
n = int(input())

if n >= len(s):
    for i in range(len(s)-1, -1 , -1):
        print(s[i], end='')
else:
    for i in range(n):
        print(s[len(s)-i-1], end='' )