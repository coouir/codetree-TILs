n = int(input())
list_ = list(map(int, input().split()))
new = []
for i in list_:
    if list_.count(i) == 1:
        new.append(i)
    
if len(new) == 0:
    print(-1)
else:
    print(max(new))