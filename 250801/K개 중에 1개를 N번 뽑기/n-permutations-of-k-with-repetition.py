def recur(depth):
    if depth == N:
        print(*arr)

        return
    
    for i in range(K):
        arr[depth] = i+1
        recur(depth + 1)

K, N = map(int, input().split())
arr = [0 for i in range(N)]

recur(0)