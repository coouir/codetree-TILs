s = input()

eec = 0; ebc = 0

for i in range(len(s)-1):
    if s[i]+s[i+1] == 'ee':
        eec +=1
    if s[i]+s[i+1] == 'eb':
        ebc += 1

print(eec, ebc)