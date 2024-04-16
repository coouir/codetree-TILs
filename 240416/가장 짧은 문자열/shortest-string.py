a = input(); b = input(); c = input()
al = len(a); bl = len(b); cl = len(c)

if al >= bl: #a>b
    if cl >= al:
        print(cl-al)
    elif bl >= cl:
        print(al-cl)
    else:
        print(al-bl)
else: #b>a
    if cl >= bl:
        print(cl-al)
    elif al >= cl:
        print(bl-cl)
    else:
        print(bl-al)