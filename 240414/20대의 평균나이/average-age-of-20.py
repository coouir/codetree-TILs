sum_ = 0
count = 0

while True:
    a = int(input())
    if 20 <= a < 30:
        sum_ += a
        count += 1
    else:
        break

print(f"{round(sum_/count, 2):.2f}")