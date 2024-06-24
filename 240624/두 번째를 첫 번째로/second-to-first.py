s = input()
l_s = list(s)

i_f = l_s[0]
i_s = l_s[1]

for i in range(len(l_s)):
    if l_s[i] == i_s:
        l_s[i]= i_f

print(''.join(l_s))