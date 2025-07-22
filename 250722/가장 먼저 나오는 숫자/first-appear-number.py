def lower_bound(x):
    answer = -1

    s = 0
    e = N - 1
    while s <= e:
        mid = (s + e) // 2

        if arrN[mid] >= x:
            answer = mid
            e = mid - 1
        else:
            s = mid + 1
    
    return answer


N, M = map(int, input().split())
arrN = list(map(int, input().split()))
arrM = list(map(int, input().split()))

for m in range(M):
    x = lower_bound(arrM[m])
    if arrN[x] == arrM[m]:
        print(x+1)
    else:
        print(-1)