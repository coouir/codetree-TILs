n = int(input())

s = 0
cnt = 0

for i in range(n):
    string = input()
    s += len(string)
    if string[0] == 'a':
        cnt += 1

print(s, cnt)