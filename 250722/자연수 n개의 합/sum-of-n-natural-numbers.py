S = int(input())

answer = -1

s = 1
e = S
while s <= e:
    mid = (s + e) // 2

    total = (mid+1)*mid // 2
    if total > S:
        e = mid - 1
    else:
        answer = mid
        s = mid + 1

print(answer)