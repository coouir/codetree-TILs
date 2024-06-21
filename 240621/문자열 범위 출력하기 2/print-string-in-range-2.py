s = input()
n = int(input())

if n >= len(s):
    for i in range(n-1, -1 , -1):
        print(s[i], end='')
else:
    for i in range(n):
        print(s[n-i+2], end='' )