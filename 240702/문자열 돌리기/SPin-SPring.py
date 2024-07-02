s = input()

for i in range(len(s)+1):
    if i == 0:
        print(s)
    else:
        print(s[-1*i:]+s[:len(s)-i])