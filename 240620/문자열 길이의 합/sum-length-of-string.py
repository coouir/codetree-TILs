n = int(input())

s = 0
cnt = 0

for i in range(n):
    string = input()
    s += len(string)
    cnt += string.count('a')

print(s, cnt)