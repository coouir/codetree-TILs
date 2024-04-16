a = input(); b = input(); c = input()

a_ = len(a); b_ = len(b); c_ = len(c)

if a_ >= b_:
    if c_ >= a_:
        print(c_ - a_)
    elif b_ >= c_:
        print(a_ - c_)
    else:
        print(a_ - b_)
else: # b>a인 경우
    if c_ >= b_:
        print(c_ - a_)
    elif a >= c:
        print(b_ - c_)
    else:
        print(b_ - a_)