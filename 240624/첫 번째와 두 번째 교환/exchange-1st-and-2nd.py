string = input()

f = string[0]
s = string[1]

l_s = list(string)

for i in range(len(l_s)):
    if l_s[i] == f:
        l_s[i] = s
    elif l_s[i] == s:
        l_s[i] = f

print(''.join(l_s))