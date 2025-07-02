N = int(input())

arr = [0 for _ in range(200100)]
prefix = [0 for _ in range(200100)]

arrP = [list(map(int, input().split())) for _ in range(N)]
arrS = []
for i in range(N):
    arrS.append(arrP[i][0])
    arrS.append(arrP[i][1])
arrS.sort()

mapper = {}
for i in range(N*2):
    mapper[arrS[i]] = i+1

for i in range(N):
    arrP[i][0] = mapper[arrP[i][0]]
    arrP[i][1] = mapper[arrP[i][1]]

for i in range(N):
    arr[arrP[i][0]] += 1
    arr[arrP[i][1]] -= 1

for i in range(1, 200100):
    prefix[i] = arr[i] + prefix[i-1]

print(max(prefix))