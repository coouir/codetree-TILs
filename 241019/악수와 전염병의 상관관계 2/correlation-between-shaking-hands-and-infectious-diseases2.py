N, K, P, T = map(int, input().split());

arrN = [0]*(N+1)
arrN[P] = 1
cntN = [0]*(N+1)

arr = []
for i in range(T):
    arr.append(list(map(int, input().split())))
arr.sort(key = lambda x: [x[0]])

for i in range(T):
    x, y = arr[i][1], arr[i][2]
    if arrN[x] == 1:
        if cntN[x] < K:
            arrN[y] = 1
        
    else:
        if arrN[y] == 1:
            if cntN[y] < K:
                arrN[x] = 1
    cntN[x] += 1
    cntN[y] += 1

print(''.join(map(str, arrN[1:])))