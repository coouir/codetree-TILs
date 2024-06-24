s = input(); p = input()

if p in s:
    if p == s:
        print(0)
    else:
        print(s.count(p))
else:
    print(-1)