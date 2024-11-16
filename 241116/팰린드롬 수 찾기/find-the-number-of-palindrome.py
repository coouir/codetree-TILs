X, Y = map(int, input().split())

cnt = 0
for i in range(X, Y+1):
    if list(str(i)) == list(str(i))[::-1]:
        cnt += 1

print(cnt)