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
        string = string[::-1]
        print(string)