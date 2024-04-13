result = 0
count = 0

for i in range(10):
    a = int(input())

    if 0 <= a <= 200:
        result += a
        count += 1

print(result, round(result/count, 1))