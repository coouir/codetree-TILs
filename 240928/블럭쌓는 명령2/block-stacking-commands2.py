N, K = map(int, input().split())

arr = [0]*(N+1)

for i in range(K):
    A, B = map(int, input().split())
    for j in range(A, B+1):
        arr[j] += 1

print(max(arr))