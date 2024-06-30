list_ = input()

for i in list_:
    if ('A' <= i <= 'Z') or ('a' <= i <= 'z'):
        print(i.lower(), end='')
    if i.isdigit():
        print(i,end='')