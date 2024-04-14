count = 0

while True:
    if count == 3:
        break

    a = int(input())

    if a%2 == 0:
        print(a//2)
        count += 1