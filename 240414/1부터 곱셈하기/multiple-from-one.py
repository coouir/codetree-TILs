n = int(input())
result = 1

for i in range(1, 11):
    result *= i
    if result >= n:
        print(i)
        break