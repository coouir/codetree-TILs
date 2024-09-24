N, B = map(int, input().split())
arr = []

while True:
    if N < B:
        arr.append(N)
        break
    arr.append(N%B)
    N //= B
print(''.join(map(str, arr[::-1])))