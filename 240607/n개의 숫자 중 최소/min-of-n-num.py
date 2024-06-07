n = int(input())
list_ = list(map(int, input().split()))

cnt = 0
for i in list_:
    if i == min(list_):
        cnt += 1
print(min(list_), cnt)