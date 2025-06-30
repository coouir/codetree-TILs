str = input()
N = len(str)

cnt = 0
for i in range(N-1):
    for j in range(i+2, N-1):
        if not (str[i] + str[i+1] == '((' and str[j] + str[j+1] == '))'):
            continue
        
        cnt += 1

print(cnt)
