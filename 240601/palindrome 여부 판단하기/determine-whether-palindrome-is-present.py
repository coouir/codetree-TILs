def check(string):
    new = ''
    for i in range(len(string)):
        new += string[-i-1]
    return new

a = input()

if check(a) == a:
    print('Yes')
else:
    print('No')