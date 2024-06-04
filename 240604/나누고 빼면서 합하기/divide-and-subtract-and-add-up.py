def f(m):
    cnt = 0
    while m >= 1:
        cnt += list_[int(m-1)]
        if m % 2 == 1:
            m -= 1
        else:
            m /= 2
    return cnt

n, m = tuple(map(int, input().split()))
list_ = list(map(int, input().split()))
print(f(m))