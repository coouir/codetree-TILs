def s(a1, a2):
    result = 0
    for j in range(a1-1, a2):
        result += list_[j]
    return result

n, m = tuple(map(int, input().split()))
list_ = list(map(int, input().split()))

for i in range(m):
    a1, a2 = tuple(map(int, input().split()))
    print(s(a1, a2))