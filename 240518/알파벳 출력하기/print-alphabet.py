n = int(input())

start = 65

for i in range(n):
    for j in range(i+1):
        print(chr(start), end='')
        if chr(start) == "Z":
            start = 64
        start += 1
    print()