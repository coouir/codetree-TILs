a = ["apple", "banana", "grape", "blueberry", "orange"]
b = input()
count = 0

for i in range(len(a)):
    if (a[i][2] == b) or (a[i][3] == b):
        print(a[i])
        count += 1
print(count)