def f(m, d):
    m_ = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if 1 <= m <= 12 and (m_[m-1] >= d):
        return True
    return False

        

m, d = tuple(map(int, input().split()))
if f(m, d):
    print('Yes')
else:
    print('No')