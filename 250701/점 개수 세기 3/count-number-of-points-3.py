N, Q = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()

mapper = {}
for i in range(N):
    mapper[arr[i]] = i+1

for i in range(N):
    arr[i] = mapper[arr[i]]

arrr = [0 for i in range(100010)]
for i in range(N):
        arrr[arr[i]] = 1

prefix = [0 for i in range(100010)]
for i in range(1, 100010):
    prefix[i] = arrr[i] + prefix[i-1]

for q in range(Q):
    a, b = map(int, input().split())
    print(prefix[mapper[b]] - prefix[mapper[a]-1])