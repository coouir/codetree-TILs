N = int(input())
str = input()

cnt = 0
for i in range(N):
    for j in range(i+1, N):
        for k in range(j+1, N):
            if str[i]+str[j]+str[k] == "COW":   
                cnt += 1

print(cnt)
                