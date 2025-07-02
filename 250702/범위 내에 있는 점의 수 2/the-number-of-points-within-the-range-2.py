N, Q = map(int, input().split())

arr = [0 for _ in range(1000010)]
prefix = [0 for _ in range(1000010)]

I = list(map(int, input().split()))
for i in range(N):
    arr[I[i]] = 1

for i in range(1, 1000010):
    prefix[i] = arr[i] + prefix[i-1]

for q in range(Q):
    A, B = map(int, input().split())
    print(prefix[B] - prefix[A-1])
