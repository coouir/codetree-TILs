N, M = map(int, input().split())
arr = list(map(int, input().split()))

for _ in range(M):
    x = int(input())

    answer = - 1

    s = 0
    e = N - 1
    while s <= e:
        mid = (s + e) // 2
        if arr[mid] == x:
            answer = mid + 1
            break
        elif arr[mid] > x:
            e = mid - 1
        else:
            s = mid + 1
    
    print(answer)