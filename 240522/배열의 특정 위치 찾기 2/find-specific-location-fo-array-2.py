arr = list(map(int, input().split()))

o = 0
e = 0

for i in range(len(arr)):
    if i % 2 == 0:
        o += arr[i]
    else:
        e += arr[i]

if o > e:
    print(o-e)
else:
    print(e-o)