def f(string):
    for i in range(len(string)):
        for j in range(i+1, len(string)):
            if string[i] != string[j]:
                return True
    return False

s = input()
if f(s):
    print('Yes')
else:
    print('No')