string, q = input().split(); q = int(q)

for i in range(q):
    n = int(input())
    if n == 1:
        string = string[1:] + string[0]
        print(string)
    elif n == 2:
        string = string[-1] + string[:-1]
        print(string)
    elif n == 3:
        string_3 = ''
        for j in range(len(string)-1, -1, -1):
            string_3 = string_3 + string[j]
        string = string_3
        print(string)