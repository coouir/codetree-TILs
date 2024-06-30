list_ = input()
sList = []
for i in list_:
    if i.isalpha():
        sList.append(i)

print(''.join(sList).upper())