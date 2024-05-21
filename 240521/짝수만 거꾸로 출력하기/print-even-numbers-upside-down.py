n = int(input())
arr = list(map(int, input().split()))
list_even = []

for i in arr:
    if i%2 == 0:
        list_even.append(i)
list_even = list_even[::-1]
for i in list_even:
    print(i, end=' ')