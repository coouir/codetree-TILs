n, q = tuple(map(int, input().split()))
list_ = list(map(int, input().split()))

for i in range(n):
    list__ = list(map(int, input().split()))

    if list__[0] == 1:
        print(list_[list__[1]-1])
    elif list__[0] == 2:
        try:
            print(list_.index(list__[1])+1)
        except:
            print('0')
    elif list__[0] == 3:
        for i in range(list__[1]-1, list__[2]):
            print(list_[i], end=' ')