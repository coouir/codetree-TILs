a = input()
check = False

for i in range(len(a)):
    if a[i] == " ":
        check = True

if check == True:
    for i in range(2, 10):
        print(a[i], end="")