N, M = map(int, input().split())

arrN = list(map(int, input().split()))
arrM = sorted(list(map(int, input().split())))

cnt = 0

for i in range(len(arrN)-len(arrM)+1):
    if sorted(arrN[i:i+len(arrM)]) == arrM:
        cnt += 1

print(cnt)