cnt = 0

arr = list(input())
for i in range(len(arr)):
    if arr[i] == '(':
        for j in range(i+1, len(arr)):
            if arr[j] == ')':
                cnt += 1
print(cnt)