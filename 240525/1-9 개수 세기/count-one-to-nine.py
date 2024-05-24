n = int(input())
arr = list(map(int, input().split()))

count = [0] * 10

for i in arr:
    count[i] += 1

for j in range(1, 10):
    print(count[j])