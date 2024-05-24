n = int(input())
arr = list(map(int, input().split()))

list_ = []

for i in arr:
    if i%2 == 0:
        list_.append(i)

for j in list_:
    print(j, end=' ')