def swap(a, b):
    return b, a

n, m = tuple(map(int, input().split()))
n, m = swap(n, m)
print(n, m)