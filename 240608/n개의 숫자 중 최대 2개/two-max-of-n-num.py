n = int(input())
list_ = list(map(int, input().split()))
list_ = sorted(list_)

print(list_[-1], list_[-2])