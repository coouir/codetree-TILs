arr = list(map(int, input().split()))
count = [0] * 7

for i in arr:
    count[i] += 1

for j in range(1, 7):
    print(f"{j} - {count[j]}")