def f(m):
    for i in range(m):
        a1, a2 = tuple(map(int, input().split()))
        s = 0
        for j in range(a1-1,a2):
            s += list_[j]
        print(s)

n, m = tuple(map(int, input().split()))
list_ = list(map(int, input().split()))
f(m)