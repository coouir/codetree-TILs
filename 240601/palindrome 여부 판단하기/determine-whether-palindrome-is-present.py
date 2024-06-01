a = input()
# aoooa
def check(string):
    for i in range(len(string)):
        if string[i] != string[-i-1]:
            return False
    return True
if check(a):
    print('Yes')
else:
    print('No')