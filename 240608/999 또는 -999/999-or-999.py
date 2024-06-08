list_ = list(map(int, input().split()))

if 999 in list_:
    del list_[list_.index(999)]
elif -999 in list_:
    del list_[list_.index(-999)]
print(max(list_), min(list_))