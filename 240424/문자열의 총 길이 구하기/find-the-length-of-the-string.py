arr = input().split()

count = 0 

for i in range(len(arr)):
    count += len(arr[i])

print(count)