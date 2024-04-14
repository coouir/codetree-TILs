n = int(input())

count = 0

for i in range(1, 5001):
    n = n // i
    count += 1
    if n <= 1:
        print(count)
        break