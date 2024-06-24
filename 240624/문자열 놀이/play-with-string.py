s, q = input().split()

l_s = list(s)

for i in range(int(q)):
    a, b, c = input().split()
    if a == '1':
        l_s[int(b)-1], l_s[int(c)-1] = l_s[int(c)-1], l_s[int(b)-1]
        print(''.join(l_s))
    else:
        for j in range(len(l_s)):
            if l_s[j] == b:
                l_s[j] = c
        print(''.join(l_s))