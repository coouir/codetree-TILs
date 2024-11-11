N, B = map(int, input().split())
arr = [int(input()) for _ in range(N)]

T = 0

for i in range(N):
    t, s = 0, 0
    for j in range(N):
        if i == j:
            s += arr[j]/2
        else:
            s += arr[j]
        if s > B:
            break
        t += 1

    T = max(T, t)
print(T)