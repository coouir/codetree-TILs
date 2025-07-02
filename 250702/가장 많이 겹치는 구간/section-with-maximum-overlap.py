N = int(input())

arr = [0 for _ in range(200010)]
prefix = [0 for _ in range(200010)]

for i in range(N):
    x1, x2 = map(int, input().split())
    arr[x1] += 1
    arr[x2] -= 1

for i in range(1, 200010):
    prefix[i] = arr[i] + prefix[i-1]
     
print(max(prefix))