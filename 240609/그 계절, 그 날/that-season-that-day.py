def y_check(y):
    if y%4 == 0:
        if y%100 == 0:
            if y%400 == 0:
                return True
            else:
                return False
        else:
            return True
    else:
        return False

def f(y_, m, d):
    m_ = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if y_ == True:
        m_[1] = m_[1] + 1

    if 1 <= m <= 12 and (m_[m-1] >= d):
        return True
    return False

def s(m):
    if 3 <= m <= 5:
        return 'Spring'
    elif 6 <= m <= 8:
        return 'Summer'
    elif 9 <= m <= 11:
        return 'Fall'
    else:
        return 'Winter'

y, m, d = tuple(map(int, input().split()))
c = False
if y_check(y):
    c = f(True, m, d)
else:
    c = f(False, m, d)

if c:
    print(s(m))
else:
    print(-1)