def lower_bound(x):
    answer = N

    s = 0
    e = N - 1
    while s <= e:
        mid = (s + e) // 2

        if arr[mid] >= x:
            answer = mid
            e = mid - 1
        else:
            s = mid + 1
    
    return answer

def upper_bound(x):
    answer = N

    s = 0
    e = N - 1
    while s <= e:
        mid = (s + e) // 2

        if arr[mid] > x:
            answer = mid
            e = mid - 1
        else:
            s = mid + 1
    
    return answer


N, M = map(int, input().split())
arr = list(map(int, input().split()))

for _ in range(M):
    x = int(input())
    print(upper_bound(x) - lower_bound(x))